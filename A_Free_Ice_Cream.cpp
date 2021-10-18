#include <bits/stdc++.h>

using namespace std;

int main(){

  long long n, x, aux,d=0;
  char c;
  cin >> n >> x;
  for(int i=0; i<n; i++){
    cin >> c >> aux;
    if(c == '+'){
      x+=aux;
    }else if(c == '-'){
      if(x-aux < 0){
        d++;
      }else{
        x-=aux;
      }
    }
  }

  cout << x << " " << d << endl;

  return 0;
}