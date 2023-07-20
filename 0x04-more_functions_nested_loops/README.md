==========> a function that checks for uppercase character <==========
## must return 1 if it is uppercase and 0 otherwise
     *** problrm one --> how to check it ?
               @ using if and else
 
     *** problem two ---> to what to check it against ?
               @ if char alphabet is greater than "A" 
               @ and less than "Z" print 1 
               @ else print 0


==========> a function that checks for a digit <==========
## must rturn 1 if it is digit and 0 otherwise
     *** the same logic as the above 
               @if it digit print 1 else print 0



==========> a function that multiplies two integers <==========
## must multiply two digit and print the answer
     *** multiplying a and b
               @ using operator * we multiply a and b


==========> a function that prints the numbers, from 0 to 9, <==========
==========>          followed bya new line                   <==========
## must print from 0 to 9 in new line 
     *** problem one --> how to print from 0 to 9
               @ using forloop (i = 0; i < 10; i++) this will help 
                 itrate the number from 0 by incrementing it  to 9

==========> The same as above but not print 2 and 4 <==========
## must print  the numbers, from 0 to 9 but not 2 and 4 
     *** problem one --> how to leave out 2 and 4
               @ the same forloop as the above but we add if condition                   to ommit 2 and 4 ( i == 2 && i == 4)


==========> a function that prints 10 times the numbers, <==========    ==========> from 0 to 14, followed by a new line         <==========
## must print from 0 to 14 followed by new line 10x
     *** problem one --> how to print 10x 
               @ using nested forloop the first itrates from 1 to 10
               @ every time it reach 10 print new line
               @ the second itrates from 0 to 14
               @ coz of putchar use % / not confuse 10 and > as ascii

==========> a function that draws a straight line in the terminal <=====
## must print striaght line 
     *** it is the same as the pervious
               @ it prints _ every time it itrates 
               @ for(i = 0; i < n; i++) 
               @ the length of the line is as long as the n
               @ if the vale 0 it prints new line 

==========>  a function that draws a diagonal line on the terminal <====
## must print diagonal line
     *** problem one how to make in digonal
               @ second using if elseput the empty space using forloop
               @ second the digonal also ...
               @ if j == i \
               @ if j < i ' '  


==========> a function that prints a square, followed by a new line <===
## must print n by n of #
     *** the same as from "0 to 14 followed by new line 10x"
         only to be change by n of # by n new line 

==========> Fizz-Buzz <==========
## must print the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz.
     *** problem one --> how to print 0 to 100
               @ using forloop (i = 0; i <= 100; i++)
     *** problem two --> how to print fizz and buzz
               @ using if else 
               @ if % 3 == 0 print fizz and else if % 5 == 0 print buzz     
