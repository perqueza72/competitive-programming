#include <bits/stdc++.h>

using namespace std;

int main(){

  int n,t1,t2,k,r,a,b;
  string s;
  vector<pair<int,int> > v;

  cin >> n >> t1 >> t2 >> k;
  for(int i=1; i<=n; i++){
    cin >> a >> b;
    r = max(a*t1*(100-k)+b*t2*100, b*t1*(100-k)+a*t2*100);
    // cout << r << endl;
    v.push_back(make_pair(r,-i));
  }
  sort(v.begin(), v.end());


  while(v.size()){
    s = to_string(v.back().first);
    n = -v.back().second;
    cout << n << ' ';
    for(int i=0; i<s.length()-2; i++) cout << s[i];
    cout << '.';
    for(int i=s.length()-2; i<s.length(); i++) cout << s[i];
    cout << '\n';

    v.pop_back();
  }

  return 0;
}