#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    vector<int> vec;

    int i = 1;

    cout << "Enter 5 Numbers\n";
    while(i <= 5)
    {
        int num = 0;
        cin >> num;
        vec.push_back(num);
        i++;
    }
    cout << "\n";
    cout << "Elements : ";
    for (auto x : vec)
    {
        cout << x << " ";
    }
    cout << "\n";
    cout << "Size : " << vec.size();

    return 0;
}