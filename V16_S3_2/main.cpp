#include <iostream>

using namespace std;

int main()
{
    int i,n;
    int x[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    int a , b;
    cin>>a>>b;
    for(i=0;i<n;i++)
    {
        if(a<b)
            if(x[i]>=a&&x[i]<=b)
            x[i]=0;
        else
            if(x[i]<=a&&x[i]>=b)
            x[i]=0;
    }
    for(i=0;i<n;i++)
        if(x[i])
        cout<<x[i]<<" ";
    return 0;
}
