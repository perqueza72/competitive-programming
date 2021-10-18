#include <bits/stdc++.h>

using namespace std;


int main(){

  int n;
  cin >> n;
  vector< pair<int,int > > arr;
  pair<int,int> aux;
  for(int i=0; i<n; i++){
    cin >> aux.first;
    aux.second = i;
    arr.push_back(aux);
  }

  sort(arr.begin(), arr.end());
  int number;
  int day = 0;

  while(arr.size()){
    number = arr.back().first;
    for(int i=0; i<(arr.back().second-day); i++){
      cout << "\n";
    }
    cout << number << " ";

    day = max(day, arr.back().second);
    arr.pop_back();
  }


  return 0;
}