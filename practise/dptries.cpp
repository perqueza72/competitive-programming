#include <bits/stdc++.h>

using namespace std;




int main(){
	
	int n, k;
	cin >> n >> k;
	
	int dp[n+1][k+1];
	memset(dp, 0, sizeof dp);
	dp[0][0] = 1;
	dp[1][1] = 1;
	dp[2][1] = 1;
	int escalon = n+1;
	int saltosMaximos = k+1;
	for(int posicionActual=2; posicionActual<escalon; posicionActual++){
		for(int saltosRealizados=2; saltosRealizados<saltosMaximos; saltosRealizados++){ 
			dp[posicionActual][saltosRealizados] = dp[posicionActual-1][saltosRealizados-1] + dp[posicionActual-2][saltosRealizados-1];
		}
	}
	
	int sum = 0;
	for(int i=0; i<k+1; i++){
		sum+= dp[n][i];
	}
	
	cout << sum << endl;
	
	return 0;
}