
#ifndef MODE_H
#define MODE_H

typedef enum {
  AVERAGE,
  LIGHTNESS,
  LUMINOSITY,
  RED,
  GREEN,
  BLUE
} Mode;

#endif /* MODE_H */

typedef enum{
  no_error = 0,
  error_received 
} ERRORCODE;

/**
 * Returns the maximum value among the three given values
 */
int max(int a, int b, int c);

/**
 * Returns the minimum value among the three given values
 */
int min(int a, int b, int c);

/**
 * TODO: add documentation here
 * 
 */

int toGrayScale(int *r, int *g, int *b, Mode mode);

/**
 * TODO: add documentation here
 * @param r the red component of the color 
 * @param g the green component of the color
 * @param b the blue component of the color
 * @param mode the mode to use for converting the color to grayscale
 * @return the grayscale value of the color
 */
  

int toSepia(int *r, int *g, int *b, Mode mode);
/**
 * @param r the red component of the color
 * @param g the green component of the color 
 * @param b the blue component of the color
 * @param mode the mode to use for converting the color to sepia tone
 * @return the sepia tone value of the color
 * */