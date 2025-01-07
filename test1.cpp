#include <iostream>
using namespace std;
int test(int);
int a0[100];
int main(void)
{
    test(1);
}
int test(int a)
{
    for (int i = 1; i <= 3; i++)
    {
        if (a<=3)
        {
            a0[a]=i;
            test(a+1);
        }
        else
        {
            for (int i = 1; i < 4; i++)
            {
                cout<<a0[i]<<" ";
                
            }
            cout<<endl;
            return 0;
        }
    }
    return 0;
}