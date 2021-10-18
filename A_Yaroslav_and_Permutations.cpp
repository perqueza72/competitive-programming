#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, aux, a[1010] = {0};
  bool puede = true;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> aux;
    a[aux]++;
  }

  int limit = (n+1)/2;
  for(int i=0; i<1010; i++){
    if(a[i] > limit)
    {
      puede = false;
      break;
    }
  }

  puede ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}