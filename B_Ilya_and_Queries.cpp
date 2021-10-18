#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n,a,b;

  string s;
  getline(cin, s);
  
  int tam = (int)s.length();
  vector<int> sub(tam+1);
  sub[0] = 0;
  // cout << s << endl;
  // cout << "tiempo: " << tam << endl;

  int cont=0;
  for(int i=0; i<tam; i++){
    if(s[i] == s[i+1]) sub[i+1] = ++cont;
    else sub[i+1] = cont;
    // cout << s[i+1] << " En posición: " << i << ": "  << cont << endl;
  }
  sub[tam] = cont+1;


  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a >> b;
    // cout << "sub b:  " << sub[b-1] << "  sub a: " << sub[a-1] << endl; 
    cout << (sub[b-1]-sub[a-1]) << endl;
  }

  return 0;
}