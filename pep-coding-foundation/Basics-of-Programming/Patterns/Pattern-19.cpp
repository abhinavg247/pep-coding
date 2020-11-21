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
            if(i == 1){
                if(j == n || j <= n/2 + 1){
                    cout<<"*\t";
                }else{
                    cout<<"\t";
                }
            }else if(i <= n/2){
                if(j == n || j == n/2 + 1){
                    cout<<"*\t";
                }else{
                    cout<<"\t";
                }
            }else if( i == n/2 + 1){
                    cout<<"*\t";
            }else if(i < n){
                if(j == 1 || j == n/2 + 1){
                    cout<<"*\t";
                }else{
                    cout<<"\t";
                }
            }else{
                if(j == 1 || j >= n/2 + 1){
                    cout<<"*\t";
                }else{
                    cout<<"\t";
                }
            }
        }

        cout<<endl;
    }
}