#include <stdio.h>
#include <stdlib.h>

//outsid comment

void usless(void)
{
}

int main(void)
{
	//inside comment
	usless();
	char *test = "#include <stdio.h>%c#include <stdlib.h>%c%c//outsid comment%c%cvoid usless(void)%c{%c}%c%cint main(void)%c{%c%c//inside comment%c%cusless();%c%cchar *test = %c%s%c;%c%cprintf(test, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 34, test ,34, 10, 9, 10);%c}";
	printf(test, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 34, test ,34, 10, 9, 10);
}