#include <bits/stdc++.h>


using namespace std;

map<string,int> m;

int main(){

  m.insert(make_pair("Tetrahedron",4));
  m.insert(make_pair("Cube",6));
  m.insert(make_pair("Octahedron", 8));
  m.insert(make_pair("Dodecahedron", 12));
  m.insert(make_pair("Icosahedron",20));

  int n,sum=0;
  string s;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> s;
    sum+=m.find(s)->second;
  }

  cout << sum << endl;

  return 0;
}