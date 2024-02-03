#include <stdio.h>
#include <time.h>

main()
{
    // Get the current time
    time_t current_time = time(NULL);
    printf("%d",current_time);
    // Convert the time to a string using the desired format
    char date_string[50];
    strftime(date_string, 50, "%Y-%m-%d ", localtime(&current_time));

    // Print the date string
    printf("The current date is: %s\n", date_string);
}
