#include<linux/module.h>
#include<linux/init.h>

// Meta Information
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Omkar Shinge");
MODULE_DESCRIPTION("Hello World LKM");

// Following function is called when module is loaded into the kernel
static int __init ModuleInit(void){
    printk("Hello World LKM initialized\n");
    return 0;
}

// Following function is called when module is removed from the kernel
static void __exit ModuleExit(void){
    printk("Hello World LKM exited\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
