#include <bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define tests ll test; cin >> test; while(test--)
#define printlst(lst, N)for (ll i = 0; i < N; i++) cout << lst[i] << " ";cout << endl
#define inputlst(lst, N) for (ll i = 0; i < N; i++) cin >> lst[i]
#define all(lst) lst.begin(), lst.end()
#define sortlst(lst) sort(all(lst))
#define sortarr(x, n) sort(x, x + n)
#define fora(i, x, y) for (ll i = x; i < y; ++i)
#define ford(i, x, y) for (ll i = x; i >= y; --i)
#define debug(x) cout << #x << ':' << x << endl
#define debugArr(A)       \
    cout << #A << ':';    \
    for (auto x : A)      \
        cout << x << ' '; \
    cout << endl
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vl> vovl;
typedef vector<vi> vovi;
typedef vector<string> vs;

typedef set<ll> sl;
typedef unordered_map<ll, ll> uml;
typedef map<ll, ll> ml;
//=========================CODE IS HERE======================//



void solve(){
  int n;cin>>n;
  vector<ll> v(n,0),a,b;
  for(int i=0;i<n;i++){
     cin>>v[i];
  }
  sort(v.begin(),v.end());
  a.push_back(v[0]);
  for(int i=1;i<n;i++){
      if(v[i] != v[i-1])a.push_back(v[i]);
      else b.push_back(v[i]);
  }
  for(int i=0;i<a.size();i++){
      cout<<a[i]<<" ";
  }
  for(int i=0;i<b.size();i++)cout<<b[i]<<" ";
  cout<<endl;
}



int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  long long  t=1;
  cin >> t;
  while (t-- > 0) {
    solve();
  }
  return 0;
}


 
