/*
 *
 *
 */
#ifndef _FLOW_METER_
#define _FLOW_METER_
class flow_meter 
{
  static flow_meter *instance;
  int sensor_pin;
  volatile int pulse_count;
  
  static void count_pulses();
  public:
  flow_meter(int input_pin);
};
#endif