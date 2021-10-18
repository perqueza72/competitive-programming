#include <bits/stdc++.h>

using namespace std;

int main(){

  double n, m, a;
  long long r, nr, mr;
  cin >> n >> m >> a;

  nr = ceil(n/a);
  mr = ceil(m/a); 
  r= nr*mr;
  cout << r << endl;

  return 0;
}