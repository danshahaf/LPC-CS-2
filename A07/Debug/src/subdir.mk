################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Bus.cpp \
../src/CS2Ass7_Shahaf.cpp \
../src/Railcar.cpp \
../src/Vehicle.cpp 

OBJS += \
./src/Bus.o \
./src/CS2Ass7_Shahaf.o \
./src/Railcar.o \
./src/Vehicle.o 

CPP_DEPS += \
./src/Bus.d \
./src/CS2Ass7_Shahaf.d \
./src/Railcar.d \
./src/Vehicle.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


