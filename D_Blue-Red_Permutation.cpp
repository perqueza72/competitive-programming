#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n, cB, cR, t;
	bool puede;
	char c;
	
	cin >> t;
		for(int k=0; k<t; k++){
		cin >> n;
		
		puede = true;
		int arr[n];
		vector<int> b;
		vector<int> r;
		
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		getchar();
		for(int i=0; i<n; i++){
			c = getchar();
			if(c == 'R'){
				r.push_back(arr[i]);
			}else{
				b.push_back(arr[i]);
			}
		}
		getchar();
		
		sort(r.begin(), r.end());
		sort(b.begin(), b.end());
		
		for(int i=0; i<b.size(); i++){
			if(b[i] < i+1){
				puede = false;
				break;
			}
		}
		
		if(puede){
			for(int i=0; i<r.size(); i++){
				if(r[i] > (int)b.size()+i+1){
					/* cout << r[i] << ">" << i << "+" << b.size() << "+1" << endl; */
					puede = false;
					break;
				}
			}
		}
		
		if(puede) cout << "YES\n";
		else cout << "NO\n";
	}
	
	
	return 0;
}