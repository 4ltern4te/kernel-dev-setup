#include <linux/init.h>             
#include <linux/module.h>           
#include <linux/kernel.h>           
 
MODULE_LICENSE("GPL");              
MODULE_AUTHOR("alternate"); 
MODULE_DESCRIPTION("Hello World example");  
MODULE_VERSION("0.1");              
 

static int __init hello_init(void){
   printk(KERN_DEBUG "Hello World!\n");
   return 0;
}
 
static void __exit hello_exit(void){
   printk(KERN_DEBUG "hello_module unloaded from kernel.\n");
}
 
module_init(hello_init);
module_exit(hello_exit);
