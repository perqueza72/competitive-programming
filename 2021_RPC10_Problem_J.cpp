#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, q, query;
  int *lower;
  while(cin >> n >> q){
    int arr[n+1];
    cin >> arr[0];
    arr[0] = 1;
    for(int i=1; i<n; i++){
      cin >> arr[i];
      arr[i] += arr[i-1];
    }

    for(int i=0; i<q; i++){
      cin >> query;
      lower = lower_bound(arr,arr+n, query);
      if(lower-arr == n) cout << n;
      else{
        if(*lower == query) cout << (lower-arr+1);
        else cout << (lower-arr);
      }

      if(i < q-1) cout << ' ';
    }
    cout << "\n";
  }

  return 0;
}