#include <bits/stdc++.h>

using namespace std;

int n, k=4;

vector<int> primes(k);


/**
* @param id posición en el array.
* @param d numero de combinaciones posibles.
* @param signo numero 1 con el signo.
*
* @return numero de combinaciones en las que los numero divisibles por los 
* primos del Vector primes aparecen en el rango 0 hasta n. 
*/
int int_exe(int id, int d, int signo){
  if(id == k){
    if(d == 1) return 0;
    return signo*n/d;
  }

  return int_exe(id+1,d,signo) + int_exe(id+1,d*primes[id],-1*signo);

}


int main(){
  primes = {2,3,5,7}; //Vector de primos con length k
  n = 100; //cota superior n

  cout<<int_exe(0,1,-1);
  return 0;
}