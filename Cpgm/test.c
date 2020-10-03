#include <stdlib.h>
int main()
{
	system("termux-notification --sound -t argv[1] -c argv[2]");
}
