/*include the customVector library*/
#include "..\include-customVector\customVector.h"

#include <iostream>

int main() {

    /*
    Result of dividing two vectors
    */
    Vector2f vec1f(1.5f, 2.3f);
    Vector2f vec2f(3.2f, 4.5f);

    Vector2f resultf = vec1f / vec2f;

    std::cout << "Result of vec1f / vec2f (float vectors): " << std::endl;

    resultf.print();

    std::cout << "Clarification: " << std::endl;
    std::cout << "X: 1.5 / 3.2 = 0.46875 Y: 2.3 / 4.5 = 0.511111" << std::endl;




    std::cout << "--------------------------------" << std::endl;
    /*
    Example of taking the modulus of two vectors 
    (only possible for integer vectors, due to the nature of the modulus operator)
    */

    Vector2i vec1i(1, 4);
    Vector2i vec2i(3, 2);

    Vector2i resulti = vec1i % vec2i;

    std::cout << "Result of vec1i % vec2i (integer vectors): " << std::endl;

    resulti.print();

    std::cout << "Clarification: " << std::endl;
    std::cout << "X: 1 % 3 = 1 Y: 4 % 2 = 0" << std::endl;
}