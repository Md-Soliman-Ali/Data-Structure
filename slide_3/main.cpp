#include <iostream>
using namespace std;

int main()
{
   int c, first, last, middle, n, search, array[100];
   cout<<"Enter Number Of Elements: "<<endl;
   cin>>n;

   cout<<"Please Input Integers: "<<n<<endl;

   for (c = 0; c < n; c++)
   cin>>array[c];

   cout<<"Enter Value To Find: "<<endl;
   cin>>search;

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last)
    {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search)
      {
         cout<<"Found At Location: "<<"\n"<<middle+1;
         break;
      }
      else
         last = middle - 1;
         middle = (first + last)/2;
      }

   if (first > last)
   cout<<"Not found! Isn't Present In The List"<<"\n"<<search;
   return 0;
}
