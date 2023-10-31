/*
following keywords used to define variables
int, float, char, double, long, short, unsigned, signed

syntax: type var_name = value;
*/

#include <stdio.h> 
int main(){
    int a = 10;
    float b = 10.5;
    char c = 'A';
    double d = 10.5;
    long e = 10;
    short f = 10;
    unsigned g = 10;
    signed h = 10;
    printf("int: %d\n", a); // %d is format specifier for int
    printf("float: %f\n", b); // %f is format specifier for float
    printf("char: %c\n", c); // %c is format specifier for char
    printf("double: %lf\n", d); // %lf is format specifier for double
    printf("long: %ld\n", e); // %ld is format specifier for long
    printf("short: %hd\n", f); // %hd is format specifier for short
    printf("unsigned: %u\n", g); // %u is format specifier for unsigned
    printf("signed: %d\n", h); // %d is format specifier for signed
    return 0;
}
