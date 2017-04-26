#include <iostream>
#include <ctime>
using namespace std;

int getRandomNumber()
{
	int randInteger = 0;
	randInteger = 1 + rand() % (10 - 1 + 1);
	return randInteger;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int correctAnswer = 0;
	int userAnswer = 0;
	
	srand(static_cast<int>(time(0)));

	for (int x = 1; x < 6; x += 1)
	{
		num1 = getRandomNumber();
		num2 = getRandomNumber();
		correctAnswer = num1 + num2;
		std::cout << "What is the sum of " << num1 << " + " << num2 << "? ";
		std::cin >> userAnswer;
		
		if (userAnswer == correctAnswer)
			std::cout << "Correct!\n\n";
		else
			std::cout << "Sorry, the correct answer is " << correctAnswer << ".\n\n";
	}

	return 0;


}