#include <iostream> 

int firstNumber{};
int secondNumber{};
int thirdNumber{};

void sayilariSirala(int x, int y, int z);


int main()
{
    int x {};
    std::cout << "1. sayıyı girin: \n";
    std::cin >> x; // x'i alma
    
    int y {};
    std::cout << "2. sayıyı girin: \n";
    std::cin >> y; // y'yi alma

    int z {};
    std::cout << "3. sayıyı girin: \n";
    std::cin >> z; // z alma;

    sayilariSirala(x, y, z);

    std::cout << firstNumber << '>' << secondNumber << '>' << thirdNumber;

    return 0;
}

void sayilariSirala(int x, int y, int z) {
    
    if(x > y && x > z){
        firstNumber = x ;
        if(y > z){
            secondNumber = y;
            thirdNumber = z;
        } else {
            secondNumber = z;
            thirdNumber = y;
        }
    
    } if (y > x &&  y > z){
        firstNumber = y;
        if(x > z){
            secondNumber = x;
            thirdNumber = z;
        } else {
            secondNumber = z;
            thirdNumber = x;
        }
    
    } else {
        firstNumber = z;
        if(y > x){
            secondNumber = y;
            thirdNumber = x;
        } else {
            secondNumber = x;
            thirdNumber = y;
        }
    }
}
