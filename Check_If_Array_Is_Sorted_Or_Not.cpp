#include<iostream>
#include<vector>
using namespace std;

 bool isSorted(vector<int>& arr) 
 {
        // code here
        int s = 0;
        int e = arr.size()-1;
        while(s<e)
        {
            if(arr[s]<=arr[s+1])
            {
                
            }
            else
            {
                return false;
            }
            s++;
        }
        return true;
}

int main()
{
    vector<int> a {10, 20, 30, 40, 50};
    isSorted(a);
}