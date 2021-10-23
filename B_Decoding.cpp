#include <bits/stdc++.h>

using namespace std;

int main(){

  deque<char> d, resp;
  char aux;
  int n;

  cin >> n;

  getchar();
  for(int i=0; i<n; i++){
    aux = getchar();
    d.push_back(aux);
  }

  while(d.size()){
    if(d.size() & 1) resp.push_back(d.front());
    else resp.push_front(d.front());

    d.pop_front();
  }

  while(resp.size()){
    cout << resp.front();
    resp.pop_front();
  }

  return 0;
}