#include <iostream>
using namespace std;
int main()
{
    int val1,val2,max;

    cout<<"Enter two numbers: ";
    cin>>val1>>val2;
    max =(val1 >val2) ? val1 : val2;
    do
    {
        if (max % val1 == 0 && max % val2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);
    
    return 0;
}