#include <bits/stdc++.h>

using namespace std;

int main(){

  double a,b;
  int n;
  vector<int> arr;
  vector<pair<int,int> > pares;
  while(cin >> n, n){

    pares.resize(0);
    arr.resize(n);

    for(int i=0; i<n; i++){
      cin >> arr[i];
    }

    for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){

        if(__gcd(arr[i], arr[j]) == 1){
          pares.push_back(make_pair(arr[i], arr[j]));
        }
      }
    }

    if(pares.size()){

      a = 3*n*(n-1);
      b = pares.size();

      cout << setprecision(6);
      cout << fixed << (sqrt(a/b)) << endl;

    }else cout << "No estimate for this data set.\n";

  }

  return 0;
}