#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

  int solve=0;

    while(n--)
    {
        int p,v,t;
        cin>>p>>v>>t;



        if (p+v+t >= 2)
        {
            solve = solve+1;
        }
    }

       cout<<solve;

    return 0;
}
