#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, arr[4] = {6,8,4,2};
  cin >> n;
  if(n == 0) cout << 1 << endl;
  else {
    n = (n%4);
    cout << arr[n] << endl;
  }
  return 0;
}