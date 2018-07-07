#include <stdio.h>
 
int main() {
  setbuf(stdin, NULL);
  int t, b;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &b);
    printf("%d\n", find_squares(b));
  }
  return 0;
}
 
int find_squares(b) {
  int squares = 0;
  if(b < 4) {
    return 0;
  } else {
    squares = b/4;
    b -= squares * 2;
    squares = squares * squares;
    return squares + 2 * find_squares(b);
  }
}  