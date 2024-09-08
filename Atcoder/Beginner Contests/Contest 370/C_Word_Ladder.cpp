#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'


//  learning ?
/*
1. Why to write same code again and again?
		store all the index and make changes in the string at last
*/

void solve(){
	string s, t; cin >> s >> t;
  	vector<string> x;
  	vector<int> idx;

  	int n = s.length();

  	for(int i = 0; i < n; ++i){
		if(s[i] > t[i])	idx.push_back(i);
	}

	for(int i = n-1; i >= 0; --i){
		if(s[i] < t[i]) idx.push_back(i);
	}

	for(int i = 0; i < idx.size(); ++i){
		s[idx[i]] = t[idx[i]];
		x.push_back(s);
	}

	cout << x.size() << endl;
	for(auto ele: x)	cout << ele << endl;

}

signed main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  // int tt; cin>>tt; while(tt--)
  solve();
}




// My shitty code

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl '\n'

// void solve(){
//   string s1, s2; cin >> s1 >> s2;
//   vector<string> s;

//   for(int j = 0; j < s1.size(); ++j){
//     for(int i = 0; i < s1.size(); ++i){
//       if(s1[i] > s2[i]){
//         s1[i] = s2[i];
//         s.push_back(s1);
//       }
//     }
//   }
//   int n = s1.size();
//   for(int j = 0; j < s1.size(); ++j){
//     for(int i = n-1; i >=0; --i){
//       if(s1[i] < s2[i]){
//         s1[i] = s2[i];
//         s.push_back(s1);
//       }
//     }
//   }

//   cout << s.size() << endl;
//   for(auto ele: s){
//     cout << ele << endl;
//   }

// }

// signed main(){
//   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//   // int tt; cin>>tt; while(tt--)
//   solve();
// }