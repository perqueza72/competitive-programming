#include <bits/stdc++.h>

using namespace std;

int main(){

  char a[4] = {'G','B','I','V'};
  int n;
  cin >> n;

  cout << "ROY";
  for(int i=3; i<n; i++){
    cout << a[i%4];
  }
  cout << endl;

  return 0;
}