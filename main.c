#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int xForce = 0;
    int yForce = 0;
    int zForce = 0;
    while (n--) {
        int x, y, z;
        scanf("%d %d %d", x, y, z);
        xForce += x;
        yForce += y;
        zForce += z;
    }
    if (!xForce && !yForce && !zForce) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}