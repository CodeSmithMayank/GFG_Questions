#include<iostream>
#include<vector>
using namespace std;

void insertAtEnd(vector<int> &arr, int val) 
{
        // code here
        arr.push_back(val);
}

int main()
{
    vector<int> arr{1,2,3,4};
    insertAtEnd(arr,90);
}