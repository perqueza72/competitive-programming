#include <bits/stdc++.h>

using namespace std;

deque<int> lady;
int value;
int bs(int l, int m, int value, int it){

  it++;

  int x = l + (m-l)/2;
  if(m == l) return m;
  // if(it == 20) return l;
  if(value == lady[x]) return x;
  

  if(value > lady[x]){
    return bs(x+1, m, value, it);
  }else{
    return bs(l,x-1, value, it);
  }
  
}

int main(){

  int n, m;
  int d, f;
  cin >> n;

  cin >> value;
  lady.push_back(value);
  for(int i=1; i<n; i++){
    cin >> value;
    if(value != lady.back()) lady.push_back(value);
  }
  n = lady.size();

  cin >> m;
  for(int i=0; i<m; i++){
    cin >> value;
    
    if(value < lady[0]){
      // cout << "primer if" << endl;
      d = -1;
    }
    else if(value > lady[n-1]){
      // cout << "segundo if" << endl;
      d = n-1;
    }
    else{
      // cout << "tercer if " << n << endl;
      d = bs(0,n-1,value,0);
    }

    // cout << value << ": " <<  lady[d] << endl;
    int cont = 0;
    for(int j=d; j<d+3 && cont<2 && j<=n; j++){
      
      
      if(j == -1) cout << "X";
      else if(j == n) cout << "X";
      else if(lady[j] == value) continue;
      else cout << lady[j];

      cont++;
      if(cont == 1) cout << " ";
      
    }
    cout << "\n";
    
  }

  return 0;
}