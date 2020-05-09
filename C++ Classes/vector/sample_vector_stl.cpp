#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // declaration of vector name.
    const int n = 20;
    vector<int> v1;                                //creates a vector v1 of size 0.
    vector<int> v2(n);                             //creates a vector v2 of size n,with every element intialized by 0.
    vector<int> v3(n, 3);                          //create a vector v3 of size n,with every element intialized by 3.
    vector<int> v4{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //create a vector v4 of size 10,with value itialized starting from v4[0]=1... and so on.

    // inserting elements into the vector using push_back()
    // push_back() : insert element at the end of the vector.
    v1.push_back(12);
    v1.push_back(2);
    v1.push_back(24);
    v1.push_back(15);
    v1.push_back(89);
    v1.push_back(78);
    cout<<"\n------------------------Elements of v1-----------------------\n";
    cout<<"\n--------------------Print using size_t-----------------------\n";
    for (size_t i = 0; i < v1.size(); i++) {
        cout << "v1[" << i << "] = " << v1[i] << endl;
    }

    // inserting element into the vector using insert(iterator,element).
    //insert() : insert at a specific position.
    v2.insert(v2.begin(),13);
    v2.insert(v2.begin(),14);
    v2.insert(v2.begin(),15);
    v2.insert(v2.begin(),16);
    v2.insert(v2.begin(),17);
    vector<int>::iterator it;
    cout<<"\n------------------------Elements of v2-----------------------\n";
    cout<<"\n--------------------Print using iterator-----------------------\n";
    for (it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }

    cout<<"\n\n------------------------Elements of v3-----------------------\n";
    cout<<"\n--------------------Print using auto-----------------------\n";
    for(auto i = v3.begin();i != v3.end();++i) {
        cout<<*i<<" ";
    }
    //deleting all elements of vector v3;
    cout<<"\n\nAfter using v3.clear()\n";
    cout<<"Size of Vector v3 = "<<v3.size();

    cout<<"\n\n------------------------Elements of v4-----------------------\n";
    cout<<"\n--------------------print using shorthand for loop-----------------------\n";
    for(int j : v4) {
        cout<<j<<" ";
    }
    cout<<"\n\n Use of erase() on v4 from index 4 t0 9 : \n";
    v4.erase(v4.begin()+4,v4.end());
    cout<<"\nAfter using erase() v4 will be:\n";
    for(int j : v4) {
        cout<<j<<" ";
    }

}