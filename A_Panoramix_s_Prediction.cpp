#include <bits/stdc++.h>

using namespace std;

bool primes(int n){

  for(int i=2; i<n; i++){
    // cout << n << " " << i << endl;
    if(!(n%i)) return false;
  }
  return true;

}


int main(){

  vector<int> v;
  for(int i=2; i<50; i++){
    if(primes(i)) v.push_back(i);
  }

  int n,m;
  bool llega = false;
  cin >> n >> m;
  
  for(int i=0; i<v.size()-1; i++){
    // cout << v[i] << endl;
    if(v[i] == n){
      if(v[i+1] == m){
        cout << "YES" << endl;
        llega = true;
        break;
        }
      // return 0;
    }
  }

  if(!llega) cout << "NO" << endl;

  return 0;
}