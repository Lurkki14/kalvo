#include <stdio.h>

__attribute__((constructor))
void entry() {
	puts("hello");
}
