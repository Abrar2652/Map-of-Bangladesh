# Map-of-Bangladesh
I've implemented simple concepts of string and ASCII values in this 'C' code. 
The alphabetic position of 'A' is 1, 'E' is 5 whereas their ASCII values are 65 and 69 respectively. So how can we relate that? Simply we can subtract 64 from their ASCII values to get the real alphabetic positions. We assign that alphabetic postion in 'int c' variable.

Now if we find '.' character in string, then we'll print a new line. The ASCII value of the '.' is 46 and a new line is 10.

If the position of the character in the string is even and it's not a null character (ASCII 64), then we'll print a space (ASCII 32).

If the position of the character in the string is odd and it's not a null character (ASCII 64), then we'll print a '|'.
