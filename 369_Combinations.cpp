#include <bits/stdc++.h>

using namespace std;
 

int primes[101] = {0};

void primos(){

  for(int i=1; i<101; i++){
    if(i & 1) primes[i] = i;
    else primes[i] = 2;
  }

  for(int i=3; i*i<101; i++){

    if(primes[i] == i){

      for(int j=i*i; j<101; j+=i){
        if(primes[j] == j){
          primes[j] = i;
        }
      }
    }
  }
}

void countPrimes(int *arr){

  int aux;
  for(int i=1; i<101; i++){
    if(arr[i] == 0) continue;
    arr[i]--;

    aux = i;
    while(aux != 1){
      arr[primes[aux]]++;
      aux = aux/primes[aux];
    }
  }
}

int power(long long b, long long exp){

  long long pot[64];
  pot[0] = b;
  for(int i=1; i<64; i++){
    pot[i] = pot[i-1]*pot[i-1];
  }
  long long resp = 1;
  for(int i=0; i<64; i++){
    if(exp & ((long long)1<<i)) resp*=pot[i];
  }

  return resp;
}

int main()
{
  long long multi;
  int n, m, k;
  
  primos();
  while(cin >> n >> m, n){
    k = n-m;
    int a[101] = {0}, b[101] = {0};
    multi = 1;

    for(int i=max(k,m)+1; i<=n; i++){
      a[i]=1;
    }
    
    for(int i=2; i<=min(k,m); i++){
      b[i]=1;
    }
    
    countPrimes(a);
    countPrimes(b);

    
    

    for(int i=2; i<101; i++){
      if(b[i]>a[i]) a[i] = 0;
      else a[i]= a[i] - b[i];
    }

    for(long long i=2; i<101; i++){
      if(a[i]){
        multi*= power(i,(long long)a[i]);
      }
    }

    cout << n << " things taken " << m << " at a time is " << multi << " exactly.\n";

    }
 
    return 0;
}