#include <bits/stdc++.h>

using namespace std;


int main(){
  int n,k, arr[400];

  cin >> n >> k;
  int tam = 2*n+1;

  cin >> arr[0];
  cin >> arr[1];
  for(int i=2; i<tam; i++){
    cin >> arr[i];
    if(k){
      if( (arr[i-1]-arr[i-2])>1 && 1<(arr[i-1] - arr[i]) ){
        k--;
        arr[i-1]--;
      }
    }
  }

  for(int i=0; i<tam; i++){
    cout << arr[i] << " ";
  }

  return 0;
}