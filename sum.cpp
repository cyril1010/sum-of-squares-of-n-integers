//PROGRAM TO FIND THE SUM OF SQUARES OF N NATURAL NUMBERS

#include <iostream>

using namespace std;

int main()

{

    int i,n,s=0;

    cout<<"\n ENTER A LIMIT = ";

    cin>>n;

    for(i=0;i<=n;i++)

    {

        s=s+(i*i);

    }

cout<<"\n SUM OF SQUARES = "<<s;

return 0;

}

sum-of-squares-of-n-integers
