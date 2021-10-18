#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, sum=0, aux, drop=0;
  cin >>n;
  for(int i=0; i<n; i++){
    cin >> aux;
    if(sum == 0 && aux < 0){
      drop++;
    }
    else sum+=aux;
    
  }

  cout << drop << endl;


  return 0;
}