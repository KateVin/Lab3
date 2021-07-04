/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j, size;
    cout<<"Введите размер массива"<<endl;
    cin>>size;
    int *mass = new int[size];
    cout<<"Заполните массив"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<"mass["<<i<<"] = ";
        cin>>mass[i];
    }
    for(i=0;i<size;i++)
    {
        if(mass[i]<0)
        {
            for(j=i;j<size;j++)
            {
                mass[j]=mass[j+1];
            }
            --size;
            --i;
            
        }
        
    }
    for(i=0;i<size;i++)
    {
        cout<<mass[i]<<" ";
        
    }
    return 0;
}
