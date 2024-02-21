// GeeksForGeeks - First non-repeating character in a stream
// https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        unordered_map<char, int> count;
        queue<int> q;
        string ans = "";

        for (int i = 0; i < A.length(); i++)
        {
            char ch = A[i];

            // Increase the count
            count[ch]++;

            // Push in queue
            q.push(ch);

            while (!q.empty())
            {
                if (count[q.front()] > 1)
                {
                    // Repeating character
                    q.pop();
                }
                else
                {
                    // Non-repeating character
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};
