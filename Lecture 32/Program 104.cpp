//  CodeStudio Count Ways To Reach The N-th Stairs

//  https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10&leftPanelTabValue=PROBLEM

//  #include <bits/stdc++.h>
// int countDistinctWays(int nStairs) {

//     //base case
//     if(nStairs < 0){
//         return 0;
//     }

//     if(nStairs == 0){
//         return 1;
//     }

//     //R.C
//     int ans = countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);

//     return ans;
// }