/*
 * 
 * 
 * 
 */
#include "FlowMeter.h"
int valve_pin=2;

volatile int pulse_count=0;

flow_meter* flow=NULL;
int calculate_Q()
{
  
}
void setup_valve()
{
  pinMode(valve_pin, OUTPUT);
}

void open_valve()
{
  digitalWrite(valve_pin,HIGH);
}

void close_valve()
{
  digitalWrite(valve_pin,LOW);
}


void setup() {
  // put your setup code here, to run once:
   flow=new flow_meter(1);
}

void loop() {
  // put your main code here, to run repeatedly:

}
