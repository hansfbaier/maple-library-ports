#include "MirfHardwareSpiDriver.h"
#include "HardwareSPI.h"
#include "wirish.h"

HardwareSPI spi(2);

uint8_t MirfHardwareSpiDriver::transfer(uint8_t data){
	return spi.transfer(data);
}

void MirfHardwareSpiDriver::begin(){
	spi.begin(SPI_4_5MHZ, MSBFIRST, SPI_MODE_0);
}

void MirfHardwareSpiDriver::end(){
}

MirfHardwareSpiDriver MirfHardwareSpi;
