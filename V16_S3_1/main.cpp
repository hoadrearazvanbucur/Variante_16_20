#include <iostream>

using namespace std;

int main()
{
    int i,j,a;
    int x[100][100];
    cin>>a;

    for(i=0;i<a;i++)
        for(j=0;j<a;j++)
            cin>>x[i][j];

    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        cout<<x[i][j]<<" ";
        cout<<endl;
    }
    int ok;
    for(i=0;i<a;i++)
    {
        ok=1;
        for(j=0;j<a-1;j++)
        {
            if(x[j][i]>x[j+1][i])
            {
                ok=0;
            }

        }
        if(ok==1)
            cout<<i<<" ";

    }
    return 0;
}
