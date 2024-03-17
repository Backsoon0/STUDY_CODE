#include <stdio.h>
#include <time.h>

time_t time_count;
struct tm *time_set;
char *the_time;


int main()
{
    time_count = time(NULL);
    printf("%d\n", time_count);


    
    time_set = localtime(&time_count);
    printf("%d\n", time_set->tm_year + 1900);
    printf("%d\n", time_set->tm_mon + 1);
    printf("%d\n", time_set->tm_mday);
    printf("%d\n", time_set->tm_hour);
    printf("%d\n", time_set->tm_min);
    printf("%d\n", time_set->tm_sec);

    time_count = mktime(time_set);

    printf("%d\n", time_count);

    return 0;
}