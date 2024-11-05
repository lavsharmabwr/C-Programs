#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    char alpha;

    cout<<"\n\t\tEnter the number of rows : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        alpha='A';
        for(j=1;j<=i;j++)
        {
            cout<<alpha;
            alpha++;
        }
        cout<< "\n";
    }

    return 0;
}

