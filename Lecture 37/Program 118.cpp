// CodeStudio-Subsequences of String
// https://www.codingninjas.com/studio/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16&leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h>
// void solve(string str, string output, int index, vector<string>& ans){
// 	//Base case
// 	if(index >= str.length()){
// 		if(output.length() > 0){
// 			ans.push_back(output);
// 		}
// 		return ;
// 	}

// 	//Exclude
// 	solve(str, output, index+1, ans);

// 	//Include
// 	char element = str[index];
// 	output.push_back(element);
// 	solve(str, output, index+1, ans);

// }

// vector<string> subsequences(string str){

// 	vector<string>ans;
// 	string output = "";
// 	int index = 0;
// 	solve(str, output, index, ans);
// 	return ans;

// }
