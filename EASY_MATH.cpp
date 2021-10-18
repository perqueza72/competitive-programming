#include <bits/stdc++.h>

using namespace std;

int k=5;
long long v[5];

long long lcm(long long a, long long b){
  return (a*b)/__gcd(a,b);
}


long long inc_exe(int idx, long long d, int signo, long long maximo){
  if(idx == 5){
    return (signo * maximo/d);
  }

  return inc_exe(idx+1,d,signo, maximo) + inc_exe(idx+1, lcm(d,v[idx]), signo*-1, maximo);
}


int main(){

  int cases;
  long long r, n, m, a, d;
  cin >> cases;
  for(int i=0; i<cases; i++){
    cin >> n >> m >> a >> d;

    for(int j=0; j<5; j++){
      v[j] = a+d*j;
    }
    
    r = inc_exe(0,1,1,m) - inc_exe(0,1,1,n-1);
    cout << r << endl;
  }


  return 0;
}