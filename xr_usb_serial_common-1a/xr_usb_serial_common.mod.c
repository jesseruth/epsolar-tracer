#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
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
__used
__attribute__((section("__versions"))) = {
	{ 0xb1adfa60, "module_layout" },
	{ 0xc14afd29, "usb_deregister" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9d778579, "put_tty_driver" },
	{ 0x81246d9, "tty_unregister_driver" },
	{ 0x8d674707, "usb_register_driver" },
	{ 0x2e270f86, "tty_register_driver" },
	{ 0x5e445215, "tty_set_operations" },
	{ 0xca778f1c, "__tty_alloc_driver" },
	{ 0x825b9f35, "tty_port_register_device" },
	{ 0xe89f3b87, "usb_get_intf" },
	{ 0x61027474, "usb_driver_claim_interface" },
	{ 0x948775b7, "_dev_info" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xbbf6d938, "device_create_file" },
	{ 0x9d7deec4, "_dev_warn" },
	{ 0x91e55180, "usb_alloc_urb" },
	{ 0x8d6a627a, "usb_alloc_coherent" },
	{ 0x1b515683, "tty_port_init" },
	{ 0x201a4b32, "__mutex_init" },
	{ 0xb74e9d90, "usb_ifnum_to_if" },
	{ 0x92d8b06a, "kmalloc_caches" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd14834c4, "kmem_cache_alloc_trace" },
	{ 0xc6cbbc89, "capable" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x5152e605, "memcmp" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5e5b632b, "usb_autopm_put_interface" },
	{ 0xe1ae6367, "usb_autopm_get_interface" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x19b4e9e7, "tty_standard_install" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x99afc5fc, "tty_port_open" },
	{ 0x2aa5d4fd, "tty_port_close" },
	{ 0x113f8e9e, "usb_autopm_get_interface_async" },
	{ 0xcaea838, "tty_port_hangup" },
	{ 0xfabf2f7b, "tty_port_tty_wakeup" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a1a33a6, "usb_put_intf" },
	{ 0x4de36865, "tty_flip_buffer_push" },
	{ 0x15c861cb, "tty_insert_flip_string_fixed_flag" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x91715312, "sprintf" },
	{ 0xad584696, "tty_port_put" },
	{ 0x692edcb5, "usb_driver_release_interface" },
	{ 0x47a26826, "usb_free_urb" },
	{ 0x3576a578, "tty_unregister_device" },
	{ 0x48d7b0a8, "tty_kref_put" },
	{ 0x8fb93ef8, "tty_vhangup" },
	{ 0xcd68d721, "tty_port_tty_get" },
	{ 0x5fc262cb, "mutex_unlock" },
	{ 0xfa4879ad, "device_remove_file" },
	{ 0x195a71c2, "mutex_lock" },
	{ 0x89d44fd9, "usb_free_coherent" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x26a14cea, "usb_kill_urb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x161f1b31, "usb_autopm_put_interface_async" },
	{ 0xda02d67, "jiffies" },
	{ 0x2e72e858, "tty_port_tty_hangup" },
	{ 0xf012f7eb, "_dev_err" },
	{ 0xc143eee0, "usb_submit_urb" },
	{ 0x9d669763, "memcpy" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8650dc74, "usb_control_msg" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04E2p1410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1411d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1412d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1414d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1422d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1424d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E2p1403d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "17922333BF9E0AEADC7EF11");
