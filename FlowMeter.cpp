/*
 *
 *
 */
#include "Arduino.h"
#include "FlowMeter.h"

flow_meter* flow_meter::instance=0;

void flow_meter::count_pulses()
{
    instance->pulse_count++;
}

flow_meter::flow_meter(int input_pin)
{
	sensor_pin=input_pin;
	pinMode(sensor_pin, INPUT);
	pulse_count=0;
	attachInterrupt(0, count_pulses, RISING);
	instance=this;
}
