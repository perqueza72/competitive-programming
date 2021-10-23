#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<int> arr;
  int n, cont = 1, aux;
  cin >> n;
  arr.resize(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  for(auto u: arr){
    if(u >= cont){
      cont++;
    }
  }
  cout << cont << endl;

}