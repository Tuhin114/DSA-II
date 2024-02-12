// CodeStudio -  Reverse Stack Using Recursion
//  https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

/**
void insertAtBottom(stack<int> &s, int element){
    //Basecase
    if(s.empty()){
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    //Recursive Call
    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &stack) {
    //Base Case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    //Recursive call
    reverseStack(stack);

    insertAtBottom(stack,num);
}
*/