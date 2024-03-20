//
// Created by Ankit Sahu on 8/27/23.
//

#include <iostream>
#include <set>
using namespace std;

class copyConstructor{
    int a;
};

int main ()
{
    std::set<int> myset;
    std::set<int>::iterator itlow,itup;

    for (int i=1; i<10; i++)
        myset.insert(i*10); // 10 20 30 40 50 60 70 80 90

    std::cout << "myset contains:";
    for (std::set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    itlow=myset.lower_bound (1000000);                //       ^
    itup=myset.upper_bound (10000);                 //                   ^

    cout<<"it lower (1000000) = "<<*itlow<<endl;
    cout<<"it upper (10000) = "<<*itup<<endl;
//    myset.erase(itlow,itup);                     // 10 20 70 80 90



    return 0;
}