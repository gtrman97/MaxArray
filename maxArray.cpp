/*-------------------------------------------------------------------------
   Name: Andrew Killian

   Program to illustrate the use of a function template to display
   the highest value in an unsorted array using recursion.

   Output:  An array of ints, strings and doubles using maxArray()
 -------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

template <class ElementType>
ElementType maxArray(ElementType array[], int first, int last);


int main()
{
    int first = 0;
    int last = 9;
    int num[] = {54, 34, 12, 67, 89, 99, 45, 88, 91, 10};
    string s[] = {"aa", "ff", "cc", "ww", "tt", "oo", "pp", "zz", "ss", "gg"};
    double dubs[] = {3.45, 23.65, 34.67, 98.45, 43.65, 76.43, 56.23, 12.78, 76.32, 54.43};
    int max1 =  maxArray(num, first, last);
    string s1 = maxArray(s, first, last);
    double d1 = maxArray(dubs, first, last);
    cout << max1 << endl;
    cout << s1 << endl;
    cout << d1 << endl;

   return 0;
}

template <class ElementType>
ElementType maxArray(ElementType array[], int first, int last)
{
    int mid = (first + last) / 2;
    int length = sizeof(array)/ sizeof(array[0]);

   if (first == last){
       return array[first];
   }
   else{
       return max(maxArray(array, first, mid), maxArray(array, mid+1, last));
   }

}


