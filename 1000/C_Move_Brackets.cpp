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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0, ans=0;
    for(auto it: s){
        if(it=='(')
            ++a;
        else
            --a;
        if(a<0)
            ans=max(ans,abs(a));
    }
    cout<<ans<<endl;
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