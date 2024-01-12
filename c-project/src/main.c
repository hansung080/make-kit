#include <stdio.h>
#include "fruits/apple.h"
#include "fruits/banana.h"
#include "people/alice.h"
#include "people/bob.h"

#define S_RESET "\033[0m"
#define S_BLUE  "\033[0;34m"

int main(int argc, char* argv[]) {
    printf(S_BLUE"# Arguments of %s\n"S_RESET, argv[0]);
    for (int i=1; i < argc; ++i) {
        printf("argv[%d]=%s;\n", i, argv[i]);
    }
    
    printf(S_BLUE"# Output\n"S_RESET);
    printf("apple=%s\n", apple(false) ? "true" : "false");
    printf("banana=%d\n", banana(0));
    printf("alice=%s\n", alice(true) ? "true" : "false");
    printf("bob=%d\n", bob(1));
    return 0;
}