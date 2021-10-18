#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b, r, p;
  cin >> a >> b;
  r = 6-max(a,b)+1;
  if(r == 3) cout << "1/2" << endl;
  else if(r == 2) cout << "1/3" << endl;
  else if(r == 4) cout << "2/3" << endl;
  else if(r == 6) cout << "1/1" << endl;
  else cout << r << "/6" << endl;

  return 0;
}