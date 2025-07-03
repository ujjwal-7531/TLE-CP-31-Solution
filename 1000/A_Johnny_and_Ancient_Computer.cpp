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
    ll a, b;
    cin >> a >> b;

    if(a == b){
        cout << 0 << endl;
        return;
    }

    if(a < b)swap(a, b);

    if(a % b != 0) {
        cout<<-1<<endl;
        return;
    }

    ll r = a / b;
    int ct = 0;

    while(r%8 == 0) {
        r /= 8;
        ct++;
    }
    while(r%4 == 0) {
        r /= 4;
        ct++;
    }
    while(r%2 == 0) {
        r /= 2;
        ct++;
    }

    if(r == 1)
        cout<<ct<<endl;
    else
        cout<<-1<<endl;
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
