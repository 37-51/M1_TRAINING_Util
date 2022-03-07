
PROJ_NAME = Project

BUILD_DIR = Build

# All Source code files
SRC = main.c A1_SeatDriverInput.c A2_input.c A3_PWMgen.c
# All header file paths
INC = A1_SeatDriverInput.h A2_input.h A3_PWMgen.h

# Find out the OS and configure the variables accordingly
ifdef OS	# All configurations for Windwos OS
# Correct the path based on OS
   FixPath = $(subst /,\,$1)
# Name of the compiler used
   CC = avr-gcc.exe
# Name of the elf to hex file converter used
   AVR_OBJ_CPY = avr-objcopy.exe
else #All configurations for Linux OS
   ifeq ($(shell uname), Linux)
# Correct the path based on OS
      FixPath = $1				
# Name of the compiler used
	  CC = avr-gcc
# Name of the elf to hex file converter used
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif