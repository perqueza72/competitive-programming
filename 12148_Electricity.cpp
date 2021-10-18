#include <bits/stdc++.h>

using namespace std;

int df[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int dA[3];

void nextDate(int d, int m, int a){

// cout << "dia: " << d << endl;

  if(a%400 == 0 || (a%4 == 0 && a%100 != 0) && m == 2){
     d = (d+1)%(df[1]+1);
     if(d == 0) d = 29;
  }else d = (d+1)%df[m-1];
  
  if(d == 0){
    d = df[m-1];
  }
  // cout <<" dia: " << d << endl;
  if(d == 1){
    m= (m+1)%12;
    if(m == 1) a++;
  }
  if(m == 0) m = 12;
  

  dA[0] = d;
  dA[1] = m;
  dA[2] = a;
}


int main(){
  
  int d[3], c;
  int cA;
  int cont, sum, n;

  while(cin >> n, n){
  
    cin >> d[0] >> d[1] >> d[2] >> c;
    
    cA = c;
    cont = 0;
    sum = 0;

    for(int i=1; i<n; i++){
        nextDate(d[0],d[1],d[2]);
        cin >> d[0] >> d[1] >> d[2] >> c;
        // cout << i << "\n";
        // cout <<"d: " << d[0] << " " << d[1] << " " << d[2] << endl;
        // cout <<"da: " << dA[0] << " " << dA[1] << " " << dA[2] << endl;
        // cout <<  "\n";

        bool eq = true;
        for(int j=0; j<3; j++){
          if(dA[j] != d[j]){
            eq = false;
            break;
          }
        }
        
        if(eq){
          cont++;
          sum+=(c-cA);
        }
        cA = c;
    }

  cout << cont << " " << sum << endl;

  }

  
  return 0;
}