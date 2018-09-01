
#include<iostream>
#include<climits>
#include<string>
using namespace std;
 
class genesis
{
    int timestamp;
    string data;
    int nodeNumber;
    string nodeId;
    string referenceNodeId;
    string childReferenceNodeId;
    string genesisReferenceNodeId;
    string Hashvalue;
    
}
genesis s1;


void max_heapify(int *a, int i, int number)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= number)
    {
        if (j < number && a[j+1] > a[j])
            j = j + 1;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j/2] = temp;
    return;
}
void build_maxheap(int *a,int number)
{
    int i;
    for(i = number/2; i >= 1; i--)
    {
        max_heapify(a,i,number);
    }
}

//genesis node has no parent node attached to it.


int main()
{
    int number, i, x;
    cout<<"enter no of elements of array\n";
    cin>>number;
    int a[20];
    for (i = 1; i <= number; i++)
    {
        cout<<"enter element"<<(i)<<endl;
        cin>>a[i];
    }
    build_maxheap(a,number);
    cout<<"Max Heap\n";
    for (i = 1; i <= number; i++)
    {
        cout<<a[i]<<endl;
    }
    getch();
}
int i, x;
   char str[100];

   cout << " enter a string:\t";
   cin >> str;

   cout << "\nPlease choose following options:\n";
   cout << "1 = Encrypt.\n";
   cout << "2 = Decrypt.\n";
   cin >> x;
   switch(x)
   {
      //first case for encrypting a string
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

         cout << "\nEncrypted string: " << str << endl;
         break;

      //second case for decrypting a string
      case 2:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

      cout << "\nDecrypted string: " << str << endl;
      break;

      default:
         cout << "\nInvalid Input !!!\n";
}
