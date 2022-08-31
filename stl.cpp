#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>

using namespace std;

// int rev(int x, int y)
// { // func. for rev an array
//     return x > y;
// }
// void vectorDemo(){
//     // vector<int> * vp = new vector<int>();           //Dynamic allocation(manually deleted)
//     // vector<int> v; //Statically Allocation(get deleted automatically)

//     // // for (int i = 0; i < 100; i++)
//     // // {
//     // //     v.push_back(i+1);
//     // // }

//     // v.push_back(10);
//     // v.push_back(20);                //we should always use push_back func. for inserting
//     // v.push_back(30);

//     // cout<<v[0] <<endl;              //we can use it like arrays
//     // cout<<v[1] <<endl;
//     // cout<<v[2] <<endl;

//     // v.push_back(100);
//     // v.push_back(200);

//     // cout<<"Size : "<<v.size()<<endl;                 //size is 5 as we have 5 elements in it
//     // cout<<"Current Capacity :"<<v.capacity()<<endl;                  //capacity is 8 as it gets doubled everytime

//     // v.pop_back();          //deleting the last ele present

//     // for(int i=0 ; i < v.size() ; i++){
//     //     cout<< v[i] <<endl;
//     // }

//     vector<int> v = {11, 3, 4, 15};

//     sort(v.begin(), v.end()); // O(NlogN) {3,4,11,15}
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v.at(i) << " ";
//     }

//     // checking ele. using binary search
//     bool check_ele = binary_search(v.begin(), v.end(), 15); // true   TC - O(logN)
//     check_ele = binary_search(v.begin(), v.end(), 55);      // false

//     // 3,4,11,15
//     v.push_back(100);
//     v.push_back(100);
//     v.push_back(100);
//     v.push_back(123);

//     // 3,4,11,15,100,100,100,123

//     vector<int>::iterator it = lower_bound(v.begin(), v.end(), 100);  // >= it will return the first occurence of greater than or equal to 100

//     //we can use 'auto' keyword instead of 'vector<int>::iterator' bcz the cpp complier can automatic identify it as an iterator
//     auto it2 = upper_bound(v.begin(), v.end(), 100); // >= it will return the first occurence of a ele. strictly greater 100

//     cout << *it << " " << *it2 << endl;
//     cout << it2 - it << endl;

//     // let's sort in reverse order
//     sort(v.begin(), v.end(), rev); // rev is func. we have to make
//     vector<int>::iterator it3;
//     cout << "Elements in reverse order : ";
//     // 123 100 100 100 15 11 4 3
//     for(int &x:v)           //iterating by refrence
//         x++;
//     for (int x : v)         //iterating normally
//         cout << x << " ";
//     // 124 101 101 101 16 12 5 4  all ele. increased by 1
// }

void setDemo(){
    // set is similar to vectors but more usefull as it inserts all the elements in an sorted order automatically without taking any extra time
    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);

    for (int x : S)
        cout << x << " ";
    cout << endl;

    //-10 , -1 , 1 , 2
    auto it = S.find(-1);
    if (it == S.end()) 
        cout << "not present\n";
    else
        cout << "present\n";
    cout << *it << endl;

    auto it2 = S.upper_bound(1);
    auto it3 = S.upper_bound(0);
    cout << *it2 << " " << *it3<<endl;
    // and if does not find the particular ele. then it return the S.end(the last element)
    auto it4 = S.upper_bound(2);
    if (it4 == S.end())
        cout << "oops element not present\n"<< endl;
       S.erase(1);
}
void powerOfStl(){
    set<pair<int,int>> P;
    P.insert({2,3});
    P.insert({10,12});
    P.insert({30,200});
    P.insert({400,500});

    auto it = P.upper_bound({10,INT_MAX});
    if(it==P.begin()){
        cout<<"the pair is not availablev:-((\n";
        return;
    }
    it--;
    
    pair<int,int> current = *it;
    if(current)
}
int main()
{
    // map<int, int> M;
    // M[0] = 1;
    // M[1] = -30;
    // M[2] = 5;
    // M[54352] = 11;

    // map<char, int> ms;
    // string c = "somansh soni";
    // for (int x : c)
    //     ms[x++];

    // cout << ms['s'] << " " << ms['a'] << endl;

    cout<<setDemo();
    return 0;
}
/*
.
.
.
.
.
.
.
.

.

.
.
.
.
.
.
.
.
.

.

.
.*/
// .
// .
// .
// .
// .
// .
// int main()
// {
//     vector<int> v;
//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++)
//     {
//         int k;
//         cin >> k;
//         v.emplace_back(k);
//     }

//     for(auto &it: v)
//     {
//         cout << it << " ";
//     }
//     cout << '\n';

//     int k;
//     cin >> k;

//     auto it = find(v.begin(), v.end(), k);
//     cout << *it << '\n';

//     for(int i = 1; i <= 8; i++)
//     {
//         v.insert(v.begin()+2, 415);
//     }

//     for(auto &it: v)
//     {
//         cout << it << " ";
//     }

//     for(int i = 0; i < v.size()-1; i++)
//     {
//         swap(v[i], v[i+1]);
//     }

//     vector<int> v2 = v;
//     v2.emplace_back(3);
//     v2.emplace_back(4);
//     v2.emplace_back(5);

//     vector<int> v3 = v2;
//     v3.emplace_back(7);
//     v3.emplace_back(8);
//     v3.emplace_back(9);

//     map<int,int> m;

//     int i = 0;
//     int j = 0;
//     k = 0;

//     while(k < v3.size())
//     {
//         if(i < v.size())
//         {
//             m[i]++;
//         }
//         if(j < v2.size())
//         {
//             m[j]++;
//         }
//         m[k]++;

//         i++;
//         j++;
//         k++;
//     }

//     int count = 0;

//     for(auto it: m)
//     {
//         if(it.second >= 2)
//         {
//             count++;
//         }
//     }
//     cout << count << '\n';

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void printVec(vector<int> v)
// {
//     cout << "Size of Vector is: " << v.size << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> v; // size=0 dynamic array are vector
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//         // it will add element at the back complexcity O(1)
//         //  v.size give current size of an array
//         //  vector<int> v(10,3);  10 indicate size and 3 indicate value
//     }
//     v.pop_back();
//     printVec(v);
//     vector<int> v2 = v;
//     // we made a copy
//     v2.pop_back();
//     printVec(v2);
//     vector<int> v3(3, 100);
//     vector<int> v4(2, 120);
//     v3.swap(v4); // swap

//     printVec(v3);
//     v.at(2) = 10;
//     printVec(v);

//     return 0;
// }
