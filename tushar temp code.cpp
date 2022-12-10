#include <stdio.h>
struct student {
    char first_name[50];
    char last_name[40];
    int age;
    int standard;
} s;

int main() {
    printf("Enter information:\n");
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("Enter first_name: ");
    scanf("%s", &s.first_name);
    printf("Enter last_name: ");
    scanf("%s", &s.last_name);
    printf("Enter standard: ");
    scanf("%d", &s.standard);

    printf("Displaying Information:\n");
    printf("age: %d", s.age);
    printf("\n");
    printf("first_Name: ");
    printf("%s \n", s.first_name);
    printf("lastt_Name: ");
    printf("%s", s.last_name);
    printf("\n");
    printf("standard: %d \n",s.standard);

    return 0;
}
