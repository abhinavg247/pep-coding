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
    cin>>n;

    int a = 0 , b = 1 , c;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<< a << "\t";
            c = a + b;
            a = b;
            b = c;
        }
        cout<<endl;
    }
}