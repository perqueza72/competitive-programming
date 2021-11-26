#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  while(c-a>0 && c-(a+b)>0){
    a+=b;
    c-=d;
  }

  if((c-a)<=0) cout << a << endl;
  else if(c-a-b<=0) cout << c << endl;

  return 0;
}