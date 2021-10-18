#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, a[2] = {0};
  string aux, s[2] = {""};
  
  cin >> n;
  cin >> s[0];
  a[0]++;
  for(int i=1; i<n; i++){
    cin >> aux;
    if(s[0] == aux) a[0]++;
    else{
      a[1]++;
      s[1] = aux;
    }
  }

  if(a[0]>a[1]) cout << s[0] << endl;
  else cout << s[1] << endl;

  

  return 0;
}