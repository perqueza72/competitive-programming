#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, m, cont, pos;
  bool puede;

  while(cin >> n >> m){
    int v[m] = {0};
    puede = true;
    pos = 0 ;
    cont = 0;
    while(cont < m){
      if(v[pos] == 1){
        puede = false;
        break;
      } 
      v[pos] = 1;
      pos = (n+pos)%m;
      cont++;
    }

    cout << setw(10) << n << setw(10) << m << "    ";
    cout << (puede ? "Good Choice\n\n" : "Bad Choice\n\n");
  }


  return 0;
}