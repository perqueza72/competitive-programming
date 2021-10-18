#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n,t,c, aux;
  long long sum=0, cont = 0;
  cin >> n >> t >> c;
  for(int i=0; i<n; i++){
    cin >> aux;
    if(aux > t){
      cont = 0;
    }else{
      cont++;
      if(cont >= c){
        sum++;
      }
    }

  }
  cout << sum << endl;

  return 0;
}