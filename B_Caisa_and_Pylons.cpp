#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, maxi=0, aux;
  cin >> n;
  while(n--){
    cin >> aux;
    maxi = max(aux, maxi);
  }

  cout << maxi << endl;

  return 0;
}