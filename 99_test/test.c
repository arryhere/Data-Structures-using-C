# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main() {
    static int a = 5;
    a = 55;
    printf("%d",a);

    return 0;
}