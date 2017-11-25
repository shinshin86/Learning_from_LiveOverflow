#include <stdio.h>

// LiveOverflow - Writing a simple Program in C - bin 0x02 (8:50)
int main(int argc, char *argv[]) {
        if(argc==2) {
                printf("Knock, Knock, %s\n", argv[1]);
        } else {
                fprintf(stderr, "Usage: %s <name>\n", argv[0]);
                return 1;
        }
        return 0;
}
