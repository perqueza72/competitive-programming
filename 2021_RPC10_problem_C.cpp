#include <bits/stdc++.h>

using namespace std;

int primes[401];
bool is_primo[401];

void prime(){

  for(int i=1; i<401; i++){
    if(i&1){
      primes[i] = i;
      is_primo[i] = true;
    }
    else{
      primes[i] = 2;
      is_primo[i] = false;
    }
  }
  is_primo[1] = false;
  is_primo[2] = true;

  for(int i=3; i*i<401; i+=2){
    if(primes[i] == i){
      is_primo[i] = true;
      for(int j=i*i; j<401; j+=i){
        primes[j] = i; 
        is_primo[j] = false;
      }
    }else{
      is_primo[i] = false;
    }
  }
}


int main(){

  int n, dato, cont;
  prime();

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> dato;

    cont = 0;
    for(int j=1; j<dato/2; j++){
      // cout << (j+1) << " " << (dato-j-1) << endl;
      if(is_primo[j+1] && is_primo[dato-j-1]){
        // cout << (j+1) << " " << (dato-j-1) << endl;
        cont++;
      }
    }
    cout << cont << endl;
  }
  
  return 0;
}