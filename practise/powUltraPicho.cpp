#include <bits/stdc++.h>

using namespace std;

int my_pow(int v, int p){

  if(p == 0) return 1;
  
  return v * my_pow(v, p-1);
}

int main(){

  int v, p;
  cin >> v >> p;
  cout << my_pow(v,p) << endl;

  return 0;
}