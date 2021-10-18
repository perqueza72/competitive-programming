#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, ul = 0, ur = 0, pr = 0, pl = 0;
  string s;

  cin >> n;
  getline(cin, s);
  getline(cin,s);
  for(int i=0; i<n; i++){
    if(s[i] == 'R'){
      if(pr == 0) pr = i+1;
      ur = i+1;
    }
    if(s[i] == 'L'){
      if(pl == 0) pl = i+1;
      ul = i+1;
    }

  }

  if(pl != 0 && pr != 0){
    cout << ul << " " << (ur+1) << endl;
  }else if(pl != 0){
    cout << ul << " " << (pl-1) << endl;
  }else if(pr != 0){
    cout << pr << " " << (ur+1) << endl;
  }

  return 0;
}