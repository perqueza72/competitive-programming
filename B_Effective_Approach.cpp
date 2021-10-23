#include <bits/stdc++.h>

using namespace std;


int main(){

  long long n, m, q, aux; 
  long long suma=0, sumb=0;

  cin >> n;
  int arr[n+1] = {0};
  for(int i=1; i<=n; i++){
    cin >> aux;

    arr[aux] = i;
  }

  cin >> m;
  for(int i=0; i<m; i++){
    cin >> q;
    suma+= arr[q];
    sumb+= n+1-arr[q];
  }

  cout << suma << " " << sumb;

  return 0;
}