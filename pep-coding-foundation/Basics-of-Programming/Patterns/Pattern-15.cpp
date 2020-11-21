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

    int sp = n/2,st = 1,val = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=sp;j++){
            cout<<"\t";
        }
        int cval = val;
        for(int j = 1;j<= st;j++){
            cout<<cval<<"\t";
            if(j <= st/2){
                cval++;
            }
            else{
                cval--;
            }
        }
        

        cout<<endl;

        if(i<= n/2){
            sp--;
            st+=2;
            val++;
        }
        else{
            sp++;
            st-=2;
            val--;
        }
    }
}