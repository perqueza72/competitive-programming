#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, h, sum;
  double aux;
  cin >>n>>h;

  sum = 0;
  for(int i=0; i<n; i++){
    cin >> aux;
    if(aux/h <= 1) sum++;
    else sum+= ceil(aux/h);
  }

  cout << sum << endl;
  return 0;
}