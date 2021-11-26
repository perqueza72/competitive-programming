#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t, caso;
	long long x, n, r;
	cin >> t;
	for(int k=0; k<t; k++){
		cin >> x >> n;
		
		caso = n%4;
		switch(caso){
			case 0:
				r= 0;
			break;
			case 1:
				r = n;
			break;
			case 2:
				r = -1;
			break;
			case 3:
				r = -(n+1);
			break;
		}
		
		if(x % 2 == 0) r*=-1;
		
		r = x+r;
		
		cout << r << endl;
	}
	
	return 0;
}