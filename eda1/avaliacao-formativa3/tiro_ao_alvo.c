#include <stdio.h>
#include <stdlib.h>

int main() {
    int C, T;
    scanf("%d %d", &C, &T);
    
    long long *r_sq = (long long *)malloc(C * sizeof(long long));
    for (int i = 0; i < C; i++) {
        int R;
        scanf("%d", &R);
        r_sq[i] = (long long)R * R;
    }
    
    long long total_score = 0;
    for (int i = 0; i < T; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        long long d_sq = (long long)x*x + (long long)y*y;
        
        int low = 0;
        int high = C - 1;
        int ans = C;
        
        while (low <= high) {
            int mid = (low + high) / 2;
            if (r_sq[mid] >= d_sq) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        total_score += (C - ans);
    }
    
    printf("%lld\n", total_score);
    free(r_sq);
    return 0;
}
