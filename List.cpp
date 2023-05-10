#include <iostream>
#include <list>

using namespace std;

void display(list<int> &list1)
{
    list<int>::iterator iter; // aa pade position store karav va thai
    // apde vector ma koi special position per koi value store karav vi hoi to v.begin() no vesu kariye location mate
    // em j ahiya te location ahiya iter ma stire kari ne tyathi koi number add ke remove thai
    for (iter = list1.begin(); iter != list1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(41);
    list1.push_back(56);
    list1.push_back(12);
    display(list1);

    // removing element from list
    // list1.remove(2);    // ama list mathi jeta 2 hase etla 2 remove thai jase jo koi special number j remove karvo hoi tyare use karva no
    // list1.pop_back();   // pachal thi remove thase
    // list1.pop_front();  // agal thi remove thases
    // display(list1);

    //  sorting the list
    // list1.sort();
    // display(list1);

    //  reversing the string
    // list1.reverse();
    // display(list1);

    //  merging two list
    list<int> list2(3);
    list<int> :: iterator ite1;
    ite1 = list2.begin();
    *ite1 = 53;
    ite1++;
    *ite1 = 99;
    ite1++;
    *ite1 = 18;
    ite1++;
    display(list2);
    list1.merge(list2);
    cout<<"After merging 1 list : ";
    display(list1);
    list1.sort();
    display(list1);
}
