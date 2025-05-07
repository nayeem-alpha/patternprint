#include<iostream>
using namespace std;

int main(){
    int n;
    //getting input from user
    cout<<"Enter your number :"<<endl;
    cin>>n;
    //row print
    for(int row=1;row<=n;row++)
    {
        // space print
        for(int col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }
            //  letter print
            
        for(char col ='A';col<='A'+(row-1);col++)
        {
            cout<<col<<" ";
        }

        cout<<endl;
    }

    return 0;
}