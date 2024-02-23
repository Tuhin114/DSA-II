// Sum of minimum and maximum elements of all subarrays of size k.

#include <iostream>
#include <queue>
using namespace std;

int solve(int *arr, int n, int k)
{
    deque<int> maxi;
    deque<int> mini;

    // Addition of first k size window
    for (int i = 0; i < k; i++)
    {
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }
        while (!mini.empty() && arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;
    for (int i = k; i < n; i++)
    {
        ans += arr[maxi.front()] + arr[mini.front()];

        // Next window

        // Removal
        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_front();
        }
        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_front();
        }

        // Addition
        for (int j = i - k + 1; j <= i; j++)
        {
            while (!maxi.empty() && arr[maxi.back()] <= arr[j])
            {
                maxi.pop_back();
            }
            while (!mini.empty() && arr[mini.back()] >= arr[j])
            {
                mini.pop_back();
            }

            maxi.push_back(j);
            mini.push_back(j);
        }
    }

    // Make sure to consider the last window
    ans += arr[maxi.front()] + arr[mini.front()];

    return ans;
}

int main()
{
    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;
    cout << solve(arr, 7, k) << endl;

    return 0;
}
