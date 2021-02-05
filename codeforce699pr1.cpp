    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define ll long long int
    #define fr(i, x, y) for (int i = (int)x; i < (int)y; ++i)
    #define frr(i, x, y) for (int i = (int)x; i >= (int)y; --i)
    #define all(x) x.begin(), x.end()
    #define sortall(x) sort(all(x))
    #define null NULL
    #define m_p(x, y) make_pair(x, y)
    #define fst first
    #define sec second
    #define sz(x) x.size()
    #define read(x) cin >> x
    #define readArr(A, x, y) fr(i, x, y) cin >> A[i]
    #define print(x) cout << x << endl
    #define debug(x) cout << #x << ':' << x << endl
    #define debugArr(A)       \
        cout << #A << ':';    \
        for (auto x : A)      \
            cout << x << ' '; \
        cout << endl
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;
    typedef vector<int> vi;
    typedef vector<vi> vvi;
    typedef vector<ll> vl;
    typedef vector<vl> vvl;
    typedef vector<string> vs;
    typedef unordered_set<int> u_set;
    typedef unordered_map<int, int> u_map;
     
    //=========================CODE IS HERE======================//
     
     
    void solve(){
      ll x,y;cin>>x>>y;
      string s;cin>>s;
      char a,b;
      if(x<0)a = 'L';
      if(x>=0)a = 'R';
      if(y<0)b= 'D';
      if(y>=0)b='U';
      x = abs(x);
      y = abs(y);
      ll ct=0,ct1=0;
      for(int i=0;i<s.length();i++){
          if(s[i]==a){
              ct++;
          }
          if(s[i]==b){
              ct1++;
          }
      }
      if(ct>=x && ct1>=y){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
        
    }
     
    int main() {
    
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);
      ll tests;
      cin >> tests;
      while (tests-- > 0) {
        solve();
      }
      return 0;
    }
