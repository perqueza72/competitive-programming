#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<pair<int,int> > arr(3, make_pair(0,0)), aux;
  string s, a = "AAA";
  for(int i=0; i<3; i++){
    cin >> s;
    if(s[1] == '>'){
      arr[s[0]-'A'].first++;
      arr[s[2]-'A'].second++; 
    }
    else{
      arr[s[0]-'A'].second++;
      arr[s[2]-'A'].first++;
    }
  }

  aux = arr;
  sort(aux.begin(), aux.end());
  for(int i=0; i<3; i++){
    if(aux[i].first == i && aux[i].second == 2-i) continue;
    else{
      cout << "Impossible" << endl;
      return 0;
    }
  }

  for(int i=0; i<3; i++){
    a[arr[i].first] = 'A' + i;
  }
  cout << a << endl;


  return 0;
}