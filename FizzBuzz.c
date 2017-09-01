#include <stdio.h>
#include <string.h>


int main()
{
    for (int i = 0; i < 100; i++)
    {
        //  If 3 divides number, print 'Fizz' 
        //  If 5 divides number print 'Buzz' 
        //  If both, print 'FizzBuzz'
        //  If neither, print number
        
        char FizzPrint[3][4] = {"Fizz", "", "",};
        char BuzzPrint[5][4] = {"Buzz", "", "", "", "",};

        int mod3 = i%3;
        int mod5 = i%5;
 
        printf("%d: %s%s\n", i, FizzPrint[mod3], BuzzPrint[mod5]);  
        


    }



    return 0;
}

