#include <iostream>
using namespace std;

void dummy(int n) //directly pass the value
{
    n++;
    cout << "n is " << n << endl;
}

//driver code
int main()
{
    int n;
    cin>>n;

    dummy(n);

    cout<< "number n is "<<n<<endl;

    return 0;
}
