#include <stdio.h>
#include <thread>
#include <chrono>

extern "C" void app_main(void)
{
  while (1)
  {
    printf("This is a test of virtual efuses and psram\n");
    std::this_thread::sleep_for(std::chrono::seconds{5});
  }
}