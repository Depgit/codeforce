#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ':' << x << endl
#define debugArr(A)       \
    cout << #A << ':';    \
    for (auto x : A)      \
        cout << x << ' '; \
    cout << endl


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
     int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i)cin>>v[i];
    set<int> st1;
    set<int> st2;
    for(int i=0;i<n-1;++i){
        if(v[i]<=v[i+1])
          st1.insert(v[i+1]-v[i]);
        else 
          st2.insert(v[i]-v[i+1]);
    }
    
    if(st1.size()>1 || st2.size()>1){
      cout<<-1<<endl;
      break;
    }
    if(st2.size()==0 || st1.size()==0){
        cout<<0<<endl;
        break;
    }
    int c=*st1.begin();
    int m=c+*st2.begin();
    for(int e:v){
        if(e>=m){
          cout<<-1<<endl;
          break;
        }
    }
    cout<<m<<' '<<c<<endl; 
    }
    return 0;
}
