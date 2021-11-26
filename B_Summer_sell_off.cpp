#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<int> v;
  int n, k, a, b;
  long long sum = 0;
  cin >> n >> k;
  for(int i=0; i<n; i++){
    cin >> a >> b;
    sum+= min(a,b);
    if(b > 2*a){ 
      v.push_back(a);
    }
    else{
      if(b-a < 0) v.push_back(0);
      else v.push_back(b-a);
    } 
  }

  sort(v.begin(), v.end());
  
  for(int i=0; i<k; i++){
    sum+= v[n-1-i];
  }
  
  cout << sum << endl;

  return 0;
}