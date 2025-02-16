deps_config := \
	csrc/device/Kconfig \
	/home/romeo/ysyx-workbench/npc/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
