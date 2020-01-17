#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
    pid_t child_id = fork();
    if(child_id>0)
      sleep(50);
    else
    {
         exit(0);
    }
    return 0;
    
}