#include <bits/stdc++.h>

using namespace std;

int main(){

  int n,a,b;
  bool sorted = false;
  cin >> n;
  vector< pair < int,int> > datos(n);
  for(int i=0; i<n; i++){
    cin >> a >> b;
    if(a != b) sorted = true;
    datos[n-i-1] = (make_pair(a,b));
  }

  if(sorted){
    cout << "rated" << endl;
  }else if(is_sorted(datos.begin(),datos.end())){
    cout << "maybe" << endl;
  } else cout << "unrated" << endl;

  return 0;
}