#include <stdio.h>
//兩數總和
int main(){
    int num1, num2;
    while (scanf("%d %d", &num1, &num2) != EOF) {
        int ans = num1 + num2;
        printf("%d\n", ans);
    }
    return 0;
}
