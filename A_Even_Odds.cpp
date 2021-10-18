#include <bits/stdc++.h>

using namespace std;


int main(){

  long long n, k, l;
  cin >> n >> k;

  l = (n+1)/2;

  if(l >= k){
    cout << (2*k-1) << endl;
  }
  else{
    cout << (2*(k-l)) << endl;
  }

  return 0;
}