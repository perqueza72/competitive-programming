#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, k, mini, pos, sum = 0;
  cin >> n >> k;
  int arr[n];
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  for(int i=0; i<k; i++){
    sum+= arr[i];
  }
  mini = sum;
  pos = 0;

  for(int i=k; i<n; i++){
    sum-=arr[i-k];
    sum+=arr[i];
    
    if(sum < mini){
      pos = i-k+1;
      mini = sum;
    }
  }

  cout << (pos+1) << endl;



  return 0;
}