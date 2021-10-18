#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  deque<int> v;
  cin >> s;
  for(int i=0; i<s.length(); i+=2){
    v.push_back((s[i]-'0'));
  }

  int size = v.size();
  sort(v.begin(), v.begin()+size);

  while(v.size() >1){
    cout << v.front() << "+";
    v.pop_front();
  }
  cout << v.front() << endl;

  return 0;
}