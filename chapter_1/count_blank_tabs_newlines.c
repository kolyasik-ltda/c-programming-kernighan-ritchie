#include <stdio.h>

# This program counts the number of blanks, tabs, and newlines in the input.
int main() {
  int c, blanks = 0, tabs = 0, newlines = 0;

  while = ((c = getchar()) != EOF) {
    if (c == ' ')
      blanks++;
    else if (c == '\t')
      tabs++;
    else if (c == '\n')
      newlines;
  }

  printf("Blanks: %d\n", blanks);
  printf("Tabs: %d\n", tabs);
  printf("Newlines: %d\n", newlines);

  return 0;
}
