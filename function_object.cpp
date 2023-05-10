#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int array[]={1,78,5,2,7,54};
    sort(array,array+5);    // it sort member in accending order up to 5 member
    // sort( array, array+6, greater< int >( ));    // it is sort desending order up to 6 member
    for(int i=0;i<6;i++){
        cout<<array[i]<<endl;
    }
}
