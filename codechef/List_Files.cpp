#include "stdlib.h"
#include "string.h"
int main()
{
	char cmd[50];
	strcpy(cmd,"dir");
	system(cmd);
	system("pause");
	return 0;
}
