#ifndef __OPERATION_API_H
#define __OPERATION_API_H

#include "dw1000_tag.h"

void app_configure_tag (dw1000_report_mode_e report_mode,
                        dw1000_update_mode_e update_mode,
                        uint8_t update_rate);
void app_configure_anchor ();
void app_start ();
void app_stop ();
void app_reset ();

void app_tag_do_range ();

dw1000_report_mode_e app_get_report_mode ();
void app_set_ranges (int32_t* ranges_millimeters, anchor_responses_t* anchor_responses);

#endif