#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t, n, maxi, rest;
	int arr[200010];
	cin >> t;
	for(int i=0; i<t; i++){
		
		cin >> n;
		for(int j=0; j<n; j++){
			cin >> arr[j];
		}
		sort(arr, arr+n);
		
		rest = 0;
		maxi = (int) -1e9;
		for(int j=0; j<n; j++){
			/* cout << "number: " << arr[j] << " " << rest << endl; */
			arr[j]+=rest;
			maxi = max(arr[j], maxi);
			rest-= arr[j];
		}
		
		cout << maxi << "\n";
	}
	
	return 0;
}