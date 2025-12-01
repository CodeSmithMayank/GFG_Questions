#include<iostream>
#include<vector>
using namesapce std;

string reverseString(string& s) 
{
        // code here
        string r = "";
        int i = s.length() - 1 ;
        while(i>=0)
        {
            r+=s[i];
            i--;
        }
        return r;
}

int main()
{
    reverseString("Geeks");
}