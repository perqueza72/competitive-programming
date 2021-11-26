#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, mayor, menor;
  int *number;
  
  cin >>n;
  int v[n];
  for(int i=0; i<n; i++){
    cin >> v[i];
  }
  sort(v, v+n);

  for(int i=0; i<n-1; i++){
    mayor = v[i]+v[i+1];
    menor = abs(v[i]-v[i+1]);

    number = upper_bound(v, v+n, menor);
    if(number == v+i) number+=2;
    if(number == v+i+1) number++;
    if(number >= v+n) continue;
    if(*number < mayor){
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;

  return 0;
}