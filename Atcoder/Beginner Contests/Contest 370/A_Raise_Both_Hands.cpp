#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int l, r; cin >> l >> r;

    if((l==1 and r==1) or (l==0 and r==0))  cout << "Invalid" << endl;
    else if(l!=1)   cout << "No" << endl;
    else cout << "Yes" << endl;

}

signed main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//   int tt; cin>>tt; while(tt--)
  solve();
}