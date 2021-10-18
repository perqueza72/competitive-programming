#include <bits/stdc++.h>

using namespace std;

int grafo[25][25];


int group(int x, int y, int n, int cont){

  if(grafo[x][y] != 1) return 0; //visited
  
  grafo[x][y] = cont;
  if(x > 0){    group(x-1,y,n,cont);
    if(y>0)     group(x-1, y-1, n, cont);
    if(y<n-1)   group(x-1, y+1, n, cont);
  }
  
  if(x < n-1){  group(x+1,y, n,cont);
    if(y>0)     group(x+1, y-1, n, cont);
    if(y<n-1)   group(x+1, y+1, n, cont);
  }

  if(y > 0)     group(x, y-1, n, cont);
  if(y < n-1)   group(x, y+1, n, cont);
  
  return 1;
}

int main(){
  
  int n, cas=0;
  
  while(cin >> n){
  cas++;
  string s;
  for(int i=0; i<n; i++){
    cin >> s;
    for(int j=0; j<n; j++){
      grafo[i][j] = s[j]-'0';
    }
  }

  int cont = 2;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(group(i,j,n,cont)) cont++;
    }
  }
  cout << "Image number " << cas << " contains " << (cont-2) << " war eagles." << endl;
  }


  return 0;
}