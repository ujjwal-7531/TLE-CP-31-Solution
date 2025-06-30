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
    int n,k;
    cin>>n>>k;

    vector<int>a(n);
    for(int i=0; i<n; ++i)
        cin>>a[i];

    //k=2
    if(k==2){
        for(auto it : a){
            if(it%2==0){
                cout<<0<<endl;
                return;
            }
        }
        cout<<1<<endl;
    }

    //k=3
    if(k==3){
        int ans=3;
        for(auto it : a){
            if(it%3==0){
                cout<<0<<endl;
                return;
            }
            ans=min(ans,3-it%3);
        }
        cout<<ans<<endl;
        return;
    }

    //k=4
    if(k==4){
        int ct=0;
        int ans=4;
        for(auto it : a){
            if(it%2==0){
                if(it%4==0){
                    cout<<0<<endl;
                    return;
                }
                ++ct;
            }
            ans = min(ans,4-it%4);
        }
        if(ct>=2){
            cout<<0<<endl;
            return;
        }
        if(ct==1){
            cout<<min(1,ans)<<endl;
            return;
        }
        cout<<min(2,ans)<<endl;
        return;
    }

    //k=5
    if(k==5){
        int ans = 5;
        for(auto it : a){
            if(it%5==0){
                cout<<0<<endl;
                return;
            }
            else 
                ans = min(ans,5-it%5);
        }
        cout<<ans<<endl;
    }


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