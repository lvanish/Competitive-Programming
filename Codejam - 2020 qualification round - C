#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define ar array

const int mxN=1e3;
int n, l[2];
ar<int, 3> a[mxN];
char c[2]={'C','J'}, ans[mxN];

void solution(){
    
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i][0]>>a[i][1];
        a[i][2]=i;
    }
    sort(a, a+n);
    
    l[0]=l[1]=1e9;
    for(int i=n-1; ~i; --i){
        bool assigned = 0;
        int p1=0, p2=1;
        if(l[p1]>l[p2])
            swap(p1, p2);
        if(a[i][1]<=l[p1]){
            assigned = 1;
            ans[a[i][2]] = c[p1];
            l[p1]=a[i][0];
        }
        if(!assigned && a[i][1]<=l[p2]){
            assigned=1;
            ans[a[i][2]]=c[p2];
            l[p2]=a[i][0];
        }
        if(!assigned){
            cout<<"IMPOSSIBLE\n";
            return;
        }
    }
    for(int i=0; i<n; i++)
        cout<<ans[i];
    cout<<"\n";
    
}


int main() {
    fast_io();
    int t;
    cin>>t;
    
    for(int i=1; i<=t; i++){
        
        cout<<"Case #"<< i << ": ";
        solution();
    }
    
	return 0;
}
