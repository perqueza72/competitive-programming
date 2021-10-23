#include <bits/stdc++.h>

using namespace std;

int main(){

  bool stan;
  long long n, m;
  while(cin >> n >> m, n){
    

    stan = false;

    while(n > 0 && m > 0){

      if(max(n,m) >= (min(n,m)*2)){
        stan = !stan;
        break;
      }
      
      if(m > n) m=m%n;
      else n=n%m;
      stan= !stan;
    }
    stan ? cout << "Stan wins\n" : cout << "Ollie wins\n";

  }

  return 0;
}