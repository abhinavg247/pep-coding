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

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i + j == n + 1 || i == j){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }

        cout<<endl;
    }
}