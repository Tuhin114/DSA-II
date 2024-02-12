// CodeStudio - Redundant Brackets
//  https://www.codingninjas.com/studio/problems/redundant-brackets_975473?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

/**
#include <bits/stdc++.h>
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }else{
            //ch will be either ')' or lowercase letter
            if(ch == ')'){
                bool isRedudant = true;
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/'){
                        isRedudant = false;
                    }
                    st.pop();
                }
                if(isRedudant == true){
                    return 1;
                }
                st.pop();
            }
        }
    }
    return 0;
}
*/