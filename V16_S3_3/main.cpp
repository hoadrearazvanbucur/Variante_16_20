#include <iostream>

using namespace std;

int main()
{
    int n,k=0,c,inv=0;
    cin>>n;
    while(n)
    {
        inv=inv*10+n%10;
        n=n/10;
    }
    n=inv;
    int c1,c2,ok=0;
    c2=n%10;
    c1=c2;

    while(n)
    {  if(c1>c2)
        {
            ok=1;
            break;
        }


        c1=c2;
        n=n/10;
        c2=n%10;
    }
    if(ok==0)
        cout<<"DA"<<endl;
    else
        cout<<"NU"<<endl;
    return 0;
}
