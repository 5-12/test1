#include <iostream>
using namespace std;
int a[20]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
bool a1[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int n=0;
int dfs(int);
int main()
{
    int b=1;
    for (int i = 0; i <=20; i++)
    {
        //a[i]*=a[i-1]*2;
        //cout<<a[i-1]*2<<" "<<i<<" "<<a[i-1]<<endl;
        a[i]=b;
        b*=2;
        //cout<<b<<endl;
    }
    cin>>n;
    for (int i = 20; i>=0; i--)
    {
        //cout<<a[i]<<endl;
        if(n>=a[i])
        {
            ;
            a1[i]=1;
            n-=a[i];
            //cout<<"n>"<<a[i]<<"n="<<n<<endl;
            
        }
        
        //;cout<<a[i]<<endl;
    }
    for (int i = 20; i >=0; i--)
    {
        //cout<<a1[i];
        if (a1[i]==1)
        {
            dfs(0);//二进制判定
        }
        
        
    }
    
    return 0;
    
}