// Copyright 2017 The Fuchsia Authors. All rights reserved.
// This is a GENERATED file, see //magenta/system/host/sysgen.
// The license governing this file can be found in the LICENSE file.

#define MX_SYS_time_get 0
#define MX_SYS_nanosleep 1
#define MX_SYS_handle_close 2
#define MX_SYS_handle_duplicate 3
#define MX_SYS_handle_replace 4
#define MX_SYS_object_wait_one 5
#define MX_SYS_object_wait_many 6
#define MX_SYS_object_wait_async 7
#define MX_SYS_object_signal 8
#define MX_SYS_object_signal_peer 9
#define MX_SYS_object_get_property 10
#define MX_SYS_object_set_property 11
#define MX_SYS_object_set_cookie 12
#define MX_SYS_object_get_cookie 13
#define MX_SYS_object_get_info 14
#define MX_SYS_object_get_child 15
#define MX_SYS_channel_create 16
#define MX_SYS_channel_read 17
#define MX_SYS_channel_write 18
#define MX_SYS_channel_call_noretry 19
#define MX_SYS_channel_call_finish 20
#define MX_SYS_socket_create 21
#define MX_SYS_socket_write 22
#define MX_SYS_socket_read 23
#define MX_SYS_thread_exit 24
#define MX_SYS_thread_create 25
#define MX_SYS_thread_start 26
#define MX_SYS_thread_read_state 27
#define MX_SYS_thread_write_state 28
#define MX_SYS_process_exit 29
#define MX_SYS_process_create 30
#define MX_SYS_process_start 31
#define MX_SYS_process_read_memory 32
#define MX_SYS_process_write_memory 33
#define MX_SYS_job_create 34
#define MX_SYS_job_set_policy 35
#define MX_SYS_task_bind_exception_port 36
#define MX_SYS_task_suspend 37
#define MX_SYS_task_resume 38
#define MX_SYS_task_kill 39
#define MX_SYS_event_create 40
#define MX_SYS_eventpair_create 41
#define MX_SYS_futex_wait 42
#define MX_SYS_futex_wake 43
#define MX_SYS_futex_requeue 44
#define MX_SYS_waitset_create 45
#define MX_SYS_waitset_add 46
#define MX_SYS_waitset_remove 47
#define MX_SYS_waitset_wait 48
#define MX_SYS_port_create 49
#define MX_SYS_port_queue 50
#define MX_SYS_port_wait 51
#define MX_SYS_port_cancel 52
#define MX_SYS_timer_create 53
#define MX_SYS_timer_start 54
#define MX_SYS_timer_cancel 55
#define MX_SYS_vmo_create 56
#define MX_SYS_vmo_read 57
#define MX_SYS_vmo_write 58
#define MX_SYS_vmo_get_size 59
#define MX_SYS_vmo_set_size 60
#define MX_SYS_vmo_op_range 61
#define MX_SYS_vmo_clone 62
#define MX_SYS_vmo_set_cache_policy 63
#define MX_SYS_vmar_allocate 64
#define MX_SYS_vmar_destroy 65
#define MX_SYS_vmar_map 66
#define MX_SYS_vmar_unmap 67
#define MX_SYS_vmar_protect 68
#define MX_SYS_cprng_draw 69
#define MX_SYS_cprng_add_entropy 70
#define MX_SYS_fifo_create 71
#define MX_SYS_fifo_read 72
#define MX_SYS_fifo_write 73
#define MX_SYS_log_create 74
#define MX_SYS_log_write 75
#define MX_SYS_log_read 76
#define MX_SYS_ktrace_read 77
#define MX_SYS_ktrace_control 78
#define MX_SYS_ktrace_write 79
#define MX_SYS_mtrace_control 80
#define MX_SYS_debug_transfer_handle 81
#define MX_SYS_debug_read 82
#define MX_SYS_debug_write 83
#define MX_SYS_debug_send_command 84
#define MX_SYS_interrupt_create 85
#define MX_SYS_interrupt_complete 86
#define MX_SYS_interrupt_wait 87
#define MX_SYS_interrupt_signal 88
#define MX_SYS_mmap_device_io 89
#define MX_SYS_mmap_device_memory 90
#define MX_SYS_io_mapping_get_info 91
#define MX_SYS_vmo_create_contiguous 92
#define MX_SYS_bootloader_fb_get_info 93
#define MX_SYS_set_framebuffer 94
#define MX_SYS_set_framebuffer_vmo 95
#define MX_SYS_clock_adjust 96
#define MX_SYS_pci_get_nth_device 97
#define MX_SYS_pci_claim_device 98
#define MX_SYS_pci_enable_bus_master 99
#define MX_SYS_pci_enable_pio 100
#define MX_SYS_pci_reset_device 101
#define MX_SYS_pci_get_bar 102
#define MX_SYS_pci_get_config 103
#define MX_SYS_pci_io_write 104
#define MX_SYS_pci_io_read 105
#define MX_SYS_pci_map_interrupt 106
#define MX_SYS_pci_query_irq_mode_caps 107
#define MX_SYS_pci_set_irq_mode 108
#define MX_SYS_pci_init 109
#define MX_SYS_pci_add_subtract_io_range 110
#define MX_SYS_acpi_uefi_rsdp 111
#define MX_SYS_acpi_cache_flush 112
#define MX_SYS_resource_create 113
#define MX_SYS_resource_destroy 114
#define MX_SYS_resource_get_handle 115
#define MX_SYS_resource_do_action 116
#define MX_SYS_resource_connect 117
#define MX_SYS_resource_accept 118
#define MX_SYS_hypervisor_create 119
#define MX_SYS_hypervisor_op 120
#define MX_SYS_system_mexec 121
#define MX_SYS_syscall_test_0 122
#define MX_SYS_syscall_test_1 123
#define MX_SYS_syscall_test_2 124
#define MX_SYS_syscall_test_3 125
#define MX_SYS_syscall_test_4 126
#define MX_SYS_syscall_test_5 127
#define MX_SYS_syscall_test_6 128
#define MX_SYS_syscall_test_7 129
#define MX_SYS_syscall_test_8 130
#define MX_SYS_syscall_test_wrapper 131
#define MX_SYS_COUNT 132
