#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  int arr[10] = {0}, sum=0, cont=0;

  cin >> s;

  while(s.length() > 1){
    cont++;
    sum = 0;
    for(int i=0; i<s.length(); i++){
      arr[s[i]-'0']++;
    }
    for(int i=1; i<10; i++){
      sum+= arr[i]*i;
      arr[i] = 0;
    }
    s = to_string(sum);

  }

  cout << cont << endl;

  return 0;
}