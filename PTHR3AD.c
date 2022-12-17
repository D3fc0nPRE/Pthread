//pthr3aD.c

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

   void *print_message_function( void *ptr );
   int main()
{
     pthread_t thread1, thread2, thread3, thread4, thread5, thread6, thread7;
     const char *message1 = "Thread 1";
     const char *message2 = "Thread 2";
     const char *message3 = "Thread 3";
     const char *message4 = "Thread 4";
     const char *message5 = "Thread 5";
     const char *message6 = "Thread 6";
     const char *message7 = "Thread 7";
     
     int iret1, iret2, iret3, iret4, iret5, iret6, iret7;
     iret1 = pthread_create( &thread1, NULL, print_message_function, (void*) message1);
     if(iret1)
     {
         fprintf(stderr,"Error - pthread_create() return code: %d\n",iret1);
         exit(EXIT_FAILURE);
     }
     iret2 = pthread_create( &thread2, NULL, print_message_function, (void*) message2);
     if(iret2)
     {
         fprintf(stderr,"Error - pthread_create() return code: %d\n",iret2);
         exit(EXIT_FAILURE);
     }
     iret3 = pthread_create( &thread3, NULL, print_message_function, (void*) message3);
     if(iret3)
     {
     	fprintf(stderr,"Error - pthread_create() return code: %d\n", iret3);
     	exit(EXIT_FAILURE);
     }
     iret4 = pthread_create( &thread4, NULL, print_message_function, (void*) message4);
     if(iret4)
     {
     	fprintf(stderr,"ERROR-pthread_create() return code: %d\n",iret4);
     	exit(EXIT_FAILURE);
     }
     iret5 = pthread_create( &thread5, NULL, print_message_function, (void*) message5);
     if(iret5)
     {
        fprintf(stderr, "ERROR-pthread_create() return code: %d\n",iret5);
        exit(EXIT_FAILURE);
      }
     iret6 = pthread_create( &thread6, NULL, print_message_function, (void*) message6);
     if(iret6)
      {
         fprintf(stderr, "ERROR-pthread_create() return code: %d\n", iret6);
         exit(EXIT_FAILURE);
       }
     iret7 = pthread_create( &thread7, NULL, print_message_function, (void*) message7);
     if(iret7)
      {
         fprintf(stderr, "ERROR-pthread_create() return code: %d\n", iret7);
          exit(EXIT_FAILURE);
       }
     printf("pthread_create() for thread 1 returns: %d\n", iret1);
     printf("pthread_create() for thread 2 returns: %d\n", iret2);
     printf("pthread_create() for thread 3 returns: %d\n", iret3);
     printf("pthread_create() for thread 4 returns: %d\n", iret4);
     printf("pthread_create() for thread 5 returns: %d\n", iret5);  
     printf("pthread_create() for thread 6 returns: %d\n", iret6);
     printf("pthread_create() for thread 7 returns: %d\n", iret7);
     
     pthread_join(thread1, NULL);
     pthread_join(thread2, NULL); 
     pthread_join(thread3, NULL);
     pthread_join(thread4, NULL);
     pthread_join(thread5, NULL);
     pthread_join(thread6, NULL);
     pthread_join(thread7, NULL);

 /* YOU CAN INCREASE HOW MUCH YOU CAN BUT NOT COMPULSORY */
     exit(EXIT_SUCCESS);
    }
     void *print_message_function( void *ptr )
    {
     char *message;
     message = (char *) ptr;
     printf("%s \n", message);
}
