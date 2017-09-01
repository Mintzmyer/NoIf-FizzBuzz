#include <stdio.h>
#include <string.h>

        //  If 3 divides number, print 'Fizz' 
        //  If 5 divides number print 'Buzz' 
        //  If both, print 'FizzBuzz'
        //  If neither, print number 

int main()
{
    for (int i = 0; i <25; i++)
    {      
        char FizzPrint[3][4] = {"Fizz", "", "",};
        char BuzzPrint[5][4] = {"Buzz", "", "", "", "",};

        int mod3 = i%3;
        int mod5 = i%5;
 
        printf("%d: %s%s\n", i, FizzPrint[mod3], BuzzPrint[mod5]);  
    }

    for (int i = 25; i <50; i++)
    {
        printf("%d: %s%s\n", i, (i%3 == 0) ? "Fizz":"", (i%5 == 0) ? "Buzz":"");
    }
    return 0;
}

