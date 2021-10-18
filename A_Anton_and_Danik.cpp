#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, a=0, d=0;
  cin >> n;
  char c;

  for(int i=0; i<n; i++){
    cin >> c;
    if(c == 'A') a++;
    if(c == 'D') d++;
  }

  if(a == d) cout << "Friendship" << endl;
  if(a > d) cout << "Anton" << endl;
  if(a < d) cout << "Danik" << endl;

  return 0;
}