#include<iostream>
using namespace std;
main()
{
    int x, m, n;
    m = 10;
    n =15;

    x=++m + n++;
    cout<<x<<m<<n;
}