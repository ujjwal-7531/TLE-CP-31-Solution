/*------------------------------ Sealing Technique: Reaper Death Seal  ------------------------------*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fr(st,v) for(int i=st;i<v.size();++i)
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define endl "\n"
#define mod 1e9+7
#define infy 1e18

int gcd(int a, int b){while (b!=0){int temp=b; b=a%b; a=temp;}return a;}
/*------------------------------ Sealing Technique: Reaper Death Seal  ------------------------------*/



void fun(){
    ll a,b;
    cin>>a>>b;

    ll xk,yk;
    cin>>xk>>yk;

    ll xq,yq;
    cin>>xq>>yq;

    vector<vector<ll>>poss {{a,b},{-a,b},{a,-b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};

    set<vector<ll>>st;
    for(int i=0;i<8;++i){
        ll p = poss[i][0];
        ll q = poss[i][1];
        for(int j=0;j<8;++j){
            ll r = poss[j][0];
            ll s = poss[j][1];
            if(xk+p==xq+r && yk+q==yq+s)
                st.insert({xk+p,yk+q});
        }
    }
    cout<<st.size()<<endl;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        fun();
    }
    return 0;
}