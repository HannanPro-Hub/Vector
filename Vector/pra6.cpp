#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    vector<int> vec1;
    vector<int> vec2;
    
    int i = 1;
    
    cout << "Enter 8 Numbers\n";
    while(i <= 8)
    {
        int num = 0;
        cin >> num;
        vec1.push_back(num);
        i++;
    }
    
    int del_num = 0;
    bool del = false;

    cout << "Enter Number To Delete : ";
    cin >> del_num;

    for (auto x : vec1)
    {
        if (x != del_num)
        {
            vec2.push_back(x);
            del = true;
        }
    }

    if (del == false)
    {
        cout << "Not Found";
    }

    cout << "\n";

    cout << "Vector After Removal : ";
    for (auto x : vec2)
    {
        cout << x << " ";
    }

    return 0;
}