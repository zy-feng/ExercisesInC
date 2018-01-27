/*
* Program to calculate the number of cards in the shoe.
* This code is released under the Vegas Public License.
* (c)2018, originated by Head First C for educational
* purpose, modified by Zhengyang Fengs
*/

#include <stdio.h>
#include <stdlib.h>

/* Translate the card name into num

   card_name: string where name of the card is stored

   return value is the corresponding value of the card
*/
int translate(char card_name[])
{
  int val;
  switch(card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      return 10;
    case 'A':
      return 11;
    case 'X':
      return -1;
    default:
      val = atoi(card_name);
      if ((val < 1) || (val > 10)) {
        puts("I don't understand that value!");
        return -1;
      }
  }
  return val;
}

/* Update the count according to the value of the card

   pcount: pointer of the counter
   val: value of the card

   return value is the corresponding num of the card
*/
void update(int* pcount, int val)
{
  if ((val > 2) && (val < 7)) {
    (*pcount)++;
  } else if (val == 10) {
    (*pcount)--;
  }
}

/* Main function, calculate the num of cards according the card names
*/
int main()
{
  char card_name[3];
  int count = 0;
  while ( card_name[0] != 'X') {
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = translate(card_name);
    if (val == -1) continue;
    update(&count, val);
    printf("Current count: %i\n", count);
  }
  return 0;
}
