#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
    string y;
    cin>>y;

       if (y.size () > 10)
     {
         string abbreviation = y[0] + to_string(y.size ()- 2) + y[y.size () -1];
         cout << abbreviation << endl;
     }
     else
     {
         cout<< y <<endl;

     }
    }

   return 0;
}
