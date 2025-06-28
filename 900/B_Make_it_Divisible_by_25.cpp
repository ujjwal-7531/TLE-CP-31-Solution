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
    int n=s.size();

    int ans = n;
    bool a=false, b=false;
    int ai=-1, bi=-1;

    // 00
    for(int i=n-1; i>=0; --i){
        int c = s[i]-'0';
        if(c==0){
            if(!b){
                b=true;
                bi=i;
            }
            else{
                ai=i;
                ans = min(ans,bi-ai-1+n-1-bi);
                break;
            }
        }
            
    }

    // 25
    a=false, b=false;
    ai=-1, bi=-1;
    for(int i=n-1; i>=0; --i){
        int c = s[i]-'0';
        if(c==5 && !b){
            bi=i;     
            b=true;  
        }
        else if(c==2 && b){
            ai=i;
            ans = min(ans,bi-ai-1+n-1-bi);
            break;
        }
            
    }

    // 50
    a=false, b=false;
    ai=-1, bi=-1;
    for(int i=n-1; i>=0; --i){
        int c = s[i]-'0';
        if(c==0 && !b){
            bi=i;     
            b=true; 
        }
        else if(c==5 && b){
            ai=i;
            ans = min(ans,bi-ai-1+n-1-bi);
            break;
        }
            
    }
    
    // 75
    a=false, b=false;
    ai=-1, bi=-1;
    for(int i=n-1; i>=0; --i){
        int c = s[i]-'0';
        if(c==5 && !b){
            bi=i;     
            b=true; 
        }
        else if(c==7 && b){
            ai=i;
            ans = min(ans,bi-ai-1+n-1-bi);
            break;
        }
            
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
