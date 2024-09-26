#include <stdio.h>



// Function to find the GCD of two numbers


int findGCD(int m, int n)
 {
    if (n == 0)

        return m;

    else

        return
 findGCD(n, m % n);

}



// Function to find the LCM using the formula: LCM = (m * n) / GCD


int findLCM(int m, int n)
 {
    int gcd = findGCD(m, n);

    return (m * n) / gcd;

}




int main()
 {
    int m, n, gcd, lcm;



    // Input two integers


    printf("Enter two integers: ");

    scanf("%d %d", &m, &n);



    // Calculate GCD


    gcd = findGCD(m, n);


    printf("GCD of %d and %d is: %d\n", m, n, gcd);



    // Calculate LCM
    lcm = findLCM(m, n);


    printf("LCM of %d and %d is: %d\n", m, n, lcm);



    return 0;

}