#include <bits/stdc++.h>

using namespace std;

int findZero(string s, int lastZero, int pos){
	
	for(int i=lastZero; i>pos; i--){
		if(s[i] == '0') return i;
	}
	return -1;
}


int main(){
	
	int n, lastZero, pos = 0, t;
	string s;
	
	cin >> t;
	while(t--){
		set<int> conj;
		cin >> n;
		cin >> s;
		/* cout << "n: " << n << endl << "s: " << s << endl; */
		
		pos = -1;
		lastZero = n-1;
		
		/* cout << s << endl; */
		for(int i=0; i<n; i++){
			if(s[i] == '1'){
				lastZero = findZero(s, lastZero, i);
				if(lastZero == -1){
					pos = 0;
					break;
				}
				
				pos++;
				s[lastZero] = '1';
				s[i] = '0';
				
				/* cout << "pares: " << i << " " << lastZero << endl; */
				conj.insert(i+1);
				conj.insert(lastZero+1);
			}
		}
		pos = conj.size();
		if(pos > 0) cout << "1\n";
		/* cout << s << " "; */
		cout << pos << " ";
		
		for(auto u : conj){
			cout << u << " ";
		}
		
		cout << "\n";
	}
	
	
	return 0;
}