#include <iostream>
//#include <string>

using namespace std;
int main(){
    int number  ;
    //bool num =5;
    int count = 1;
    while ( count !=0){
        cout<< "Enter a number between 5 to 10 :"<<endl;
        cin>> number ;
        //bool limit =(number>=5 && number<=10) ;

        if (number >= 5 && number <= 10){
            cout<<"your number "<<number<<" has been accepted"<< endl;
            return 0;
            } else if (number != sizeof(int )){
            cout <<"invalid input"<< endl;
            } else {
            cout<<"invalid input try again"<< endl;
            count++;
        }
       
    }

}