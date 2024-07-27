#include <stdio.h>

void calculate_cpu_performance(double response_time, double throughput, double execution_time) {
    printf("CPU Performance Metrics:\n");
    printf("Response Time: %.2f ms\n", response_time);
    printf("Throughput: %.2f processes/second\n", throughput);
    printf("Execution Time: %.2f ms\n", execution_time);
}

int main() {
    double response_time, throughput, execution_time;

    // Example values for demonstration
    response_time = 10.5;  // in milliseconds
    throughput = 20.0;     // in processes/second
    execution_time = 50.0; // in milliseconds

    calculate_cpu_performance(response_time, throughput, execution_time);
    return 0;
}

