#include <bits/stdc++.h>

using namespace std;

int main(){

  int k, r, cont=1, rest;
  cin >> k >> r;
  k = k%10;
  rest=k;

  while(k != r){
    if((cont*rest)%10 == 0) break;

    k=(k+rest)%10;
    cont++;
  

  }

  cout << cont << endl;
  return 0;
}