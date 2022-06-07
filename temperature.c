#include "temperature.h"
#include "em_common.h"
#include "app_assert.h"
#include "sl_sensor_rht.h"

void temperature(){
  int32_t temperature =0;
  int32_t BLE =0;
  uint32_t humidite=0;
  app_assert_status(sl_sensor_rht_get(&humidite, &temperature));
  app_log_info("%s: Temperature brut: %d \n", __FUNCTION__,&temperature);
  BLE = temperature * 1 *0.01*1;
  app_log_info("%s: Temperature: %d \n", __FUNCTION__,BLE);
}
