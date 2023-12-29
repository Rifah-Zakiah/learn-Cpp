#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3};
    v.push_back(4);//pushes value at the back of the container
    v.push_back(5);
    int n = v.size();//size of the vector

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    //iterator:
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
    //for each
    for(auto element: v)//element is not a iterator, but basically the element of the container
                        //auto decides the type the element htrough previous declaration  
        cout << element << " ";
    cout << endl;

    v.pop_back();//deletes the last element of the container 

    vector<int> v2(3, 50);//creates a vector of size 3-ints with the same values of 50, v2 = {50, 50, 50}

    swap(v, v2);
    for(auto element: v)
        cout << element << " ";
    cout << endl;

    return 0;
}