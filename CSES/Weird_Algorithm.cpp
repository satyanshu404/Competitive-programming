#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n; cin >> n;
    while(n != 1){
        cout << n << " ";
        if(n&1) n = n*3+1;
        else n /=2;
    }
    cout << n << endl;
}

signed main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//   int tt; cin>>tt; while(tt--)
  solve();
}