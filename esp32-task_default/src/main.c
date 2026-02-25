#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#define BUFF_SIZE 2048

void app_main()
{
    char bufferStats[BUFF_SIZE];

    vTaskList(bufferStats);

    printf("\nTask\t\tState\tPrio\tStack\tNum\n");
    printf("------------------------------------------------\n");
    printf("%s\n", bufferStats);
}