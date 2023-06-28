
#include "Numbers.h"
#include "CalcQueue.h"

namespace globalMathClass
{
	Numbers* NC;
	Dosum* MathDo;
	
}
namespace maths
{
	int storednum1;
	int	storednum2;	
}



int main()
{
	bool isCompleted = false; 
	bool CompletedSum = false;
	int FinalResult;
	std::cout << "Loaded Yes" << std::endl;

	reentry:
	printf("Enter You're First number: ");
	std::cin >> maths::storednum1;
	printf("\n");
	printf("Enter You're Second number: ");
	std::cin >> maths::storednum2;
	printf("\n");
	//goto reentry;
	/* Trying maps*/
	
	std::map<std::string, int> m;
	
	
	globalMathClass::NC = new Numbers(maths::storednum1, maths::storednum2, m);
	globalMathClass::NC->mMap["num1"] = maths::storednum1;
	globalMathClass::NC->mMap["num2"] = maths::storednum2;
	/* End of trying maps, soon to be a fully stored number*/

	globalMathClass::MathDo = new Dosum(globalMathClass::NC->mMap["num1"], globalMathClass::NC->mMap["num2"], 2);

	int result = globalMathClass::MathDo->Result;
	std::printf("NMap Value 1 is %i\n", globalMathClass::NC->mMap["num1"]);
	std::printf("NMap Value 2 is: %i\n", globalMathClass::NC->mMap["num2"]);
	std::printf("Result is: %i\n", result);

	std::cout << "Sum = " << maths::storednum1 << " + " << maths::storednum2 << " = " << result << std::endl;

	FinalResult = result;

	if (isCompleted || FinalResult == result) /* if completed is true, then clear the memory of the application and return */
	{
		isCompleted = true;
	}
	if (isCompleted)
	{
		/* If is completed then delete the Class Pointer, and return. */
		//std::printf("Nulling PTR: %p\n", globalMathClass::NC);
		//delete globalMathClass::NC;
		//std::printf("Deleted NC Ptr: %p\n", globalMathClass::NC);
		//std::printf("Deleted PTR\n");
	}
	else
	{
		std::printf("False\n");
	}
	CalcQueue* CalcQueuAe = new CalcQueue(false);
	CalcQueuAe->pushIntToQueue(2);
	while (true)
	{
		std::string inp;
		std::getline(std::cin, inp);
		if (inp == "+")
		{
			std::printf("You used addition\n");
			goto reentry;
			globalMathClass::MathDo = new Dosum(globalMathClass::NC->mMap["num1"], globalMathClass::NC->mMap["num2"], 1);
			return 0;

		}
		if (inp == "*")
		{
			std::printf("You used multiplcation\n");
			goto reentry;
		
			globalMathClass::MathDo = new Dosum(globalMathClass::NC->mMap["num1"], globalMathClass::NC->mMap["num2"], 2);
			return 0;
		}
		if (inp == "exit")
		{
			exit(-1);
		}
	}

	return system("pause");
}


