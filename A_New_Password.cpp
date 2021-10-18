#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, k;
  char aux = 'a';
  string s="";
  deque<int> c;
  cin >> n >> k;
  for(int i=0; i<k; i++){
    c.push_back(aux);
    aux++;
  }
  for(int i=0; i<n; i++){
    aux = c.front();
    s+=aux;
    c.pop_front();
    c.push_back(aux);
  }

  cout << s << endl;

  return 0;
}