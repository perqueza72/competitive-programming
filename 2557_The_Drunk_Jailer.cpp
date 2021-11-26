#include <bits/stdc++.h>

using namespace std;


bool primes[101] = {false};

void primos(){

  for(int i=1; i<101; i++){
    for(int j=i; j<101; j+=i){
      primes[j] = !primes[j];
    }
  }
}


int main(){

  int nPrimes[101];
  nPrimes[0] = 0;
  int aux, n, r;

  primos();
  for(int i=1; i<101; i++){
    nPrimes[i] = nPrimes[i-1] + primes[i];
  }

  cin >> n;
  while(n--){
    cin >> aux;

    r = 0;
    
    cout << nPrimes[aux] << endl;
  }

  return 0;
}