#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ofsream myfile;
  std::string myfile;

    myfile.open("example.txt");

    if(myfile. is_open()){

        myfile << "helloworld";

       //  myfile.close();

    }
     else
     {
        cout << "error";
     }


      return 0;
}