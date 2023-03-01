################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Buss.cpp \
../src/BussManager.cpp \
../src/CS2Ass6.2_Shahaf.cpp 

OBJS += \
./src/Buss.o \
./src/BussManager.o \
./src/CS2Ass6.2_Shahaf.o 

CPP_DEPS += \
./src/Buss.d \
./src/BussManager.d \
./src/CS2Ass6.2_Shahaf.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


