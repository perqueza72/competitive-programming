#include <bits/stdc++.h>

using namespace std;


int main(){

  int n, sum=0, sum2=0;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
    sum+=v[i];
  }
  sort(v.begin(), v.end());
  sum=sum/2;
  while(v.size()){
    sum2+=v.back();
    v.pop_back();
    // cout << v.back();
    if(sum2>sum) break;

  }

  cout << (n-v.size()) << endl;


  return 0;
}