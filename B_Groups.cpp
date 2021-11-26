#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t, n;
	bool day, puede, noOperar, d0;
	bitset<1001> possible, pTemp;
	cin >> t;
	
	for(int i=0; i<t; i++){
		puede = false;
		noOperar = false;
		d0 = false;

		
		cin >> n;
		vector<vector<int> > rest(5);
		
		for(int j=0; j<n; j++){
			for(int k=0; k<5; k++){
				cin >> day;
				if(day) rest[k].push_back(j);
			}
		}
		
		
		//Observe if its possible create the groups without do combinations.
		for(int j=0; j<5; j++){
			if(rest[j].size() == n && !noOperar) noOperar = true;
			else if(rest[j].size() > 0) d0 = true;
		}
		if(noOperar && d0) puede = true;
		
		
		//If in the previous step not obtain a list with size n; then, the variable noOperar will set false and proccede to make all combinations.
		if(!noOperar){
			for(int j=0; j<4; j++){
				
				//Initializer.
				for(int k=0; k<n; k++) possible.set(k,0);
				for(int k=0; k<rest[j].size(); k++) possible.set(rest[j][k], 1);
				
				
				for(int l=j+1; l<5; l++){
					
					//Initializer.
					pTemp = possible;
					for(int k=0; k<rest[l].size(); k++) pTemp.set(rest[l][k], 1);
					
					//Compare
					if(pTemp.count() == n){
						puede = true;
						j = 6;
						break;
					}
					
				}
				
			}
		}
		
		puede ? cout << "YES" << endl : cout << "NO" << endl;
	}
	
	
	
	
	return 0;
}