#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a;
    float b;
    char str[880];

    // Read and save an integer, double, and String to your variables.
    scanf("%d",&a);
    scanf("%f",&b);
    scanf(" %[^\t\n]s", str);
    // Print the sum of both integer variables on a new line.
    printf("%d \n",i+a);
    // Print the sum of the double variables on a new line.
    printf("%2.1f \n",d+b);
    // Concatenate and print the String variables on a new line
    printf("%s%s ", s, str);

    // The 's' variable above should be printed first.
    
    return 0;
