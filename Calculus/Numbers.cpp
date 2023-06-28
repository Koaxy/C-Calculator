#include "Numbers.h"

Numbers::Numbers(DWORD storedNumA, DWORD storedNumB, std::map<std::string, int> m)
{
	storedNum1 = storedNumA;
	storedNum2 = storedNumB;
	mMap = { {"num1", storedNumA}, {"num2", storedNumB}};
}

int __cdecl Dosum::AdditionFull(int num1, int num2, DWORD Switch)
{
	int Additioned = NULL;

	switch (Switch)
	{
	case AdditionEQS::ADDITION:
	{
		std::printf("ADDITION ok \n");
		Additioned = num1 + num2;
		break;
	}
	case AdditionEQS::MULTIPLCATION:
	{
		std::printf("MULTIPLCATION ok \n");
		Additioned = num1 * num2;
		break;
	}
	case AdditionEQS::DIVIDING:
	{
		std::printf("DIVINDING ok \n");
		Additioned = num1 / num2;
		break;
	}

	}

	Result = Additioned;

	return Additioned;
}

Dosum::Dosum(int Value1, int Value2, DWORD Addition)
{
	AdditionFull(Value1, Value2, Addition);
}
