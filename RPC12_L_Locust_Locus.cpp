#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int k;
	int y, c1, c2, mini = (int) 1e9;
	
	cin >> k;
	for(int i=0; i<k; i++){
		
		cin >> y >> c1 >> c2;
		
		mini = min(mini, y + (c1*c2)/__gcd(c1,c2));
		
	}
	
	cout << mini << endl;
	
	return 0;
}