################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Account.cpp \
../BankDatabase.cpp \
../Keypad.cpp \
../Screen.cpp \
../main.cpp 

OBJS += \
./Account.o \
./BankDatabase.o \
./Keypad.o \
./Screen.o \
./main.o 

CPP_DEPS += \
./Account.d \
./BankDatabase.d \
./Keypad.d \
./Screen.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


