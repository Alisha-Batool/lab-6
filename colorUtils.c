#include <stdlib.h>
#include <math.h>

#include "colorUtils.h"

int max(int a, int b, int c) {
  return (a > b) ? (a > c ? a : c) : (b > c ? b: c);
}

int min(int a, int b, int c) {
  return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}

int toGrayScale(int *r, int *g, int *b, Mode mode) {
  //TODO: implement
  return ((*r + *g + *b) / 3);
  return ((max(*r, *g, *b) + min(*r, *g, *b)) / 2);
  return (*r * 0.21 + *g * 0.72 + *b * 0.07);
  
}

int toSepia(int *r, int *g, int *b) {
  //TODO: implement
  return (*r * 0.393 + *g * 0.769 + *b * 0.189);
  return (*r * 0.349 + *g * 0.686 + *b * 0.168);
  return (*r * 0.272 + *g * 0.534 + *b * 0.131);
}
