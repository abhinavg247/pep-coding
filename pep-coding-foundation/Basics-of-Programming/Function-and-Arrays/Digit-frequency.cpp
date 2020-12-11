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

int getDigitFrequency(int n, int d){
    int count = 0;
    while(n>0){
        (n&10 == d) ? count++ : count;
        n = n/10;
    }

    return count;
}

int main()
{
  int n,d,f;
  cin>>n>>d;
  f = getDigitFrequency(n,d);
  cout<<f<<endl;  
}