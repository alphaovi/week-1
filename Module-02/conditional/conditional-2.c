#include <stdio.h>
int main (){
    int tk;
    scanf("%d", &tk);
    if(tk >= 100){
        printf("Burger Khabo");
    }
    else if(tk >=50){
        printf("Fuska Khabo");
    }
    else{
        printf("Kichu khabo na");
    }
    return 0;
}