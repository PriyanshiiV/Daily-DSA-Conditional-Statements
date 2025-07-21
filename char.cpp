// #include<iostream>
// using namespace std ;
// int main()
// {
//     char ch;
//     cout<<"Enter character :";
//     cin>>ch;

//     if (ch>='a' && ch<='z')
//     {
//         cout<<"character entered is in lowercase";
//     }
//     else 
//     {
//         cout<<"Entered character is in uppercase";
    
//     }
// }

#include<iostream>
using namespace std ;
int main()
{
    char ch;
    cout<<"Enter character :";
    cin>>ch;

    if (ch>=65 && ch<=90)
    {
        cout<<"character entered is in UPPERCASE";
    }
    else 
    {
        cout<<"Entered character is in LOWERCASE";
    
    }
}

