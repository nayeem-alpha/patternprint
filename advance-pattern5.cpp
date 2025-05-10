#include<iostream>
using namespace std;

int main(){
    int n,row,col;
    cout<<"Enter Your Number :"<<endl;
    cin>>n;
    for(row=1;row<=n;row++)
    {
        // print star
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }

        // print space
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<"  ";
        }
        // print star
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }

        cout<<endl;

        
    }
    //   Next part of the solution
    for(row=n-1;row>=1;row--)
    {
        // print star
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }

        // print space
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<"  ";
        }
        // print star
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }

        cout<<endl;

        
    }
    return 0;
}