#include <bits/stdc++.h>
using namespace std;
using std::vector;

/*
Index :
1. 

References/videos/tuts :
1. 

Special Points : 
1. 
*/

int main()
{
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;

        int count = 0;
        for (int div = 2; div * div <= n; div++)
        {
            if (n % div == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            cout << "prime" << endl;
        }
        else
        {
            cout << "not prime" << endl;
        }
    }
}