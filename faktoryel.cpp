#include <iostream> 

int main()
{
    int x {};
    std::cout << "Faktöryelini hesaplamak istediğiniz sayıyı girin : ";
    std::cin >> x;

    double sonuc{1};

    for(int i{1}; i<=x; i++){
        sonuc= sonuc * i;
    }

    std::cout << sonuc;

    return 0;
}
