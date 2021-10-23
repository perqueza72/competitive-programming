#include <bits/stdc++.h>

using namespace std;


int m;
int arr[32];

int power(int b, int p){

  if(b == 0) return 0;
  if(p == 0) return 1;

  int ans = 1;
  arr[0] = b%m;
  for(int i=1; i<32; i++){
    arr[i] = (arr[i-1]*arr[i-1])%m;
  }

  for(int i=0; i<32; i++){
    if(p & (1<<i)){
      ans= (ans * arr[i])%m;
    }
  }

  return ans;
}

int main(){

  int b, p;
  while(cin >> b >> p >> m){
    cout << power(b,p) << "\n";
  }

  return 0;
}