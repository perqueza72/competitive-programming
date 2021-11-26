#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, aux;
  double a,b,r2;

  cin >> n;
  int r1 = 0;
  for(int i=0; i<n; i++){
    cin >> aux;
    r1 = max(r1, aux);
  }
  cin >> n;
  int p1 = 0;
  for(int i=0; i<n; i++){
    cin >> aux;
    p1 = max(p1, aux);
  }

  cin >> n;
  int p2 = 1000000000;
  for(int i=0; i<n; i++){
    cin >> aux;
    p2 = min(p2, aux);
  }


  double p1d = p1, p2d = p2, r1d = r1;

  cin >> a >> b;

  r2 = (r1/sqrt((a*p2d)/(b*p1d) + 1.0));
  cout << setprecision(6);
  cout << fixed << r2 << endl;

  return 0;
}