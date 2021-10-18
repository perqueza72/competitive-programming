#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, aux, mini;
  deque<deque<int>> a(4);
  cin >> n;

  for(int i=1; i<=n; i++){
    cin >> aux;
    a[aux].push_back(i);

  }

  mini = 6000;
  for(int i=1; i<4; i++){
    mini = min(mini,(int)a[i].size());
  }

  cout << mini << endl;
  for(int i=0; i<mini; i++){
    for(int j=1; j<4; j++){
      cout << a[j][i] << " ";
    }
    cout << endl;
  }

  return 0;
}