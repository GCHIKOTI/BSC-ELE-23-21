#include <iostream>
using namespace std;

int Square(int length){

    int area = length*length;
    return area;
}

double Rectangle(int length, int width){
    int area = length * width;

    cout <<"area of rectangle :"<< area << endl;
    return 0;
}
void triangle(int base, int height){
    double area = 0.5 * base * height;

    cout <<"area of triangle :" << area << endl;
}

int main(){


    while (true)
    {
        cout << "please select the area of the shape to calculate\n" << "1.square\n 2.rectangle\n 3.triangle\n 4.quit program\n \n enter selection:";
        int choice;
        cin >> choice ;

        if (choice == 1){
            cout << "enter length :";
            int length;
            cin >> length;


            cout << "area of square :"<< Square(length) << endl;

            //return 0;

        } else if (choice ==2){
             int length1;
             int width;
             cout << "enter length: \n";
             cin >> length1;

             cout << "enter width:";
             cin >> width;

            Rectangle(length1,width);


        }
        else if(choice == 3)
        {
            int base, height;
            cout << "enter base: \n";
            cin >> base;
            cout << "enter height:";
            cin >> height;

            triangle(base,height);
        } else
        { cout<< "your input was:" << choice <<  "which is an invalide input\n" 
        "please enter a valideinput"<<endl;
            
        }



        return 0;
        // count++;
    }




}