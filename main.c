#include <stdio.h>
//兩數總和https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6861
int main(){
    int num1, num2;
    while (scanf("%d %d", &num1, &num2) != EOF) {
        int ans = num1 + num2;
        printf("%d\n", ans);
    }
    return 0;
}
