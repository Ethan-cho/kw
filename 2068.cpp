#include<iostream>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int t=1;t<=tc;t++)
    {
        int a[10];
        int max=0;
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
            if(max<a[i])
            {
                max=a[i];
            }
        }
        cout<<"#"<<t<<' '<<max<<'\n';
    }
    return 0;
}
