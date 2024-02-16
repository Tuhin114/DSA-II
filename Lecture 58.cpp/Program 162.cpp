// CodeStudio - N Stacks In An Array
//  https://www.codingninjas.com/studio/problems/n-stacks-in-an-array_1164271?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio11thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio11thfeb&leftPanelTabValue=PROBLEM

/**
#include <bits/stdc++.h>
class NStack
{
    int* arr;
    int* top;
    int* next;

    int n,s;
    int freeSpot;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
       n = N;
       s = S;
       arr = new int[s];
       top = new int[n];
       next = new int[s];

       //Top Initialize
       for(int i = 0; i < n; i++){
           top[i] = -1;
       }

       //Next Initialize
       for(int i = 0; i < s; i++){
           next[i] = i + 1;
       }

       //Update last index value to -1
       next[s - 1] = -1;

       //Initialize freeSpot
       freeSpot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        //Check for overflow
        if(freeSpot == -1){
            return false;
        }

        //Find index
        int index = freeSpot;

        //Insert element into array
        arr[index] = x;

        //Update freeSpot
        freeSpot = next[index];

        //Update next
        next[index] = top[m - 1];

        //Update top
        top[m - 1] = index;

        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        //Check underflow condition
        if(top[m - 1] == -1){
            return -1;
        }

        int index = top[m - 1];

        top[m - 1] = next[index];

        next[index] = freeSpot;

        freeSpot = index;

        return arr[index];
    }
};
*/