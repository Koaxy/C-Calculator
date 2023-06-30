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
   // Pushing String to Queue (Hopefully completed in the next commit)
    if (this->isPriority)
    {
        this->StringQueuePriority.push(string);
        std::printf("Koaxy -> Is a Priority Pushing the queue...\n");
        string = this->StringQueuePriority.top();
        this->StringQueuePriority.pop();
        return string;
    }
    else
    {
        std::printf("Koaxy -> Isn't Priority Pushing Normal Queue (Not Priority) \n");
        this->StringQueue.push(string);
        string = this->StringQueue.front();
        this->StringQueue.pop();

    }

}

bool CalcQueue::pushBoolToQueue(bool value)
{
    if (this->isPriority)
    {
        std::printf("Koaxy -> Is a Priority Pushing the queue...\n");
        this->BoolQueuePriority.push(value);
        value = this->BoolQueuePriority.top();
        if (this->BoolQueuePriority.size() == 1)
        {
            this->BoolQueue.pop();
        }
        return value;
    }
    else
    {
        std::printf("Koaxy -> Isn't Priority Pushing Normal Queue (Not Priority) \n");
        this->BoolQueue.push(value);
        value = this->BoolQueue.front();
        if (this->BoolQueue.size() == 1)
        {
            this->BoolQueue.pop();
        }
        return value;
    }
}

void CalcQueue::ClearAllQueues()
{
    if (isPriority)
    {
        this->StringQueuePriority.pop();
        this->BoolQueuePriority.pop();
        this->IntQueuePriority.pop();
    }                                   // Pop priority queues
    else
    {
        this->StringQueue.pop();
        this->BoolQueue.pop();
        this->IntQueue.pop();
    }
}
