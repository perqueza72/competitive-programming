#include <bits/stdc++.h>

using namespace std;

int main(){

  deque<int> res;
  string s1, s2;
  int n, num;
  cin >> n;
  while(n--){
    cin >> s1 >> s2;
    num = 0;

    for(int i=0; i<min(s1.length(), s2.length()); i++){
      num = (s1[i] + s2[i] - '0' - '0' + num/10);
      res.push_back(num%10);

    }
    if(s1.length() > s2.length()){
      for(int i=s2.length(); i<s1.length(); i++){
        num = s1[i] - '0' + num/10;
        res.push_back(num%10);
      }
    }else{
      for(int i=s1.length(); i<s2.length(); i++){
        num = s2[i] - '0' + num/10;
        res.push_back(num%10);
      }
    }

    if(num/10) res.push_back(num/10);

    bool start = false;
    while(res.size()){
      if(res.front() != 0) start = true;
      if(start) cout << res.front();
      
      res.pop_front();
    }
    cout << "\n";
  }


  return 0;
}