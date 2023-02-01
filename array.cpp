#include<iostream>
using namespace  std;
int main ()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;
    int array[size];
    int i;
    cout << "Enter the elememts :";
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "The array is :";
    for ( i = 0; i < size; i++)
    {
        cout << array[i];
    }
    
    int j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;size - i - 1;j++ )
        {
            if (array[j] > array[j+1])
            {
                temp=array[j+1];
                array[j+1]= array[j];
                array[j]=temp;
            }
        }
    }

    cout << "After sorting ";
    for ( i = 0; i < size; i++)
    {
        cout << array[i];
    } 


    return 0;
}