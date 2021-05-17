#include <stdio.h>
#define DEFAULT_LINE 10

void print_head(FILE *fp, int limit) {
}

FILE *open_file(char *fileName) {
    return NULL;
}

void perform_each(char *fileName) {
    FILE *fp = open_file(fileName);
    if(fp == NULL) {
        perror(fileName);
        return;
    }
    print_head(fp, DEFAULT_LINE);
    fclose(fp);
}

int perform(int argc, char *argv[]) {
    int i;
    for(i = 1; i < argc; i++) {
        perform_each(argv[i]);
    }
    if(argc == 1) {
        print_head(stdin, DEFAULT_LINE);
    }
    return 0;
}

int main(int argc, char *argv[]) {
    int status = perform(argc, argv);
    return status;
}
