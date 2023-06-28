#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <unordered_map>
#include <map>

enum AdditionEQS
{
	ADDITION = 1,
	MULTIPLCATION = 2,
	DIVIDING = 3,
	XOR = 4
};


class Dosum
{
public:
	int __cdecl AdditionFull(int num1, int num2, DWORD Switch);
	int Result;
	Dosum(int Value1, int Value2, DWORD Addition);
};

class Numbers 
{
	
private:

public:
	DWORD storedNum1 = 0;
	DWORD storedNum2 = 0;
	std::map<std::string, int> mMap;
	Numbers(DWORD storedNumA, DWORD storedNumB, std::map<std::string, int> m); 
	// StoredNumber1 + StoredNum2, pass a map as an argument, the map stores, StoredNumber1 + StoredNumber2, then adds them, or whatever multiplication you decide on using
};

