/*include the customVector library*/
#include "../include-customVector/customVector.h" 

#include <iostream> 

int main() {
    /*integer vector*/
    Vector2i vec1i(1, 2);
    Vector2i vec2i(3, 4);
    Vector2i resulti = vec1i + vec2i;

    std::cout << "Result of vec1i + vec2i (integer vectors): " << std::endl;

    /*the library commes with a print function for easily outputing the contents of a vector to console*/
    resulti.print();

    /*float vector*/
    Vector2f vec1f(1.5f, 2.3f);
    Vector2f vec2f(3.2f, 4.5f);
    Vector2f resultf = vec1f + vec2f;

    std::cout << "Result of vec1f + vec2f (float vectors): " << std::endl;

    resultf.print();

    /*double vector*/
    Vector2d vec1d(1.5e40, 2.5e41);
    Vector2d vec2d(3.5, 4.5);
    Vector2d resultd = vec1d + vec2d;

    std::cout << "Result of vec1d + vec2d (double vectors): " << std::endl;

    resultd.print();

    /*3d vector*/
    Vector3i vec1i3(1, 2, 3);
    Vector3i vec2i3(4, 5, 6);
    Vector3i resulti3 = vec1i3 + vec2i3;

    std::cout << "Result of vec1i3 + vec2i3 (3d integer vectors): " << std::endl;

    resulti3.print();
    
    return 0;
}