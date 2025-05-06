#include<iostream>
using namespace std;
int main()
{
    int row;
    for(row=1;row<=5;row++)
    {
        char col;
        for(col='a';col<='e';col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}