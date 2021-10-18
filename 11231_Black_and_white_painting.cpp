#include <bits/stdc++.h>


using namespace std;

int main(){
  int n, m, c;
  
  while(cin >> n >> m >> c, n + m + c){
    cout << ((n - 7)*(m - 7) + c)/2 << "\n";
  }

  return 0;
}