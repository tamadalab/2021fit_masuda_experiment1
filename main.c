#include <stdio.h>
#include <stdlib.h>
#define DEFAULT_LINE 10

void print_head(FILE *fp, int limit) {
    // この関数を実装する．
}
void perform_each(char *file_name, int limit) {
    FILE *fp = // 読み込み専用でファイルを開く．
    if(fp == NULL) {
        perror(file_name);
        return;
    }
    print_head(fp, limit);
    fclose(fp);
}
void print_help() {
    printf("head <NUMBER> [FILEs...]\n\
NUMBER    表示する先頭行．\n\
FILE      表示するファイル．指定されない場合は標準入力．");
}
int perform(int argc, char *argv[]) {
    if(argc == 3) {
        int limit = atoi(argv[1]);
        perform_each(argv[2], limit);
    } else {
        print_help();
    }
    return 0;
}
int main(int argc, char *argv[]) {
    int status = perform(argc, argv);
    return status;
}
