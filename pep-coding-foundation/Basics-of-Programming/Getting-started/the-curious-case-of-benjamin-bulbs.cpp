#include <bits/stdc++.h>
using namespace std;
using std::vector;

/*
Index :
1. 

References/videos/tuts :
1. 

Special Points : 
1. Only Perfect squares have odd number of factors. 
*/

int main()
{
    int n;
    cin>>n;

    for(int i = 1;i*i<=n;i++){
        cout<<i*i<<endl;
    }
}