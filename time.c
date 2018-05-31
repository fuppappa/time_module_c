	#include <linux/module.h>	/* Needed by all modules */
	#include <linux/kernel.h>	/* Needed for KERN_INFO */
	#include <linux/init.h>		/* Needed for the macros */
	#include <linux/time.h>         /* Needed for time */



	static __init init main(void)
	{
	  struct timespec time;
	  long timestamp;
	 
	  getnstimeofday(&time);
	  timestamp = time.tv_sec * 1000000000L + time.tv_nsec;

	  printk(KERN_INFO "time = %ld nsec. \n", timestamp);
	  return 0;
	  

	return 0;
	}




	static __exit cleanup_main(void)
	{

	 printk("goobye time module ");

	}


	module_init(init_main);

	module_exit(cleanup_main) 
