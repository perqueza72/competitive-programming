#include <bits/stdc++.h>

using namespace std;


int main(){

  int n,number, ant, r=0;
  cin >> n;
  bool start = false;
  for(int i=0; i<n; i++){
    cin >> number;
    if(number && !start){ 
      start = true;
      ant = 1;
      r++;
      continue;
    }

    if(start){
      if(number == 1 && ant == 1) r++;
      if(number == 1 && ant == 0) r+=2;
    }

    ant = number;
  }

  cout << r << endl;
  return 0;
}