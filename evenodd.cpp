#include<iostream>
using namespace std;
void evenodd(int );
int main()
{
    cout<<"enter a number : ";
    int num;
    cin>>num;
    evenodd(num);
    return 0;
}
void evenodd(int n)
{
    if(n%2==0)
    {
        cout<<"given number is "<<n<<" is EVEN "<<endl;
    }
    else
    {
    cout<<"given number is "<<n<<" is ODD "<<endl;
    }
}
