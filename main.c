#include <stdio.h>
#include <math.h>
int main() {
    long long initial_population = 0;
    long long final_population = 0;
    int generations = 0;

    
    printf("Input Initial Population: ");
    scanf("%lld", &initial_population);

    
    printf("Input Generations: ");
    scanf("%d", &generations);

    // Calculation of exponential growth (N = N0 * 2^g)
    final_population = initial_population * pow(2, generations);

    
    printf("The final population is: %lld\n", final_population);

    return 0;
}

