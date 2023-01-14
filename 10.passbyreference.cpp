#include <iostream>
using namespace std;

void f(int &x) //pass the address of value using &
{
    x--;
}

// Driver code
int main()
{
    int a = 5;
    cout << a << endl;
    f(a);
    cout << a << endl;
}