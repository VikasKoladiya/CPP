#include<iostream>
using namespace std;
int main()
{
    int a=10;            // 1010
    int b=13;            // 1101
    int c=6;             // 0110
    int d=15;            // 1111
    cout<<(a|b)<<endl;   // (1010 | 1101) = 1111 = (1*8+1*4+1*2+1*1) = 15
    cout<<(a|c)<<endl;   // (1010 | 0110) = 1110 = (1*8+1*4+1*2+0*1) = 14
    cout<<(a|d)<<endl;   // (1010 | 1111) = 1111 = (1*8+1*4+1*2+0*1) = 15
    cout<<(b|c)<<endl;   // (1101 | 0110) = 1111 = 15
    cout<<(b|d)<<endl;   // (1101 | 1111) = 1111 = 15
    cout<<(c|d)<<endl;   // (0110 | 1111) = 1111 = 15
    cout<<(a&b)<<endl;   // (1010 & 1101) = 1000 = 8
    cout<<(a&c)<<endl;   // (1010 & 0110) = 0010 = 2
    cout<<(a&d)<<endl;   // (1010 & 1111) = 1010 = 10
    cout<<(b&c)<<endl;   // (1101 & 0110) = 0100 = 4
    cout<<(b&d)<<endl;   // (1101 & 1111) = 1101 = 13
    cout<<(c&d)<<endl;   // (0110 & 1111) = 0110 = 6
}