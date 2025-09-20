//Program: Prompt user
//Author:CT100/G/26262/25
//Purpose:Display users name, age phone number, height and weight 

#include <stdio.h>
 int main() {
  
  char name;
  int age;
  char phone[11];
  float height;
  float weight;
  
  //prompt user and read
  printf("Enter your Name: ");
  scanf("%s", &name);
  printf("Enter age: ");
  scanf("%d", &age);
  printf("Enter phone number: ");
  scanf("%d", &phone);
  printf("Enter height: ");
  scanf("%f", &height);
  printf("Enter weight: ");
  scanf("%f", &weight);
  
  //Display
  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Phone number: %d\n", phone);
  printf("Height: %f\n", height);
  printf("Weight: %f\n", weight);
  
  return 0;
  }