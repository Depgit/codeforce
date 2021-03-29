#include <bits/stdc++.h>
using namespace std;
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define debug(x) cout << #x << ':' << x << endl
#define debugArr(A)       \
    cout << #A << ':';    \
    for (auto x : A)      \
        cout << x << ' '; \
    cout << endl
#define debugPairArr(A)       \
    cout << #A << ':';    \
    for (auto x : A)      \
        cout<<' ' << x.first << ' '<<x.second<<' '; \
    cout << endl
#define printlst(lst, N)for (ll i = 0; i < N; i++) cout << lst[i] << " ";cout << endl
#define inputlst(lst, N) for (ll i = 0; i < N; i++) cin >> lst[i]
#define sortlst(lst) sort(lst.begin(), lst.end())
#define setbits(n) __builtin_popcount(n)
#define sortarr(x, n) sort(x, x + n)
#define fora(i, x, y) for (ll i = x; i < y; ++i)
#define ford(i, x, y) for (ll i = x; i >= y; --i)
#define readArr(v) for(auto i : v)cin>>i;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vl> vovl;
typedef vector<vi> vovi;
typedef vector<string> vs;
typedef set<ll> sl;
typedef unordered_map<ll, ll> uml;
typedef map<ll, ll> ml;


ll lcm(ll a, ll b)
{
  return a*b/__gcd(a,b);
}

template<typename T> class Cpoint{
  public:
    T x,y,z;
    Cpoint(T xt,T yt, T zt){
      x = xt;
      y = yt; z = zt;
    }

    Cpoint operator+(Cpoint b){
      return Cpoint(this->x + b.x, this->y + b.y,this->z + b.z);
    }

    Cpoint& operator+=(Cpoint b){
        *this = *this+b;
        return *this;
    }
};

template<typename T> T dot(Cpoint<T> a, Cpoint<T> b){
  return a.x*b.x + a.y*b.y + a.z*b.z;
}

template<typename T> double ang(Cpoint<T> a, Cpoint<T> b){
  return acos(dot(a,b)/sqrt(dot(a,a)*dot(b,b)));
}


template<typename T> vector<ll> z_function(T s){
  int n = (int)s.size();
  vector<ll> z(n,0);
  for(ll i=1,l=0,r=0;i<n;i++){
    if(i <= r)
      z[i] = min(r - i + 1 , z[i-l]);

    while(i + z[i] < n && s[z[i]] == s[i+z[i]]) ++z[i];

    if(i + z[i] -1 > r)
      l = i; r = i + z[i]-1;
  }
  return z;
}

long long compute_hash(string const& s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

// ############################# CODE IS HERE ##############################

void solve(){
  ll n,k;cin>>n>>k;
  vector<int> bit(32,0),v(n,0);
  for(int i=0;i<n;i++){
      cin>>v[i];
      int x = log2(v[i]);
      bit[x]++;
  }
//   debugArr(bit);
  ll ct = 0;
  while(n){
      ll temp = k;ll ans = 0;
      for(int i=31;i>=0 && temp>=0;i--){
          if(bit[i]){
            ll  res = pow(2,i);
            if(temp - res>=0){
                temp = temp -res;
                bit[i]--;
                n--;
                i++;
            }
          }
      }
      ct++;
  }
  cout<<ct<<endl;
}


int main()
{
//   #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   freopen("error.txt", "w", stderr);
//   #endif
  boost;
  ll test=1; 
  cin >> test; 
  while(test--)
  {
    solve();
  }
  return 0;
}
