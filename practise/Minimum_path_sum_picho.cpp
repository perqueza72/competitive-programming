#include <bits/stdc++.h>

using namespace std;

int n = 100, m = 100;

int minimum_path(int arr[][100]){
	int dp[n][m];
	memset(dp, (int) 1e9, sizeof dp);
	dp[0][0] = arr[0][0];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i == 0 && j == 0) continue;
			if(i == 0) dp[i][j] = arr[i][j] + dp[i][j-1];
			else if(j == 0) dp[i][j] = arr[i][j] + dp[i-1][j];
			else dp[i][j] = arr[i][j] + min(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[n-1][m-1];
}

int main(){
	
	cin >> n >> m;
	int arr[n][100];
	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}
	
	cout << minimum_path(arr) << endl;
	
	return 0;
}