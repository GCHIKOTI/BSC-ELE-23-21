#ifndef B083BDBD_D62A_4F8F_861D_8DA40F755F0C
#define B083BDBD_D62A_4F8F_861D_8DA40F755F0C
// Square.h

namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square(); // Default constructor
        Square(double side); // Overloaded constructor
        double getSideLength() const;
        double calculateArea() const;
    };
}


#endif /* B083BDBD_D62A_4F8F_861D_8DA40F755F0C */
