#include<iostream>
using namespace std;
int main ()
{
    int num;
    
    cin >> num;
    if (num > 0)
        cout << "positive";
    else if (num<0)
        cout << num << "negative number";
        else
            cout << "invalid";
    return 0;
}
