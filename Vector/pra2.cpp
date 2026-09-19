#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    vector<int> vec;

    int i = 1;
    
    cout << "Enter 8 Numbers\n";
    while(i <= 8)
    {
        int num = 0;
        cin >> num;
        vec.push_back(num);
        i++;
    }
    cout << "\n";
    int largest = vec[0];
    cout << "Elements : ";
    for (auto x : vec)
    {
        cout << x << " ";
        if(x > largest)
        {
            largest = x;
        }
    }
    cout << "\n";
    
    cout << "Largest : " << largest;
    return 0;
}