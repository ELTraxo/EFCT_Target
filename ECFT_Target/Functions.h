#pragma once
#define pl(s) printf("%s\n", s)
#define plp(s, p) printf("%s : 0x%p\n", s, p);

void Function1()
{
	pl("Function 1.\n");
}

void Function2(int i)
{
	printf("Function 2\nArg: %i\n\n", i);
}

void Function3(const char* szStr)
{
	printf("Function 3\nArg: %s\n\n", szStr);
}

int Function4(int a, int b)
{
	int c = a + b;
	pl("Function 4.");
	printf("%i + %i = %i\n\n", a, b, c);
	return c;
}

void PrintFuncAddresses()
{
	plp("Function1", Function1);
	plp("Function2", Function2);
	plp("Function3", Function3);
	plp("Function4", Function4);
	pl("");
}