#include<iostream>
using namespace  std;
int main()
{
    int rows,k=0;
    cout<<"enter number of rows: ";
    cin>>rows;
    for(int i=1, k=0; i<=rows; ++i, k=0)
    {
        for (int space = 1; space <=rows-i ; ++space)
        {
            cout<<"  ";
        }
        while (k != 2 * i -1)
        {
            cout<<"* ";
            ++k;
        }
        cout<<"\n";
    }
    return 0;
}