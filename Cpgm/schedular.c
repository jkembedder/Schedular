#include <stdlib.h>
int main()
{
	FILE *fp;
	if(argc != 2)
	{
		perror("Arguments ");
		printf("Usage : %s <scheduled_data_file>",argv[0]);
		return 0;
	}
	
	fp = fopen(argv[1],"r");
	if(fp == NULL)
	{
		perror("File ");
		return 0;
	}
	
    while(1)
    {

	system("./remind-notify \"09:00\" \"termux-notification --sound -t EasyHR -c 'Put Check-in'\"");

	system("./remind-notify \"18:30\" \"termux-notification --sound -t EasyHR -c 'Put Check-out'\"");

	system("./remind-notify \"19:00\" \"termux-notification --sound -t 'Daily Report' -c 'Update today's report'\"");

    }
}
