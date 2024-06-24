// Step 1: Delulu
// Step 2: Trace back the path
// Step 3: Find Base case

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int dp[2000];
    int f(int i,int n,vector<int>& c) {
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int ans=1e9;
        ans=c[n-1-i]+min(f(i-1,n,c),f(i-2,n,c));
        dp[i]=ans;
        return
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof dp);
        int n=cost.size();
        return min(f(n-1,n,cost),f(n-2,n,cost));
    }
};

int main() {
	Solution s;
	vector<int> cost = { 10, 15, 20};
	cout << s.minCostClimbingStairs(cost) << endl;
	return 0;
}
