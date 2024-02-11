// CodeStudio -  Insert An Element At Its Bottom In A Given Stack
// https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
#include <stack>
using namespace std;

void solve(stack<int> &s, int x)
{
    // Base Case
    if (s.empty())
    {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive Call
    solve(s, x);
    s.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    solve(myStack, x);
    return myStack;
}
