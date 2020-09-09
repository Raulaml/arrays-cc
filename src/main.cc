#include<iostream>

void print(int number);//blueprint o prototipo

int main()
{

    int matrix2[3][3]
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix3[3][3][3]
    {
        { 
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };    

        for(int i{}; i < 3; i++)
    {
        for(int j{}; j < 3; j++)
        {
            for(int k{}; k < 3; k++)
            {
                std::cout << matrix3[i][j][k] << "\t";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    };


    /*for(int i{}; i < 3; i++)
    {
        for(int j{}; j < 3; j++)
        {
            std::cout << matrix2[i][j] << "\t";
        }
        std::cout << std::endl;
    }/*


    /*int* ptrArr{new int[4]{1, 2, 3, 4}};

    std::cout << "ptrArr memmory: " << ptrArr << std::endl;
    std::cout << "ptrArr memmory of the arr: " << ptrArr << std::endl;
    std::cout << "ptrArr value memmory: " << *ptrArr << std::endl;
    std::cout << "first element ptrArr memory: " << &ptrArr << std::endl;
    std::cout << "first element ptrArr: " << ptrArr << std::endl;*/


    /*int numbers[6]{100, 87982, 3456, 465, 885, 86};

    std::cout << "Array memmory: " << numbers << std::endl;
    std::cout << "Array memmory: " << *numbers << std::endl;
    std::cout << "first element memory: " << &numbers << std::endl;
    std::cout << "first element: " << numbers << std::endl;*/

    //const char* myString{"hello arrays"};

    /*for(int i = 0; i < 6; i++)
    {
        std::cout << &numbers[i] << "\t";
    }*/

     /* for(int i = 0; i < 6; i++)
    {
        std::cout << numbers + i << "\t";
    }*/

   /* for(int n : numbers)
    {
        std::cout << &n  << "\t";
    }*/

    /*for(auto n : numbers)
    {
        std::cout << n  << "\t";
    }*/

    /*int i{};

    while(i < 6)
    {
        std::cout << numbers[i] << "\t";
        i++;
    }*/

    /*int n1{5};//stack

    //pasar por valor o referencia

    int n2{n1};

    int& n3{n1};// valor por referencia, no una variable normal, si no, una direccion en memoria de algo


    std::cout << "n1 value: " << n1 << std::endl;
    std::cout << "n2 value: " << n2 << std::endl;
    std::cout << std:: endl;
    n2++;

    std::cout << "n1 value: " << n1 << std::endl;
    std::cout << "n2 value: " << n2 << std::endl;
    std::cout << std:: endl;

    std::cout << "memmory n1 " << &n1 << std::endl;
    std::cout << "memmory n2 " << &n2 << std::endl;


    std::cout << std:: endl;

    std::cout << "memmory n1 " << &n1 << std::endl;
    std::cout << "memmory n3 " << &n3 << std::endl;
    std::cout << std:: endl;
    
    n3++;
    n1++;

    std::cout << "n1 value: " << n1 << std::endl;
    std::cout << "n3 value: " << n3 << std::endl;
    std::cout << std:: endl;*/


    //print(n1);

    std::cin.get();

    return 0;

}

void print(int number)
{
    std::cout << "number value " << number << std::endl;
    std::cout << "number memmory " << &number << std::endl;
}