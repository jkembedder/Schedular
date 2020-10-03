#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 3)
	{
		perror("Arguments ");
		printf("Usage : %s <Time> <Notify_cmd>",argv[0]);
		return 0;
	}

    time_t current_time;
    char* c_time_string;
    
	/* Getting current time. */
    current_time = time(NULL);

    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

    while(strncmp(c_time_string+11,argv[1],5))
    {
    	current_time = time(NULL);
    	c_time_string = ctime(&current_time);
    }

    system(argv[2]);

    return 0;
}
