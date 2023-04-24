// #include<iostream>
// #include<cmath>
// using namespace std;
// inline void fun(int power,double base = 2.0);
// inline void fun(int power,double base)
// {
//     cout<<pow(base , power)<<endl;
// }
// int main()
// {
//     double base;
//     int power;
//     cout<<"\t22DCE044"<<endl;
//     cout<<"Enter power : ";
//     cin>>power;
//     fun(power);
// }

#include <iostream>
using namespace std;
inline void fun(int power, double base = 2.0);
inline void fun(int power, double base)
{
    double ans = 1.0;
    for (int i = 1; i <= power; i++){
        ans *= base;
    }
    cout << ans << endl;
}
int main()
{
    double base;
    int power;
    cout<<"ID:22DCE044"<<endl;
    cout << "Enter power:";
    cin >> power;
    cout << "Enter base in double:";
    cin >> base;
    fun(power, base);
    fun(power);
    return 0;
}