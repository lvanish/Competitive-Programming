#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void ans(){
    string s;
    cin>>s;
    
    int depth=0;
    string ans;
    for(char c : s){
        int newdepth = c-'0';
        while(newdepth>depth){
            depth++;
            ans+='(';
        }
        while(newdepth<depth){
            depth--;
            ans+=')';
        }
        ans += c;
    }
    
    while(depth>0){
        depth--;
        ans += ')';
    }
    cout<<ans<<"\n";
}

int main(){
    fast_io();
    int t;
    cin>>t;
    
    for(int i=1; i<=t; i++){
        
        cout<<"Case #"<< i << ": ";
        ans();
    }
}


