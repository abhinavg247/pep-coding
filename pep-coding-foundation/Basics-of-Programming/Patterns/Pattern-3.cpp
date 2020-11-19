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

    int sp = n-1, st = 1;
    for(int i = 1;i<=n;i++){

        for(int j = 1;j<=sp;j++){
            cout<<"\t";
        }

        for(int j = 1;j<=st;j++){
            cout<<"*\t";
        }

        sp--;
        st++;

        cout<<endl;
    }    
}