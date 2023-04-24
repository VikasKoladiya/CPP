#include<iostream>
using namespace std;
class function
{
    public:
    void div(int a,int b)
    {
        if(a%b==0)
        {
            cout<<"Number is divisible"<<endl;
        }
        else
        {
            cout<<"Number is not divisible"<<endl;
        }
    }
    void div(int a)
    {
        int count = 0;
        for(int i=1;i<=a;i++){
            if(a%i==0)
                count++;
        }
        if(count==2)
            cout<<"Prime";
        else
            cout<<"Not Prime";
    }
    float div(float a,float b,float c)
    {
        float avg;
        avg = (a+b+c)/3;
        return avg;
    }
};
int main()
{
    function f;
    int a,b;
    cout<<"\t22DCE044"<<endl;
    cout<<"Enter two number : ";
    cin>>a>>b;
    f.div(a,b);
    int p;
    cout<<"Enter number for check it is prime or not : ";
    fflush(stdin);
    cin>>p;
    f.div(p);
    float x,y,z;
    cout<<endl<<"Enter there number : ";
    cin>>x>>y>>z;
    cout<<f.div(x,y,z);    
    return 0;
}