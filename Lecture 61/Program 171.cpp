// GeeksForGeeks - Reverse First K elements of Queue
// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k)
    {
        // Step1: Pop first k from queue and put into the stack
        stack<int> s;
        for (int i = 0; i < k; i++)
        {
            int val = q.front();
            q.pop();
            s.push(val);
        }

        // Step2: Fetch from stack and push into the q
        while (!s.empty())
        {
            int val = s.top();
            s.pop();
            q.push(val);
        }

        // Step3: Fetch first (n - k) element from q and push back

        int t = q.size() - k;

        while (t--)
        {
            int val = q.front();
            q.pop();
            q.push(val);
        }
        return q;
    }
};
