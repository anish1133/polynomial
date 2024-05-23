#include <stdio.h>

struct term {
    float c;
    int p;
};

struct term terms[100]; 

struct poly {
    int s; 
    int f; 
} p, q, r;

int main(void) {
    struct term one;
    int i, j, k;

    terms[0].p = 1; 

    // Reading first polynomial
    printf("Enter the First Poly:\n");
    p.s = terms[0].p; 
    i = p.s - 1;
    while (scanf("%f %d", &one.c, &one.p) == 2) {
        i++;
        terms[i] = one;
    }
    p.f = i; 
    terms[0].p = p.f + 1;

    // Skipping the separator line
    char s1[10], s2[10];
    scanf("%s %s", s1, s2);

    // Reading second polynomial
    printf("Enter the secon poly:\n");
    q.s = terms[0].p; 
    i = q.s - 1;
    while (scanf("%f %d", &one.c, &one.p) == 2) {
        i++;
        terms[i] = one;
    }
    q.f = i; 
    terms[0].p = q.f + 1;

    // Adding the polynomials 
    printf("Addtion of Polynomial: \n");
   
    r.s = terms[0].p; 
    k = p.s;  
    j = q.s; 
    i = r.s - 1;
    while (k <= p.f && j <= q.f) {
        if (terms[k].p > terms[j].p) {
            i++;
            terms[i] = terms[k];
            k++;
        } else if (terms[k].p < terms[j].p) {
            i++;
            terms[i] = terms[j];
            j++;
        } else {
            i++;
            terms[i].c = terms[k].c + terms[j].c;
            terms[i].p = terms[k].p;
            k++;
            j++;
        }
    }

    // Copy remaining terms from p or q
    while (k <= p.f) {
        i++;
        terms[i] = terms[k];
        k++;
    }

    while (j <= q.f) {
        i++;
        terms[i] = terms[j];
        j++;
    }

    r.f = i;

    // Printing the first polynomial
    for (int i = p.s; i <= p.f; i++) {
        printf("%f %d\n", terms[i].c, terms[i].p);
    }
    printf("=======\n");

    // Printing the second polynomial
    for (int i = q.s; i <= q.f; i++) {
        printf("%f %d\n", terms[i].c, terms[i].p);
    }
    printf("+++++++++++++\n");

    // Printing the resulting polynomial
    for (int i = r.s; i <= r.f; i++) {
        printf("%f %d\n", terms[i].c, terms[i].p);
    }

    return 0;
}
