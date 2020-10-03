#include <stdlib.h>
int main()
{
    while(1)
    {

	system("./remind-notify \"09:00\" \"termux-notification --sound -t EasyHR -c \"Put Check-in\"\"");

	system("./remind-notify \"18:30\" \"termux-notification --sound -t EasyHR -c \"Put Check-out\"\"");

	system("./remind-notify \"19:00\" \"termux-notification --sound -t \"Daily Report\" -c \"Update today's report\"\"");

    }
}
