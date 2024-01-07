#include<iostream>
using namespace std;
// void printElement();
// void addElement();
// void deleteElement();
// void returnElement();
// void Exit();

int main()
{
    string in;
    int i = 0;  
    int input;
    bool check = true;
    int start = 2;
    int *arr = new int[start];
    
    
    do
    {

    cout << "(p): Print Elements" << endl;
    cout << "(a): Add Element" << endl;
    cout << "(d): Delete Element" << endl;
    cout << "(r): Return size" << endl;
    cout << "(e): Exit" << endl;
    cout << "Enter an option ";
    cin >> in;

    if (in=="a")
    {
        cout << "Enter an element" << endl;
        cin >> input;
        
        
        if(i >= start)
        {
            start = 2 * start;

            int *arr1 = new int [start];
            for (int j = 0; j < i; j++)
            {
                arr1[j] = arr[j];
            }
            delete arr;

            arr = new int [start];
            for (int j= 0; j < i; j++)
            {
                arr[j] = arr1[j];
            }
            delete arr1; 
            cout << "Array Expanded " << endl;
        }
        arr[i] = input;
        i++;
        cout << "Value of i " << i << endl;
    }
    else if (in == "p")
    {
       if (i>0)
       {
            cout << "The value of the array is: ";
           for (int count = 0; count < i; count++)
        {
            cout << arr[count] << " ";
        }
        cout << endl;
       }
       else
       {
           cout << "No elements " << endl;
       }
       
    }
    else if (in=="d")
    {
        cout << "Enter the number you want to delete " << endl;
        cin >> input;
        for (int j = 0; j < i ; j++)
        {
           if (arr[j] == input)
           {
               for (int k = j; k < i -1 ; k++)
               {
                   arr[k] = arr[k+1];
               }
               i--;
               check = false;
               break;
           }
        }
        if (check)
        {
            cout << "Not found" << endl;
        }
        if(i <= (start)/2)
        {
            start = start / 2;

            int *arr1 = new int [start];
            for (int j = 0; j < i; j++)
            {
                arr1[j] = arr[j];
            }
            delete arr;

            arr = new int [start];
            for (int j= 0; j < i; j++)
            {
                arr[j] = arr1[j];
            }
            delete arr1; 

            cout << "Array Shrinked " << endl;

        }
        check = false;
    }
    else if (in == "r")
    {
        cout << "S: " << start;
        cout << ", E: " << i << endl; 
    }
    
    else if (in == "e")
    {
        delete arr;
        exit;
    }
    
    
    } while (in!="e");
    
    delete arr;

    
    return 0;
}

