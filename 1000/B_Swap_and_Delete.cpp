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
    string s;
    cin>>s;
    
    vector<int>a,b,c(s.size(),1);
    for(int i=0; i<s.size(); ++i){
        if(s[i]=='0'){
            a.push_back(i);
        }
        else{
            b.push_back(i);
        }
    }
    for(int i=0;i<min(a.size(),b.size());++i){
        c[a[i]]=0;
        c[b[i]]=0;
    }
    for(int i=0;i<c.size();++i){
        if(c[i]==1){
            cout<<s.size()-i<<endl;
            return;
        }
    }
    cout<<0<<endl;
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