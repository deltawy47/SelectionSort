#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void SelectionSort (vector<int> & arr )//vector<int> sizeOfVector)
{
    for (unsigned int i = 0; i < arr.size() - 1; i++)
    {
        int vectMin = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if(arr[j] < arr[vectMin])
            {
                vectMin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[vectMin];
        arr[vectMin] = temp;
    }
}



int main()
{
vector<int> vect;
vect.push_back(10);
    vect.push_back(20);
    vect.push_back(56);
     vect.push_back(57);
      vect.push_back(2);
       vect.push_back(1);
SelectionSort(vect);
for (int i = 0; i < vect.size(); i++)
      cout << vect[i] << " ";
    return 0;
}
