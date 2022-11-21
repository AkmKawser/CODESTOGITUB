#include <iostream>
using namespace std;

int main ()
{
    int i,sum,N;
    cin>>N;
    sum = 0;
    for ( i=1 ; i<=N; i++)
    {
        cout<<2*i;
        sum +=2*i;
    }
    cout<<endl;
    cout<<"sum:"<<sum;
    return 0; 
}