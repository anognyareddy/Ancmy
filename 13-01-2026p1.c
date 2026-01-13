#include <stdio.h>
int main() {
    int n, i, arr[100], sum = 0;
    float avg;
    scanf("%d", &n);
    printf("%d\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }
    avg = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
