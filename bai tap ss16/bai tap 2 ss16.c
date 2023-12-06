#include <stdio.h>
int main(){
    FILE *file = NULL;
    char outputString[1000];
    file = fopen("D:Documents\\bai tap ss16\\bt01.txt", "r");
    fread(outputString, sizeof(char),sizeof(outputString),file);
    printf("du lieu trong tep tin la: %s",outputString);
    fclose(file);
    return 0;
}