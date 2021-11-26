#include <bits/stdc++.h>


using namespace std;

int main(){
	
	int n, arr[(int) 1e5+10];
	/* cout << "here" << endl; */
	cin >> n;
	
	int down = 1, up = n;
	if(n%4 == 0 || n%4 == 1){
		
		while(down != up && (down-up) != 1){
			
			arr[down] = down+1;
			arr[down+1] = up;
			arr[up] = up-1;
			arr[up-1] = down;
			down+=2;
			up-=2;
			
		}
		
		if(n%4 == 1) arr[(1+n)/2] = (1+n)/2;
		
		for(int i=1; i<=n; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
		
	}else cout << -1 << endl;
	
	
	
	return 0;
}