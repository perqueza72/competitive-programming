#include <bits/stdc++.h>

using namespace std;

vector<int> secuencia;

int fibo(int n){
	
	if(secuencia[n] != -1)
		return secuencia[n];

	if(n == 0) return 0;
	if(n == 1) return 1;
	
	secuencia[n] = fibo(n-1) + fibo(n-2);
	return secuencia[n];
}

int main(){
	
	int n;
	cin >> n;
	secuencia.assign(n+1,-1);
	secuencia[0] = 0;
	secuencia[1] = 1;
	
	cout << fibo(n) << endl;
	
	return 0;
}