#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, aux, a=0, b=0;
  bool at=true;
  deque<int> card;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> aux;
    card.push_back(aux);
  }

  while(card.size()){
    if(card.front() > card.back()){
      aux = card.front();
      card.pop_front();
    }
    else{
      aux = card.back();
      card.pop_back();
    }
    if(at) a+=aux;
    else b+=aux;

    at = !at;
  }

  cout << a << " " << b << endl;

  return 0;
}