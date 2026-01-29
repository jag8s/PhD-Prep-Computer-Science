#include <iostream>

int main (){
    int specialNumber;
    for (int i = 100000 ; i <= 100999; i++){
        if (i % 9127 == 0){
            std::cout << i << std::endl;
        }
    }
    std::cout << "No solution" << std::endl;
    return 0;
}