//reverse a string

#include <iostream> 
using namespace std; 
int main() 
{
    string str, reverse;
    int n;
    cout<<"Enter the string that you want to reverse:"; 
    cin>>str;
    n=str.length();
    for (int i = n-1; i >= 0; i--) 
    { 
         reverse = reverse + str[i]; 
    } 
    cout<<reverse; 
return 0; 
}