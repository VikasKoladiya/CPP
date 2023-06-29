// #include<iostream>
// using namespace std;
// int binarysearch(int array[],int size,int key){
//     int start = 0;
//     int end = size-1;

//     int mid = (start+end)/2;
//     while(start<=end){
//         if(array[mid]==key){
//             return mid;
//         }
        
//         //  go to right part
//         if(key>array[mid]){
//             start =  mid + 1;
//         }
//         // goto left part
//         else{
//             end = mid - 1;
//         }

//         mid = (start+end)/2;
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     cout<<"Enter array's element"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>array[i];
//     }
//     cout<<"Enter key : ";
//     int key;
//     cin>>key;
//     int index = binarysearch(array,n,key);
//     cout<<"Index is : "<<index;
// }


// oprimiszed code
// ahiya uper na code ma jo moti value hoi to te kadach int ni range bar vay jai but
// aa case ma -(minus) thai che etle always range ma j rahese
#include<iostream>
using namespace std;
int binarysearch(int array[],int size,int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;
    while(start<=end){
        if(array[mid]==key){
            return mid;
        }
        
        //  go to right part
        if(key>array[mid]){
            start =  mid + 1;
        }
        // goto left part
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    cout<<"Enter array's element"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter key : ";
    int key;
    cin>>key;
    int index = binarysearch(array,n,key);
    cout<<"Index is : "<<index;
}