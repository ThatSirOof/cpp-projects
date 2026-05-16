#include <iostream>
#include <array>

int main(){

    std::array <int, 10> value {};
    std::cout << "Enter 10 random values: ";

    for(int i = 0; i < value.size(); i++){
        std::cin >> value[i];
    }

    for(int i = 0; i < value.size() - 1 ; i++){ 
        for (int j = 0; j < value.size()-1-i; j++){
            if (value[j] > value[j + 1]){
                int temp = value [j];
                value [j] = value [j+1];
                value [j+1] = temp;
            }
        }
    }

    std::cout << "The sorted values are: ";

    for(int i = 0; i < value.size(); i++){
        std::cout << value[i] << " ";
    }

    std::cout << std::endl;


    return 0;
}
