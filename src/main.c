


#include <stdio.h>
#include <espl_lib.h>
int main() {
int num;
char chr;
  
do {
   printf("Give me a number\n");
   scanf("%d",&num);
  printf ("%s\n" ,num_to_words( num));
printf("Do you want to exit the programm Y/N \n");
scanf("%s", &chr);
}
 while (chr == 'y' || chr == 'Y');

}
