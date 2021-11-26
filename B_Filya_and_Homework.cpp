#include <bits/stdc++.h>

using namespace std;

int main(){

  set<int> s;
  int maxi=0, mini=1000000100, aux, n;

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> aux;
    maxi = max(maxi, aux);
    mini = min(mini, aux);
    s.insert(aux);
  }
  if(s.size() > 3){
    cout << "NO" << endl;
  }else if(s.size() == 2){
    cout << "YES" << endl;
  }else if(s.size() == 1){
    cout << "YES" << endl;
  }else{
    if(((maxi+mini)&1) == 0){

      if(s.count((maxi+mini)/2)){
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }
    }else{
    cout << "NO" << endl;
    }
  }

  

  

  return 0;
}