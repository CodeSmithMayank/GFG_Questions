#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseSubArray(vector<int> &arr, int l, int r) 
{
        // code here
        vector<int> c(arr);
        int s = l-1;
        int e = r-1;
        while(s<=e)
        {
            swap(c[s],c[e]);
            s++;
            e--;
        }
        return c;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    reverseSubArray(arr,2,4);
}