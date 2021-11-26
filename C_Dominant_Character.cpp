#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t, n, bs, cs, r, maximo = (int) 1e6+10;
	int ccs, bbs, ddist, dist;
	vector<int> ini(3);
	char c;
	
	cin >> t;
	while(t--){
		bs = 0;
		cs = 0;
		r = maximo;
		vector<vector<int> > v;
		
		cin >> n;
		getchar();
		for(int i=0; i<n; i++){
			c = getchar();
			if(c == 'a'){
				ini[0] = i;
				ini[1] = bs;
				ini[2] = cs;
				v.push_back(ini);
			}
			else{
				if(c == 'b') bs++;
				if(c == 'c') cs++;
			}
		}
		getchar();
		
		if(v.size() <= 1){
			cout << -1 << endl;
			continue;
		}
		dist = v[1][0] - v[0][0];
		bs = v[1][1] - v[0][1];
		cs = v[1][2] - v[0][2];
		if(dist <= 3 && bs <= 1 && cs <= 1) r = min(r, dist);
		
		for(int i=2; i<v.size(); i++){
			dist = 	v[i][0] - v[i-1][0];
			bs = 		v[i][1] - v[i-1][1];
			cs = 		v[i][2] - v[i-1][2];
			
			ddist = v[i][0] - v[i-2][0];
			bbs = 	v[i][1] - v[i-2][1];
			ccs = 	v[i][2] - v[i-2][2];
			/* cout << "ddist: " << ddist << endl;
			cout << "bbs: " << bbs << endl;
			cout << "ccs: " << ccs << endl;
		 */
			if(dist <= 3 && bs <= 1 && cs <= 1) r = min(r,dist);
			if(ddist == 6 && bbs <= 2 && ccs <= 2) r = min(r, 6);
		}
		
		if(r == maximo) cout << -1 << endl;
		else cout << (r+1) << endl;
	}
	
	return 0;
}