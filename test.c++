#include <iostream>
using namespace std;

int add_numbers(int *p, int *m)
{
    int y;
    y = *p + *m;
    return y;
}

int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    y = add_numbers(&x,&y);
    cout<<y;
    return 0;
}