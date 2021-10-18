#include <bits/stdc++.h>

using namespace std;


int main(){

  int n, aux;
  map<int,int> lemape;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> aux;
    if(lemape.find(aux) != lemape.end()){
      lemape.insert(make_pair(aux,lemape.find(aux)->second+1));
    }else{
      lemape.insert(make_pair(aux,1));
    }
  }
  
  // cout <<  << endl;
  n-= (lemape.begin())->second;
  n-= (--lemape.end())->second;

  cout << n << endl;
  return 0;
}