#include<iostream>
#include<vector>
using namespace std;

int largest(vector<int> &arr) 
{
        // code here
        int me=0;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            me=max(me,arr[i]);
        }
        return me;
}

int main()
{
    vector<int> arr{1, 8, 7, 56, 90};
    largest(arr);
}