// Ques: Append status log messages to a 'system.log' file with log levels (INFO, WARN, ERROR).
#include<stdio.h>

void writeLog(const char *level, const char *message)
{
    FILE *ptr = fopen("system.log", "a");
    if(ptr == NULL) return;

    fprintf(ptr, "[%s] %s\n", level, message);
    fclose(ptr);
}

int main()
{
    writeLog("INFO", "Application started successfully.");
    writeLog("WARN", "Memory usage is above 75%.");
    writeLog("ERROR", "Failed to connect to database server.");

    printf("Logs successfully recorded in 'system.log'\n");
    return 0;
}