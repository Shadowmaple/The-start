#include <stdio.h>
int main()
{
    int n, k, Sn;

    do {
        scanf("%d", &k);

        if (k > 0 && k < 16) {
            for (n = 1, Sn = 0; Sn <= k; n++) {
                Sn += 1/n;
            }
        } else {
            puts("error!");
        }
    } while (k < 1 || k > 15);

    printf("%d", n - 1);
    return 0;
}
