#include "MirfHardwareSpiDriver.h"
#include "HardwareSPI.h"

HardwareSPI spi(1);

uint8_t MirfHardwareSpiDriver::transfer(uint8_t data){
	return spi.transfer(data);
}

void MirfHardwareSpiDriver::begin(){
	spi.begin(SPI_4_5MHZ, 1, 0);
}

void MirfHardwareSpiDriver::end(){
}

MirfHardwareSpiDriver MirfHardwareSpi;
