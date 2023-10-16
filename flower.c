#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

bool maganhangzo(char a) {
  if (a == 'e' || a == 'o'|| a == 'a' || a == 'i' || a == 'u') {
    return true;
  }
  else {
    return false;
  }
}

void viragnyelv(char *bemenet, char *kimenet) {
  int bemenet_hossz = strlen(bemenet);
  int extra = 0;
  for (int i = 0; i < bemenet_hossz; ++i) {
    int current_pos = extra + i;
    if (maganhangzo(bemenet[i])) {
      kimenet[current_pos] = bemenet[i];
      kimenet[current_pos + 1] = 'v';
      kimenet[current_pos + 2] = bemenet[i];
      extra += 2;
    }
    else {
      kimenet[current_pos] = bemenet[i];
    }
  }
}

int main(void) {
  char sztring[50];
  char sztring2[150];
  fgets(sztring, sizeof(sztring), stdin);
  viragnyelv(sztring, sztring2);
  printf("%s", sztring2);
  return 0;
}