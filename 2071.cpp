#include<iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++){
        
        ///문제풀이
        int n=10;	//10번
        int sum=0;	//합을 저장할 변수
        for(int i=0;i<n;i++){
            int temp;	//입력을 받을 변수
            cin>>temp;	//입력 받기
            sum+=temp;	//합구하기
        }
        if(sum%10>=5){
            sum=sum+10;
        }
        int ans=sum/10;
    	cout<<'#'<<t<<' '<<ans<<'\n';
    }
	return 0;
}
