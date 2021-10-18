#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n;
  bool neg = false;
  cin >> n;

  if(n&1) neg = true;

  n = (n+1)/2;
  if(neg) cout << (n*-1) << endl;
  else cout << n << endl;

  return 0;
}