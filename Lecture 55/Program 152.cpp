// CodeStudio - Valid Parentheses
// https://www.codingninjas.com/studio/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

// #include <stack>
// #include <string>

// bool isValidParenthesis(string s) {
//     stack<char> str;

//     for (int i = 0; i < s.length(); i++) {
//         char ch = s[i];

// If opening bracket, stack push
// If closing bracket, stack top check and po

//         if (ch == '(' || ch == '{' || ch == '[') {
//             str.push(ch);
//         } else {
//             if (!str.empty()) {
//                 char top = str.top();
//                 if ((ch == ')' && top == '(') ||
//                 (ch == '}' && top == '{') ||
//                 (ch == ']' && top == '[')) {
//                     str.pop();
//                 } else {
//                     return false;
//                 }
//             } else {
//                 return false;
//             }
//         }
//     }
//     if(str.empty()){
//             return true;
//         }else{
//             return false;
//         }
// }
