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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int>hash(26,-1);
    for(int i=0; i<n; ++i)
        hash[s[i]-'a'] = i;

    for(int i=0;i<n-1; ++i){
        int ci = s[i]-'a';
        for(int j=ci-1; j>=0; --j){
            if(hash[j] != -1 && hash[j]>i){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<hash[j]+1<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}