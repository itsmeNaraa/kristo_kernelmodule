#include <linux/module.h>
#include <linux/kernel.h>

int init_module() {
	printk(KERN_INFO "[LOG] Kristoforusapm Driver Loaded!\n");
	return 0;
}

//void cleanup_module()
//	printk(KERN_INFO "[LOG] Kristoforusapm Driver Unloaded!\n")
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kristoforusapm");
MODULE_DESCRIPTION("Dummy kernel by Kristoforusapm\ndon't forget to subscribe me");
