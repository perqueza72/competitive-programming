#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, m, aux;
  long long sum=0;
  cin >> n >> m;

  long long a[5] = {0}, b[5] = {0};

  aux = n/5;
  for(int i=0; i<5; i++) a[i] = aux;
  
  aux = m/5;
  for(int i=0; i<5; i++) b[i] = aux;

  for(int i=1; i<=(n%5); i++){
    a[i]++;
  }
  for(int i=1; i<=(m%5); i++){
    b[i]++;
  }

  for(int i=1; i<5; i++){
    sum += a[i]*b[5-i];
    // cout << i << ": " << a[i] << ";  ";
    // cout << (5-i) << ": "  << b[5-i] << endl;
  }
  sum+= a[0]*b[0];
  // cout << a[0] << " " << b[0] << endl;

  cout << sum << endl;

  return 0;
}