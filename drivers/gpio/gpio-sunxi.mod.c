#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x708a9a2b, "module_layout" },
	{ 0x7e74e833, "class_destroy" },
	{ 0xfe990052, "gpio_free" },
	{ 0x32c5ddf6, "platform_driver_unregister" },
	{ 0x3e273c48, "platform_device_unregister" },
	{ 0xb14c9454, "platform_driver_register" },
	{ 0xb687a464, "platform_device_register" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x6069c16e, "script_get_pio_list" },
	{ 0xa15ae7ca, "__class_create" },
	{ 0x31b5d6b6, "malloc_sizes" },
	{ 0x1a03a7f4, "dev_err" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x29cd7eec, "sw_gpio_setall_range" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x597e7b79, "dev_set_drvdata" },
	{ 0xbc601ad6, "script_get_item" },
	{ 0x279fb16d, "kmem_cache_alloc" },
	{ 0x7911efb4, "__mutex_init" },
	{ 0x343a1a8, "__list_add" },
	{ 0xc8573e53, "device_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x79d03257, "up_write" },
	{ 0x521445b, "list_del" },
	{ 0x74bd46a4, "down_write" },
	{ 0x30012968, "device_unregister" },
	{ 0x885333c5, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x86f78b8f, "mutex_lock" },
	{ 0x11089ac7, "_ctype" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xaa5ff8b1, "dev_get_drvdata" },
	{ 0x8699da5b, "sw_gpio_setcfg" },
	{ 0xa461616c, "sw_gpio_getcfg" },
	{ 0x885ee69c, "sw_gpio_setpull" },
	{ 0xa192b68b, "sw_gpio_getpull" },
	{ 0x88fbcf2c, "sw_gpio_setdrvlevel" },
	{ 0xb295b8b9, "sw_gpio_getdrvlevel" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0x27e1a049, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "05D926C63E43168405115A2");
