#include <iostream>
#include <unistd.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float currentPrice;
	float desiredPrice;
	float days;
	std::cout << "Enter current stock/coin price: $";
	std::cin >> currentPrice;
	std::cout << "How much would you like it to be? $";
	std::cin >> desiredPrice;
	std::cout << "In how many days? ";
	std::cin >> days;
	std::cout << "Working...";
	sleep(3);
	std::cout << "Done!\n";
	float timeToIncrease = (desiredPrice - currentPrice) / currentPrice / days * 100;
	std::cout << "This investment will have to increase " << timeToIncrease << "% every day";
	return 0;
}
