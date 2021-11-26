#include <bits/stdc++.h>

using namespace std;

int main(){

  int vp, vd, f, c, cont = 0;
  double t,x, t0;

  cin >> vp >> vd >> t0 >> f >> c;
  if(vp < vd){

    while(true){
      t = ((double)(vd*t0))/((double)(vd-vp));
      x = t*vp;
      if(x >= c) break;
      // cout << x << endl;
      cont++;

      t0 = 2*t-t0+f;
    }
  }

  cout << cont << endl;

  return 0;
}