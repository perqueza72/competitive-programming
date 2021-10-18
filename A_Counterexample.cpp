#include <bits/stdc++.h>

using namespace std;


int main(){

  long long l, r, a, b, c, range;
  cin >> l >> r;
  range = abs(l-r)+1;
  
  if(range > 3){
    if(l%2)
    {
      cout << (l+1) << " " << (l+2) << " " << (l+3) << endl;
    }
    else
    {
      cout << (l) << " " << (l+1) << " " << (l+2) << endl;
    }
  }
  else if(range == 3)
  {
    if(__gcd(l,l+2) != 1)
    {
      cout << l << " " << (l+1) << " " << (l+2) << endl;
    }
    else cout << -1 << endl;
  }
  else cout << -1 << endl;

  return 0;
}