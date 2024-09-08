#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n; cin >> n;
    int sum = (n*(n+1))/2;

    for(int i = 0; i < n-1; ++i){
        int tmp; cin >> tmp;
        sum -= tmp;
    }
    cout << sum << endl;

}

signed main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//   int tt; cin>>tt; while(tt--)
  solve();
}