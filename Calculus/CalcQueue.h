#pragma once
#include <Windows.h>
#include <string>
#include <queue>


#include <map>
class CalcQueue
{
public:
	~CalcQueue();
	CalcQueue(bool IsPri);
	int pushIntToQueue(int value);
	std::string PushStringToQueue(std::string string);
	bool pushBoolToQueue(bool value);
	void ClearAllQueues();
private:
	bool isPriority = true;
	bool isntPriority = false;
	/* Define the Queues  (And add a beta thing i wanna try) */
	std::queue <bool> BoolQueue;
	std::priority_queue <bool> BoolQueuePriority;
	// Bool Queues (Priority and Non)
	// String Queues
	std::queue <std::string> StringQueue;
	std::priority_queue <std::string> StringQueuePriority;
	//int queues
	
	std::priority_queue <int> IntQueuePriority;
	std::queue <int> IntQueue;
	/* MY ULTIMATE TEST */


};

