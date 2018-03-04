#include<iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        int a,b;
        cin>>a>>b;
        
        char ans;
        
        if(a>b) ans='>';
        if(a==b) ans='=';
        if(a<b) ans='<';
        
        cout<<'#'<<t<<' '<<ans<<'\n';
    }
    return 0;
}
