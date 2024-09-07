#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n; cin >> n;
    vector<vector<int>> arr(n);

    for(int i = 0; i < n; ++i){
        for(int j = 0; j <= i; ++j){
            int tmp; cin >> tmp;
            arr[i].push_back(tmp);
        }
    }

    int ans = 0;
    for(int i = 0; i < n; ++i){
        if(ans >= i)    ans = arr[ans][i]-1;
        else ans = arr[i][ans]-1;
        // cout << ans << " ";
    }

    cout << ans+1 << endl;


}

signed main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//   int tt; cin>>tt; while(tt--)
  solve();
}