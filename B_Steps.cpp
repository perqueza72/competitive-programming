#include <bits/stdc++.h>

using namespace std;


int main(){

  long long dx, dy, x, y, step, stepX, stepY, cont= 0; 
  int n,m, k;

  cin >> n >> m;
  cin >> x >> y;
  cin >> k;
  for(int i=0; i<k; i++){
    cin >> dx >> dy;

    if(dx > 0) stepX = (n-x)/dx;
    else if(dx < 0) stepX = (1-x)/dx;
    else stepX = 2000000000;
    
    if(dy > 0) stepY = (m-y)/dy;
    else if(dy < 0) stepY = (1-y)/dy;
    else stepY = 2000000000;

    step = min(stepX,stepY);
    
    x += dx*step;
    y += dy*step;

    cont+= step;
  }
  cout << cont << endl;

  return 0;
}