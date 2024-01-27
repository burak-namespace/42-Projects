#include <unistd.h>
// #include <stdio.h>

// write(1,output,byte lenght)

void calc_text(int row, int column){

    char slash = '/'; char backslash = '\\'; char star = '*';
    
    // FIRST LINE
    for (int i = 0; i < column; i++)
    {   
        if(i == 0)
        {
            //printf("%c",slash);
        }
        else if(i == column - 1)
        {
            printf("%c",backslash);
        }
        else{
            printf("%c",star);
        }
         
         //result += star;
    }
    printf("\n");

    // SECOND LINE
    for (int i = 0; i < row - 2; i++)
    {   
        if(row <=1)
            break;
        for (int j = 0; j < column; j++)
        {
            
            if(j == 0 || j == column - 1 ){
                   
                    printf("%c",star);
            }
            else{
                
                printf(" ");
            }        
        }
        
        printf("\n");
    }
    // END LINE
    for (int i = 0; i < column; i++)
    {
        if(row <= 1)
        if(i == 0)
        {
           
           printf("%c",backslash);
        }
        else if(i == column - 1)
        {
            
            printf("%c",slash); 
        }
        else{
           
           printf("%c",star);
        }
         
    }
    printf("\n");
}

int main(){
    while (1==1)
    {
        int x,y;
    printf("x : ");
    scanf("%i",&x);
    printf("y : ");
    scanf("%i",&y);

    calc_text(x,y);
    }
    
    
}
