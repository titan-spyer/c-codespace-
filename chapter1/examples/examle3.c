#include <stdio.h>

int main(void)
{
    int c;
    int Space = 0;
    int Backspace = 0;
    int Enter = 0;
    int Tab = 0;
    printf("Enter your characer\n[Note Entering [ctrl] + [D] can terminate your code before runing & pressing any other keystroke expect [Enter],[Backspace], [Tab], [ ] can terminate your code also]\n");
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            Space++;
            printf("You Enterd space %d times\n", Space);
        }
        else if(c == 8)
        {
            Backspace++;
            printf("You Enterd backspace %d times\n", Backspace);
        }
        else if(c == '\n')
        {
            Enter++;
            if (c != '\n' || '\n' || ' ' || 8)
            {
                c = EOF;
            }
            
            printf("You Enter Newline %d times\n", Enter);
        }
        else if (c == '\t')
        {
            Tab++;
            printf("You enterd tab %d times\n", Tab);
        }
        else
        {
            printf("You Enterd\n Space = %d\n Backspace = %d\n Newline = %d\n Tab = %d\n times.", Space, Backspace, Enter, Tab );
            c = EOF;

        }
        
        
        
    }
    
}