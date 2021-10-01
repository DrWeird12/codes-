#include<bits/stdc++.h>
using namespace std;
int func(int d, int l, int r){
    if(d >= l && d<=r){
            cout<<"Take second dose now\n";
        }
        else if(d>r){
            cout<<"Too Late\n";
        }
        else{
            cout<<"Too Early\n";
        }
}
int main(){
    int test;
    cin>>test;
    
    for(int i=0;i<test;i++){
        int d, l, r;
        cin>>d>>l>>r;
        
        func(d,l,r);
        
    }
    
    return 0;
}
