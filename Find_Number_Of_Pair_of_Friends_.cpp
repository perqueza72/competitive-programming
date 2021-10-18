#include <bits/stdc++.h>


using namespace std;


int main(){

  //max(T) = 7
  //max(n) = 100000
  //max(number.length()) = 18
  
  int T, c, n;
  string number;
  cin >> T;
  for(int i=0; i<T; i++){
    cin >> n;

    
    vector< deque <int> > v(10);

    for(int j=0; j<n; j++){
      cin >> number;
      for(int k=0; k<number.length(); k++){
        c = number[k]-'0';
        v[c].push_back(j);
      }
    }

    long long suma = 0;
    int cont;
    for(int j=0; j<10; j++){
      cont = 1;
      sort(v[j].begin(), v[j].end());
      c = v[j][0];
      for(int k=1; k<v[j].size(); k++){
        if(c != v[j][k])
        {
          cont++;
          c = v[j][k];
        }
      }

      suma+=cont*(cont-1)/2;
    }

    cout << suma << endl;
  }

  return 0;
}