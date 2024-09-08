#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve(){
    int h, w, q; cin >> h >> w >> q;

    vector<set<int>> rows(h), cols(w);

    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            rows[i].insert(j);
            cols[j].insert(i);
        }
    }

    auto erase = [&](int x, int y){
        rows[x].erase(y); cols[y].erase(x);
    };

    while(q--){
        int r, c; cin >> r >> c;
        --r; --c;

        if(rows[r].count(c)){erase(r, c); continue;}

        // up
        {
        auto it = cols[c].lower_bound(r);
        if (it != begin(cols[c])) erase(*prev(it), c);
        }
        // down
        {
        auto it = cols[c].lower_bound(r);
        if (it != end(cols[c])) erase(*it, c);
        }
        // left
        {
        auto it = rows[r].lower_bound(c);
        if (it != begin(rows[r])) erase(r, *prev(it));
        }
        // right
        {
        auto it = rows[r].lower_bound(c);
        if (it != end(rows[r])) erase(r, *it);
        }

    
    }

    int ans = 0;
    for(auto row: rows) ans += row.size();

    cout << ans << endl;


}

signed main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//   int tt; cin>>tt; while(tt--)
  solve();
}