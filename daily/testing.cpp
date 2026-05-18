#include<iostream>
#include<string>

int main(){

    std::string sentence{};

    std::cout <<"Enter a word: ";
    std::getline(std::cin, sentence);

    std::cout <<"The reversed is: ";
    for (int i = sentence.size() - 1; i >= 0; i--){
        std::cout << sentence[i];
    }

    std::cout << std::endl;

    return 0;
}

