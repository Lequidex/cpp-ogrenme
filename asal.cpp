#include <iostream> 

int main()
{
    int x {};
    int sayac{0};

    std::cout << "Asallığını sorgulamak istediğiniz sayıyı girin : ";
    std::cin >> x;

    int kalan {};
    for(int i=2; i * i < x; i++){
        kalan = x % i ;
        
        if(kalan == 0){
            std::cout << x << " sayısının 1'den büyük olan en küçük böleni: " << i << "\n";
            sayac++;

            break;
        } else {}
    }
    if (sayac == 0){
        std::cout << x << " sayısı asal sayıdır.";
    } else {
        std::cout << x << " sayısı asal sayı değildir.";
    }

    return 0;
}
