// CodeStudio-Check Palindrome (recursive)
// https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// bool checkpalindrome(string& str, int i, int j){

//     //Base
//     if(i>j){
//         return true;
//     }
//     if(str[i] != str[j]){
//         return false;
//     }
//     else{
//         //Recursive call
//         return checkpalindrome(str, i+1, j-1);
//     }
// }

// bool isPalindrome(string& str) {

//     return checkpalindrome(str, 0, str.length()-1);
// }
