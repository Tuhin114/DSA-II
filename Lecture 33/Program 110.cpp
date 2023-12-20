// CodeStudio - Binary Search
// https://www.codingninjas.com/studio/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11&leftPanelTabValue=PROBLEM

// int solve(vector<int> &nums, int s, int e, int target){

//     //Base Case

//     //Element not found
//     if(s>e){
//         return -1;
//     }

//     int mid=s+(e-s)/2;
//     //Element found
//     if(nums[mid] == target){
//         return mid;
//     }

//     if(nums[mid] < target){
//         return solve(nums,mid+1,e,target);
//     }
//     else{
//         return solve(nums,s,mid-1,target);
//     }
// }

// int search(vector<int> &nums, int target) {

//     int n = nums.size();
//     int ans = solve(nums,0,n-1,target);
// }
