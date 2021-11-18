#include<stdio.h>
 int studentcount(void);
  void input(int);
   void print(int);
   struct student
  {
   char name[20];
   char branch[5];
   float cgpa;
  };
  void main()
  {
  int n;
 n=studentcount();
  struct student s[n];
  input(n);
  print(n);
  }
  int studentcount(void)
  {
  int n;
 printf("enter the count of students\n");
  scanf("%d",&n);
  return n;
  }
  void input(int n)
  {
 int i;
  struct student s[n];
  for(i=0;i<n;i++)
  scanf("%s %s %f",s[i].name,s[i].branch,&s[i].cgpa);
 }
  void print(int n)
 {
  int i;
  struct student s[n];
  for(i=0;i<n;i++)
  printf("%s %s %f\n",s[i].name,s[i].branch,s[i].cgpa);
 }
