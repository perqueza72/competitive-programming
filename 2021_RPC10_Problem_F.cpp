#include <bits/stdc++.h>

using namespace std;

int main(){

  int x, n, k;
  vector<int> perfect;
  for(int i=1; i<=1000; i++){
    perfect.push_back(i*i);
  }

  cin >> n;
  for(int casos=1; casos<=n; casos++){
    cin >> k;
    for(int i=0; i<perfect.size(); i++){
      x = perfect[i]-k;
      if(x < 0) continue;
      if(x & 1) continue;
      if(binary_search(perfect.begin(), perfect.begin()+i, (x/2+k))){
        cout << "Case " << casos << ": " << x << "\n";
        break;
      }
    }
  }

  return 0;
}