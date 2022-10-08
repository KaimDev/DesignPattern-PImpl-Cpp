#include <iostream>
#include "Workers.h"

int main()
{

    Workers::ClassWorkers WorkerObject((Workers::Gender)1, "Johan", "Developer");

    WorkerObject.Write();

    return 0;
}
