#include "cWrapper.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
	struct MyClass* myObject = newMyClass();
	MyClass_int_set(myObject, 65);
	printf("myObject value is %i\n", MyClass_int_get(myObject));
	deleteMyClass(myObject);
	getchar();
}