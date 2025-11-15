#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMin(vector<int>& arr) 
{
        // complete the function here
        sort(arr.begin(),arr.end());
        return arr[0];
}

int main()
{
    vector<int> arr{5, 6, 1, 2, 3, 4};
    findMin(arr);
}