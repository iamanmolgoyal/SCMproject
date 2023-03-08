#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct Member{
  char name[50];
  int age;
  char gender;
  char membership_type[20];
  float weight;
  float height;
  float bmi;
};
struct Gym{
  int num_members;
  struct Members members[Max_Members];
};
void print_member(struct Member member) {
    printf("Name: %s\n", member.name);
    printf("Age: %d\n", member.age);
    printf("Gender: %c\n", member.gender);
    printf("Membership Type: %s\n", member.membership_type);
    printf("Weight: %.2f kg\n", member.weight);
    printf("Height: %.2f cm\n", member.height);
    printf("BMI: %.2f\n", member.bmi);
    printf("\n");
}
