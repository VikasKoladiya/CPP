#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    // Map is an associative array
    map<string, int>  marksMap;
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;

    // syntax : marksMap.insert({pair_1,pair_2......pair_n});
    marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );   
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";         //here fisrt give key key is inbreaket name and 
        // second give its assignd value
    }
    
    cout<<"the size is : "<<marksMap.size()<<endl;
    cout<<"the max size is : "<<marksMap.max_size()<<endl;
    cout<<"the empty size is : "<<marksMap.empty()<<endl;
    return 0;
}
