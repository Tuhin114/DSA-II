// GeeksForGeeks - Queue Reversal
// https://www.geeksforgeeks.org/problems/queue-reversal/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// function Template for C++

// Function to reverse the queue.
class Solution
{
public:
    queue<int> rev(queue<int> q)
    {
        stack<int> s;

        while (!q.empty())
        {
            int element = q.front();
            q.pop();
            s.push(element);
        }

        while (!s.empty())
        {
            int element = s.top();
            s.pop();
            q.push(element);
        }
        return q;
    }
};
