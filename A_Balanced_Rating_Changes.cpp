#include <bits/stdc++.h>
using namespace std;

int main(){

  vector<int> rest, div;
  
  int n, tam = 0, dato;
  cin >> n;
  while(n--){
    cin >> dato;
    div.push_back(dato/2);
    tam+= dato/2;


    if(dato&1){
      if(dato < 0){
        rest.push_back(-1);
      }
      else{
        rest.push_back(1);
      }
    }
    else rest.push_back(0);
    
  }

  for(int i=0; i<rest.size(); i++){
    if(tam > 0){
      if(rest[i] < 0){
        cout << (div[i]-1);
        tam--;
      }else cout << div[i];

    }else if(tam < 0){
      if(rest[i] > 0){
        cout << (div[i]+1);
        tam++;
      }else cout << div[i];
    }else cout << div[i];

    cout << "\n";
  }

  return 0;
}