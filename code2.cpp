#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            cout<<setw(3)<<left<<i*j;
        }
        cout<<"\n";
    }
    cout<<"this program is created by 22cs062"<<endl;
}