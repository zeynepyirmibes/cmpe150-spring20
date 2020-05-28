#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

struct Person{
  int age;
  int salary;
};

struct Family{
  struct Person persons[9];
  int personCount;
};

int richest_in_poorest(struct Family f[],int size){
  int leastSalary = MAX;
  int i,j;
  int familyIndex = -1;
  for(i=0;i<size;i++){
    int familyTotal = 0;
    for(j=0;j<f[i].personCount;j++){
      familyTotal+=f[i].persons[j].salary;
    }
    if(familyTotal < leastSalary){ //find the poorest family
      leastSalary = familyTotal;
      familyIndex = i;
    }
  }

  int richest=-1,richestIndex=-1;
  for(i=0;i<f[familyIndex].personCount;i++){
    if(f[familyIndex].persons[i].salary > richest){
      richest = f[familyIndex].persons[i].salary;
      richestIndex = i;
    }
  }
  return f[familyIndex].persons[richestIndex].age;

}
/*
 SAMPLE INPUT
 3
 10 0 33 5000 34 5500
 5
 10 10 30 1100 45 500 67 1000 5 0
 2
 48 4800 50 5000
 */
int main(void) {
  struct Family families[3];
  int i,j;
  for(i=0;i<3;i++){
    scanf("%d",&families[i].personCount);
    for(j=0;j<families[i].personCount;j++){
      scanf("%d%d",&families[i].persons[j].age,&families[i].persons[j].salary);
    }
  }

  int res = richest_in_poorest(families,3);
  printf("Richest person in the poorest family is %d years old.\n",res);
  return 0;
}
