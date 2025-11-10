#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr) 
{
        // code here
        int start = 0 ;
        int end = arr.size() - 1 ;
        while(start<=end)
        {
            swap(arr[start],arr[end]) ;
            start++;
            end--;
        }
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    reverseArray(arr);
}