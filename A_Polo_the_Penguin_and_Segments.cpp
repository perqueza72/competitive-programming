#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, m, k, sum=0, a, b;
  cin >> n >> k;
  for(int i=0; i<n; i++){
    cin >> a >> b;
    sum+= b-a+1;
  }

  cout << ((k-(sum%k))%k) << endl;

  return 0;
}