#include <iostream>
#include <string>

using namespace std;
int main(){
  // string mylist[];

   //mylist[index] = string element;

 string mylist[8] = { "B123","C234", "A345","C15","B177", "G3003", "C235", "B179"};    

//char search[mylist][mylist];
for ( int i = 0; i < 8; i++)
{
    if (mylist[i][0] == 'B')
    {
        cout << mylist[i] << endl;
    }
  
}
  return 0;
}