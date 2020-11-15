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
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    int c;
    for (int i = 0; i < n; i++)
    {
        cout << a << ",";
        c = a + b;
        a = b;
        b = c;
    }
}