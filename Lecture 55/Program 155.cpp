// CodeStudio - Sort a Stack
//  https://www.codingninjas.com/studio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

/**
#include <bits/stdc++.h>
void sortedInsert(stack<int> &stack, int num){
    //Base case
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    //Recursive call
    sortedInsert(stack,num);
    stack.push(n);
}
void sortStack(stack<int> &stack)
{
    //Base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    //Recursive call
    sortStack(stack);
    sortedInsert(stack, num);
}*/