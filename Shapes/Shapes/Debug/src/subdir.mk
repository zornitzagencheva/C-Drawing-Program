################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Circle.cpp \
../src/DrawingMenager.cpp \
../src/Rectangle.cpp \
../src/Shape.cpp \
../src/Shapes.cpp \
../src/Triangle.cpp 

OBJS += \
./src/Circle.o \
./src/DrawingMenager.o \
./src/Rectangle.o \
./src/Shape.o \
./src/Shapes.o \
./src/Triangle.o 

CPP_DEPS += \
./src/Circle.d \
./src/DrawingMenager.d \
./src/Rectangle.d \
./src/Shape.d \
./src/Shapes.d \
./src/Triangle.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 --std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


