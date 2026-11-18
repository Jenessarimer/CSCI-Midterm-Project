
#include "field.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
int randomGeneration();
void errorMessageYN(char& input, std::string phrase);
void clearStream();
void numValidateInput(int& num, std::string repeat);
int main(){
        char answer;
        int numSquares;
        int numField;
        int numYard;
        std::cout << "Hi, im farmer Brad\n" <<std::endl;
        std::cout <<"Would you like to see your land?(Y/N)" << std::endl;
        std::cin >> answer;
        answer = std::toupper(static_cast<unsigned char>(answer));
        while (answer != 'Y' && answer != 'N'){
           errorMessageYN(answer, "Would you like to see your land?");
        }
        if(answer == 'Y') {
            numSquares = randomGeneration();
            Land newPlot(numSquares);
        }
        else {
            std::cout << "Ending game" <<std::endl;
            return -1;
        }
        std::cout << "You have " << numSquares << " squares of land" <<std::endl;
        std::cout << "Now we must decide how to split the land.\nFields can hold decorative plants, yards can hold food." <<std::endl;
        numValidateInput(numField, "How many squares would you like in your field");
        Field ourField(numField);
        std::cout << ourField.getTotalSquares();
        std::cout << "How many squares would you like to be in your yard?";





    return 0;
}
int randomGeneration(){
    return (std::rand() % 100) + 100;
};

void errorMessageYN(char& input, std::string phrase){
        std::cout << "Invalid input\nPlease Enter y or n" << std::endl;
        std::cout << phrase <<std::endl;
        std::cin >>input;
        input = std::toupper(static_cast<unsigned char>(input));
}
void clearStream(){
    std::cin.clear();
    std::cin.ignore(10000, '\n');
}

void numValidateInput(int& num, std::string repeat){
    std::cout << repeat << std::endl;
    std::cin >> num;
    while(!std::cin || num < 1){
        if(!std::cin){
            clearStream();
        }
    std::cout << "Invalid input." <<std::endl;
    std::cout << repeat <<std::endl;
    std::cin >> num;
    }
}
void mainSetup(){

}