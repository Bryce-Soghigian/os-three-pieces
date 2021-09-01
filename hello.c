#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include "common.h"

#define True 1
#define False 0
int
main(int argc, char *argv[1]){
    if(argc != 2){
        fprintf(stderr,"usage in this fashion not permited");
        exit(1);
    }
    char *str = argv[1];
    while(True){
        Spin(1);
        printf("%s\n", str);
    }
    return 0;
}