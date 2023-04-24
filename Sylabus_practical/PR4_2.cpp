// #include<iostream>
// #include<iomanip>
// using namespace std;

// int & tonLarge(int &a,int &b)
// {
//    if(a>b)
//         return a;
//     else
//         return b;
// }

// main()
// {
//     int a,b,x;
//     cout<<setw(20)<<"ID : 22DCE044"<<endl;
//     cout<<"Enter First Number(A) :- ";
//     cin>>a;
//     cout<<"Enter Second Number(B) :- ";
//     cin>>b;
//     tonLarge(a,b) = 100;
//     cout<<"Value of A :- "<<a<<endl;
//     cout<<"Value of B :- "<<b;

// }
#include <iostream>
using namespace std;
void tonLarge(int &a, int &b)
{
    if (a > b)
        a = 100;
    else
        b = 100;
}
int main()
{
    int a, b;
    cout<< "\t22DCE044" <<endl;
    cout<< "Enter a and b:";
    cin>>a>>b;
    tonLarge(a, b);
    cout << "After:" << endl
         << a << " " << b;
    return 0;
}
