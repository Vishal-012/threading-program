#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

void *fun(void *arg)
{
	sleep(1);
	printf("printing quiz from thread\n");
	return NULL;
}

int main()
{
	pthread_t thread1;
	printf("before thread\n");
	pthread_create(&thread1,NULL,fun,NULL);
	pthread_join(thread1,NULL);
	printf("After thread");
	exit(0);
}
