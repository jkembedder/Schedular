#include<stdio.h>
#include<string.h>
#include<time.h>

int main(int argc,char *argv[])
{
	FILE *fp;
	char f_date[25],*c_time;
	time_t t;
	
	t = time(NULL);
	c_time = ctime(&t);
	
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
	
	while(fgets(f_date,15,fp))
	{
		if(!strncmp(f_date+7,c_time+20,4))
		{
			//printf("%s%s",f_date,c_time);
			if(!strncmp(f_date+3,c_time+4,3))
			{
				if(!strncmp(f_date,c_time+8,2))
				{
					while(1)
						if(strncmp(fgets(f_date,25,fp),"---",3))
							printf("%s",f_date);
						else
							break;
				}
			}
		}
	}
	
	return 0;
}