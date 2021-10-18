#include <bits/stdc++.h>

using namespace std;

int main(){

  unsigned int n, r= 0;
  cin >> n;
  for(int i=0; i<32; i++){
    if(n&(1<<i)) r++;
    // cout << (n&(1<<i)) << endl;
  }
  cout << r;

  return 0;
}