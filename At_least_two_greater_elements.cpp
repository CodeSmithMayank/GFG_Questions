#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findElements(vector<int> arr) 
{
        // Your code goes here
        sort(arr.begin(),arr.end());
        vector<int> r;
        int e = arr.size() - 2;
        for(int s = 0 ; s <e ; s++)
        {
            r.push_back(arr[s]);
        }
        return r;
}

int main()
{
    vector<int> arr{2,4,1,88,25,10};
    findElements(arr);
}