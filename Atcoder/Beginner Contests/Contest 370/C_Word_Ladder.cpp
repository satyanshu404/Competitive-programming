#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
  string s1, s2; cin >> s1 >> s2;
  vector<string> s;

  for(int j = 0; j < s1.size(); ++j){
    for(int i = 0; i < s1.size(); ++i){
      if(s1[i] > s2[i]){
        s1[i] = s2[i];
        s.push_back(s1);
      }
    }
  }
  int n = s1.size();
  for(int j = 0; j < s1.size(); ++j){
    for(int i = n-1; i >=0; --i){
      if(s1[i] < s2[i]){
        s1[i] = s2[i];
        s.push_back(s1);
      }
    }
  }

  cout << s.size() << endl;
  for(auto ele: s){
    cout << ele << endl;
  }

}

signed main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  // int tt; cin>>tt; while(tt--)
  solve();
}