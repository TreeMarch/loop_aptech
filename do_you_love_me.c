#include <stdio.h>

int do_you_love_me(){
//    int main(){
        char answer;
        int count;
        count = 1;
    do {
        printf("i love you so much , can we become lover ? (y/n)\n");
        fflush(stdin);
        scanf("%c",&answer);
        count ++;

    } while (answer != 'y' && count <=3);
    printf("ok , let love \n");

    return 0;
}
//}