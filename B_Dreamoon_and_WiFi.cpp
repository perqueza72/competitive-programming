#include <bits/stdc++.h>

using namespace std;

long long fact(int n){
  long long r = 1;
  for(int i=1; i<=n; i++){
    r*= i;
  }
  // cout << "facto de " << n << ": " << r << endl;
  return r;
}

long long pow(int n, int m){

  long long arr[10];
  arr[0] = n;
  for(int i=1; i<10; i++){
    arr[i] = arr[i-1]*arr[i-1];
  }

  long long r = 1;
  for(int i=0; i<10; i++){
    if(m & (1<<i)) r*=arr[i];
  }

  return r;
}


int main(){

  int a[2] = {0}, b[2] = {0}, n=0;
  string s1, s2;
  cin >> s1 >> s2;
  for(int i=0; i<s1.length(); i++){
    if(s1[i] == '+') a[0]++;
    else a[1]++;
  }

  for(int i=0; i<s2.length(); i++){
    if(s2[i] == '+') b[0]++;
    if(s2[i] == '-') b[1]++;
    if(s2[i] == '?') n++;
  }

  // cout << "a: " << a[0] << " " << a[1] << endl;
  // cout << "b: " << b[0] << " " << b[1] << endl;
  int mas = a[0]-b[0];
  int menos = a[1]-b[1];

  cout << setprecision(10);
  if(mas < 0 || menos < 0){
    double r = 0.0;
    cout << fixed << r << endl;
    return 0;
  }

  if(n == 0){
    double r = 1.0;
    cout << fixed << r << endl;
    return 0;
  }

  // cout << n << " " << menos << " " << mas << endl;

  double up = fact(n)/(fact(menos)*fact(mas));
  double down = pow(2,n);
  // cout << up << "/" << down << endl;
  cout << fixed << (up/down) << endl;

  return 0;
}