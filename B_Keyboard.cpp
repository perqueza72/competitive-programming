#include <bits/stdc++.h>

using namespace std;


int main(){

  set<char> mayus, letters;
  vector<pair<int,int> > eses;
  bool s_exist;
  char c;

  int n, m, d, casos;

  cin >> n >> m >> d;
  getchar();
  vector<string> grafo(n);
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      c = getchar();
      grafo[i].push_back(c);
      if(c == 'S') eses.push_back(make_pair(i,j));
      else letters.insert(c);
    }
    getchar();
  }

  
  if(letters.empty()){
    cout << "-1" << endl;
    return 0;
  }

  if(eses.size()){
    s_exist = true;
  }else s_exist = false;

  pair<int,int> pos;
  int x, y;
  while(eses.size() && mayus.size() < letters.size()){ 
    pos = eses.back();
    x = pos.first;
    y = pos.second;

    for(int i=x-d; i<=x+d && i<n; i++){
      if(i < 0) continue;
      for(int j=y-d; j<=y+d && j<m; j++){
        if(j < 0) continue;
        if(grafo[i][j] == 'S') continue;

        if(d*d >= ((i-x)*(i-x) + (j-y)*(j-y))){
          mayus.insert(toupper(grafo[i][j]));
        }
      }
    }

    eses.pop_back();
  }
  
  // for(auto u : mayus){
  //   cout << u << " ";
  // }
  //cout << endl;

  int cont = 0;
  cin >> casos;
  getchar();
  //cout << endl;
  for(int i=0; i<casos; i++){
    c = getchar();
    //cout << c;
    if(!letters.count(tolower(c)) || (c == toupper(c) && !s_exist)){
      cout << "-1" << endl;
      return 0;
    }

    if(letters.count(c)) continue;
    if(!mayus.count(c)) cont++;
  }
  
  cout << cont << endl;



  return 0;
}