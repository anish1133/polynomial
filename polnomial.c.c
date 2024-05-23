#include <stdio.h>

struct term {
    float c;
    int p;
};

struct poly {
    int s;
    int f;
};

int main(void) {
    struct term one, terms[100];
    struct poly p, q;
    int i;
    char s1, s2;

    // Initialize the housekeeper term
    terms[0].p = 1;

    // Read first polynomial
    p.s = terms[0].p;
    i = p.s - 1;
    printf("Enter terms for the first polynomial (coefficient and power), end with non-numeric input:\n");
    while (scanf("%f %d", &one.c, &one.p) == 2) {
        i = i + 1;
        terms[i].c = one.c;
        terms[i].p = one.p;
    }
    p.f = i;
    terms[0].p = p.f + 1;

    // Clear the input buffer
    while (getchar() != '\n');

    // Read two characters
    printf("Enter two characters:\n");
    scanf("%c %c", &s1, &s2);
    getchar();  // Consume the newline character left in the buffer

    // Read second polynomial
    q.s = terms[0].p;
    i = q.s - 1;
    printf("Enter terms for the second polynomial (coefficient and power), end with non-numeric input:\n");
    while (scanf("%f %d", &one.c, &one.p) == 2) {
        i = i + 1;
        terms[i].c = one.c;
        terms[i].p = one.p;
    }
    q.f = i;
    terms[0].p = q.f + 1;

    // Output the terms of both polynomials
    printf("\nFirst polynomial terms:\n");
    for (i = p.s; i <= p.f; i++) {
        printf("%f %d\n", terms[i].c, terms[i].p);
    }

    printf("\nSecond polynomial terms:\n");
    for (i = q.s; i <= q.f; i++) {
        printf("%f %d\n", terms[i].c, terms[i].p);
    }

    return 0;
}
