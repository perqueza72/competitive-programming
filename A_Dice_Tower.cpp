#include <bits/stdc++.h>


using namespace std;


int main(){

  int n, c, p, l[4];
  bool puede = true;
  cin >> n;
  cin >> c;
  p = 7-c;
  for(int i=0; i<n; i++){
    
    cin >> l[0];
    l[1] = 7-l[0];
    cin >> l[2];
    l[3] = 7-l[2];

    for(int u : l){
      if(u == p) puede = false;
    }

  }
  puede ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}