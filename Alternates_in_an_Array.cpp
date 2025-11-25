#include<iostream>
#include<vector>
using namespace std;

vector<int> getAlternates(vector<int> &arr) 
{
        // code here
        vector<int> r;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(i%2 == 0)
            {
                r.push_back(arr[i]);
            }
        }
        return r;
}

int main()
{
    vector<int> arr = {1,2,3,4};
    getAlternates(arr);
}