#include<iostream>
using namespace std;
 
int main(){
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        int n=10;
        int ans=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num%2==1)
                ans+=num;
        }
        cout<<'#'<<t<<' '<<ans<<'\n';
    }
    return 0;
}
