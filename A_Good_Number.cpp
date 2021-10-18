#include <bits/stdc++.h>


using namespace std;


int main(){
  int n,k,r;
  bool puede;
  string s;
  cin >> n >> k;

  r = 0;
  for(int i=0; i<n; i++){
    int arr[10] = {0};
    puede = true;
    cin >> s;
    for(int j=0; j<s.length(); j++){
      arr[s[j]-'0'] = 1;
    }

    for(int j=0; j<=k; j++){
      if(arr[j] == 0) puede = false;
    }
    if(puede) r++;
  }

  cout << r;


  return 0;
}