#include <bits/stdc++.h>

using namespace std;

int tresn1(int n){

  if(n == 1) return 1;
  if(n & 1) return 1 + tresn1(3*n+1);
  else return 1 + tresn1(n/2);
}

int main(){
  int n;
  cin >> n;
  cout << tresn1(n) << endl;
  return 0;
}