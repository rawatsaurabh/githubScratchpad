#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc58bbbf, "module_layout" },
	{ 0x8a653ece, "kmalloc_caches" },
	{ 0xab86e1dd, "param_ops_int" },
	{ 0x31263050, "i2c_del_driver" },
	{ 0x84442284, "i2c_transfer" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf2f8b814, "gpio_to_desc" },
	{ 0xa72957cc, "__dynamic_pr_debug" },
	{ 0x514cc273, "arm_copy_from_user" },
	{ 0x189c5980, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf6daf30d, "misc_register" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x3888c2a9, "gpiod_direction_input" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x330f46c4, "i2c_register_driver" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1a924719, "kmem_cache_alloc_trace" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x599584be, "gpiod_to_irq" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xc19da790, "misc_deregister" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,stmvl53l5cx");
MODULE_ALIAS("of:N*T*Cst,stmvl53l5cxC*");
MODULE_ALIAS("i2c:stmvl53l5cx");
