#include <bits/stdc++.h>
using namespace std;
using std::vector;

/*
Index :
1. 

References/videos/tuts :
1. 

Special Points : 
1. Modulus can also be used with negative numbers
*/

int power(int x , int y){
    int ans = 1;
    while(y>0){
        ans*=x;
        y--;
    }

    return ans;
}

int main()
{

/*

 same code but difference is i used to think that mod negative numbers
    int n;
    int k;
    cin>>n>>k;

    // find no of digits
    int temp = n;
    int nod = 0;
    while(temp > 0){
        nod++;
        temp/=10;
    }

    if(k > 0){
        k = k%nod;
    }
    else if( k < 0 ){
        k = (-1) * (abs(k) % nod);

        k = nod + k; 
    }

    // after finding net k = [0,nod-1]


    int div = power(10,k);

    int pred = n % div;

    n = n / div;

    n = n +  ( pred * power(10, nod-k) ); 

    cout<<n<<endl;

    */

    int n,k;
    cin>> n >>k;

    // find no of digits
    int temp = n;
    int nod = 0;
    while(temp > 0){
        nod++;
        temp/=10;
    }

    k = k%nod;
    if(k<0){
        k = nod + k;
    }

    int div = 1;
    int mult = 1;
    for(int i = 1;i<=nod;i++){
        if(i<=k){
            div = div*10;
        }
        else{
            mult = mult*10;
        }
    }

    int r = n % div;
    int q = n/div;

    int rot = r*mult + q;
    cout<<rot<<endl;
}