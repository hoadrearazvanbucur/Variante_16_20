#include <iostream>

using namespace std;

int main()
{
    int i,n,k=0;
    int x[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    for(i=0;i<n;i++)
    {
        if(x[i]==0)
            k++;
    }
    for(i=0;i<n;i++)
        if(x[i])
        cout<<x[i]<<" ";
    return 0;
}
