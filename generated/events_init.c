/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void screen_1_menu_1_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_RELEASED:
    {

        break;
    }
    default:
        break;
    }
}

static void screen_1_backlight_sider_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        void brightness_slider_event_cb(lv_event_t * e) {
            lv_obj_t * slider = lv_event_get_target(e);
            int value = lv_slider_get_value(slider);  // 获取滑块值 (0 ~ 255)

            // 调整亮度 (假设最大亮度 255)
            char cmd[100];
            snprintf(cmd, sizeof(cmd), "echo %d > /sys/class/backlight/backlight/subsystem/backlight/brightness", value);
            system(cmd);  // 执行 Linux shell 命令

            printf("Brightness set to: %d\n", value);
        }
        break;
    }
    default:
        break;
    }
}

static void screen_1_backlight_bar_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_VALUE_CHANGED:
    {
        break;
    }
    default:
        break;
    }
}

void events_init_screen_1 (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->screen_1_menu_1, screen_1_menu_1_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_1_backlight_sider, screen_1_backlight_sider_event_handler, LV_EVENT_ALL, ui);
    lv_obj_add_event_cb(ui->screen_1_backlight_bar, screen_1_backlight_bar_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
