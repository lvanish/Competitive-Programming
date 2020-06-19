#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


const int mxN=100;
int n, m[mxN] [mxN];

void ans(){
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>> m[i][j];
            
            
    int l=0;
    for(int i=0; i<n; i++)
        l += m[i][i];
            
    int z=0;
    
    for(int i=0; i<n; i++){
        set<int> s;
        
        bool repeat = 0;
        for(int j=0; j<n;j++){
            if((s.find(m[i][j]))!=s.end())
                repeat = 1;
            s.insert(m[i][j]);
        }
        if(repeat)
            z++;
    }
    
    int p=0;
    for(int i=0; i<n; i++){
        set<int> s;
        bool repeat=0;
        for(int j=0; j<n; j++){
            if(s.find(m[j][i])!=s.end())
                repeat=1;
            s.insert(m[j][i]);
        }
        if(repeat)
            p++;
    }
    cout<< l << " " << z << " " << p <<"\n";
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








