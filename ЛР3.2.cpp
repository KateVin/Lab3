/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


string str;
int glas(string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||
        str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        cout<<str[i]<<" ";
    }
}
int main()
{
    cout<<"Введите строку: "<<endl;
    getline(cin, str);
    cout<<"Гласные в строке: "<<endl;
    glas(str);

return 0;
}

