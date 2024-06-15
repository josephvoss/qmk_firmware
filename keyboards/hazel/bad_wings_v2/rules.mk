# SPI_DRIVER_REQUIRED = yes 
# CUSTOM_MATRIX = lite

POINTING_DEVICE_DRIVER = cirque_pinnacle_spi
POINTING_DEVICE_ENABLE  = yes
LTO_ENABLE = yes
CONSOLE_ENABLE = no
EXTRAFLAGS += -flto
MOUSEKEY_ENABLE = yes
SRC += features/layer_lock.c
