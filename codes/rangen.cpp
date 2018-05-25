#include <cstdlib>
#include <iostream>
#include <ctime>

int main(void){
	int guessNumber;
	std::cout << "select number among 0 to 10:";
	std::cin >> guessNumber;
	
	if(guessNumber <0 || guessNumber > 10){
		return 1;
	}
	
	std::srand(std::time(0));
	int randomNumber = (std::rand() % (10+1));
	if(randomNumber == guessNumber){
		std::cout << "OK:" << guessNumber << "is your number\n";
	}else{
	    std::cout << "Error :\n"<< randomNumber;
	}
	
	return 0;
}