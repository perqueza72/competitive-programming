#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, a, arr[110], sum=0;
  bool L = true, R = true;
  cin >> n >> a;
  a--;
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int l, r;
  for(int i=1; i<n; i++){
    l = a-i;
    r = a+i;

    if(l < 0) L = false;
    if(r > n-1) R = false;

    if(R && L){
      if(arr[l] == arr[r]) sum+= arr[l] + arr[r];
    }else{
      if(R){
        sum+= arr[r];
      }

      if(L){
        sum+= arr[l];
      }
    }
  }

  if(arr[a]) sum++;

  cout << sum << endl;
  return 0;
}