#include <bits/stdc++.h>

using namespace std;


vector< string > grafo;
int n, m;

bool BFS(int x, int y, int letra){
  if(grafo[x][y] == -1) return false;
  if(grafo[x][y] == letra) grafo[x][y] = -1;
  else return false;

  bool bul = false;
  // cout << letra << endl;
  // cout << ((char)grafo[x][y]) << endl;
  

  if(x<n-1) bul|= BFS(x+1,y, letra);
  if(y<m-1) bul|= BFS(x,y+1, letra);
  if(x>0) bul|= BFS(x-1,y,letra);
  if(y>0) bul|= BFS(x,y-1,letra);

  return true;
}

int main(){

  int cases, c;
  vector<pair<int, char>> mC;
  string aux;

  cin >> cases;
  for(int k=1; k<=cases; k++){
    int arr[256] = {0};
    map<char,int> mape;
    
    grafo.resize(0);

    cin >> n >> m;
    for(int i=0; i<n; i++){
      cin >> aux;
      grafo.push_back(aux);
    }

    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        c = grafo[i][j];
        if(BFS(i,j,c)){
          if(mape.find(c) == mape.end()) mape.insert(make_pair(c,1));
          else (mape.find(c)->second)++;
        }
      }
    }
    

    
    cout << "World #" << k << "\n";
    int maxi = 0;
    for(auto i : mape){
      if(maxi < i.second) maxi = i.second;
      mC.push_back(make_pair(i.second, abs(i.first-122)));
    }

    sort(mC.begin(), mC.end());

    while(mC.size()){
      cout << ((char)(abs(mC.back().second-122))) << ": " << mC.back().first << "\n";
      mC.pop_back();
    }
  }


  return 0;
}