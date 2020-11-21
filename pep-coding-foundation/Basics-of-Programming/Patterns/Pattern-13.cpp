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

    for(int i = 0;i<n;i++){
        int icj = 1;
        for(int j = 0;j<=i;j++){
            cout<<icj<<"\t";
            int icjp1 = ( icj * (i-j) ) / (j + 1);
            icj = icjp1; 
        }
        cout<<endl;
    }
}