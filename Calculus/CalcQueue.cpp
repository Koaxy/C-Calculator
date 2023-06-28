#include "CalcQueue.h"

CalcQueue::~CalcQueue()
{
}

CalcQueue::CalcQueue(bool IsPri)
{
    //this->isPriority = IsPri;
    //this->isntPriority = IsPri;
    if (!this->isntPriority) // if not priority then 
    {
        this->isntPriority = false;
    }
    else if (this->isPriority)
    {
        this->isPriority = true;
    }
    std::printf("DBG: this->IsPriority is: %i\n", this->isPriority);
    std::printf("DBG: this->isntPriority is: %i\n", this->isntPriority);
}



int CalcQueue::pushIntToQueue(int value)
{
    if (this->isPriority) // This value is important, and needs to be set on init.
    {
        std::printf("Koaxy -> Is a Priority Pushing the queue...\n");
        this->IntQueuePriority.push(value);
        std::printf("Pushed %i\n", this->IntQueuePriority.top());
        this->IntQueuePriority.pop();
        std::printf("Popped the Priority Queue\n");
    }
    else 
    {
        std::printf("Koaxy -> Isn't Priority Pushing Normal Queue (Not Priority) \n");
        this->IntQueue.push(value);
        value = this->IntQueue.front();
        this->IntQueue.pop();
    }
    return value;
}

std::string CalcQueue::PushStringToQueue(std::string string)
{
    return std::string();
}

bool CalcQueue::pushBoolToQueue(bool value)
{
    return false;
}

void CalcQueue::ClearAllQueues()
{
}
