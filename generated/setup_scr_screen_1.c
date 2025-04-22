/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_1(lv_ui *ui)
{
    //Write codes screen_1
    ui->screen_1 = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_1, 480, 480);
    lv_obj_set_scrollbar_mode(ui->screen_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_1_tabview_1
    ui->screen_1_tabview_1 = lv_tabview_create(ui->screen_1, LV_DIR_TOP, 50);
    lv_obj_set_pos(ui->screen_1_tabview_1, 0, 0);
    lv_obj_set_size(ui->screen_1_tabview_1, 478, 478);
    lv_obj_set_scrollbar_mode(ui->screen_1_tabview_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_1_tabview_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_tabview_1, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_tabview_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_1_tabview_1, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_1_tabview_1, &lv_font_montserratMedium_12, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_1_tabview_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_1_tabview_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_1_tabview_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_1_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_tabview_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_1_tabview_1_extra_btnm_main_default
    static lv_style_t style_screen_1_tabview_1_extra_btnm_main_default;
    ui_init_style(&style_screen_1_tabview_1_extra_btnm_main_default);

    lv_style_set_bg_opa(&style_screen_1_tabview_1_extra_btnm_main_default, 255);
    lv_style_set_bg_color(&style_screen_1_tabview_1_extra_btnm_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_1_tabview_1_extra_btnm_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_border_width(&style_screen_1_tabview_1_extra_btnm_main_default, 0);
    lv_style_set_radius(&style_screen_1_tabview_1_extra_btnm_main_default, 0);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_1_tabview_1), &style_screen_1_tabview_1_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_1_tabview_1_extra_btnm_items_default
    static lv_style_t style_screen_1_tabview_1_extra_btnm_items_default;
    ui_init_style(&style_screen_1_tabview_1_extra_btnm_items_default);

    lv_style_set_text_color(&style_screen_1_tabview_1_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
    lv_style_set_text_font(&style_screen_1_tabview_1_extra_btnm_items_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_1_tabview_1_extra_btnm_items_default, 255);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_1_tabview_1), &style_screen_1_tabview_1_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_1_tabview_1_extra_btnm_items_checked
    static lv_style_t style_screen_1_tabview_1_extra_btnm_items_checked;
    ui_init_style(&style_screen_1_tabview_1_extra_btnm_items_checked);

    lv_style_set_text_color(&style_screen_1_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_text_font(&style_screen_1_tabview_1_extra_btnm_items_checked, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_1_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_width(&style_screen_1_tabview_1_extra_btnm_items_checked, 4);
    lv_style_set_border_opa(&style_screen_1_tabview_1_extra_btnm_items_checked, 255);
    lv_style_set_border_color(&style_screen_1_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_border_side(&style_screen_1_tabview_1_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
    lv_style_set_radius(&style_screen_1_tabview_1_extra_btnm_items_checked, 0);
    lv_style_set_bg_opa(&style_screen_1_tabview_1_extra_btnm_items_checked, 60);
    lv_style_set_bg_color(&style_screen_1_tabview_1_extra_btnm_items_checked, lv_color_hex(0x2195f6));
    lv_style_set_bg_grad_dir(&style_screen_1_tabview_1_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_1_tabview_1), &style_screen_1_tabview_1_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

    //Write codes tab1
    ui->screen_1_tabview_1_tab_1 = lv_tabview_add_tab(ui->screen_1_tabview_1,"tab1");
    lv_obj_t * screen_1_tabview_1_tab_1_label = lv_label_create(ui->screen_1_tabview_1_tab_1);
    lv_label_set_text(screen_1_tabview_1_tab_1_label, "");

    //Write codes screen_1_img_1
    ui->screen_1_img_1 = lv_img_create(ui->screen_1_tabview_1_tab_1);
    lv_obj_add_flag(ui->screen_1_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_1_img_1, &_1234_alpha_478x478);
    lv_img_set_pivot(ui->screen_1_img_1, 50,50);
    lv_img_set_angle(ui->screen_1_img_1, 0);
    lv_obj_set_pos(ui->screen_1_img_1, -16, -68);
    lv_obj_set_size(ui->screen_1_img_1, 478, 478);

    //Write style for screen_1_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_1_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_1_img_1, 128, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_1_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes tab2
    ui->screen_1_tabview_1_tab_2 = lv_tabview_add_tab(ui->screen_1_tabview_1,"tab2");
    lv_obj_t * screen_1_tabview_1_tab_2_label = lv_label_create(ui->screen_1_tabview_1_tab_2);
    lv_label_set_text(screen_1_tabview_1_tab_2_label, "");

    //Write codes screen_1_menu_1
    ui->screen_1_menu_1 = lv_menu_create(ui->screen_1_tabview_1_tab_2);

    //Create sidebar page for menu screen_1_menu_1
    ui->screen_1_menu_1_sidebar_page = lv_menu_page_create(ui->screen_1_menu_1, "FUNCTION");
    lv_menu_set_sidebar_page(ui->screen_1_menu_1, ui->screen_1_menu_1_sidebar_page);
    lv_obj_set_scrollbar_mode(ui->screen_1_menu_1_sidebar_page, LV_SCROLLBAR_MODE_OFF);

    //Create subpage for screen_1_menu_1
    ui->screen_1_menu_1_subpage_1 = lv_menu_page_create(ui->screen_1_menu_1, NULL);
    ui->screen_1_menu_1_cont_1 = lv_menu_cont_create(ui->screen_1_menu_1_sidebar_page);
    ui->screen_1_menu_1_label_1 = lv_label_create(ui->screen_1_menu_1_cont_1);
    lv_label_set_text(ui->screen_1_menu_1_label_1, "yolo");
    lv_obj_set_size(ui->screen_1_menu_1_label_1, LV_PCT(100), LV_SIZE_CONTENT);
    lv_obj_set_scrollbar_mode(ui->screen_1_menu_1_subpage_1, LV_SCROLLBAR_MODE_OFF);
    lv_menu_set_load_page_event(ui->screen_1_menu_1, ui->screen_1_menu_1_cont_1, ui->screen_1_menu_1_subpage_1);

    //Create subpage for screen_1_menu_1
    ui->screen_1_menu_1_subpage_2 = lv_menu_page_create(ui->screen_1_menu_1, NULL);
    ui->screen_1_menu_1_cont_2 = lv_menu_cont_create(ui->screen_1_menu_1_sidebar_page);
    ui->screen_1_menu_1_label_2 = lv_label_create(ui->screen_1_menu_1_cont_2);
    lv_label_set_text(ui->screen_1_menu_1_label_2, "OCR");
    lv_obj_set_size(ui->screen_1_menu_1_label_2, LV_PCT(100), LV_SIZE_CONTENT);
    lv_obj_set_scrollbar_mode(ui->screen_1_menu_1_subpage_2, LV_SCROLLBAR_MODE_OFF);
    lv_menu_set_load_page_event(ui->screen_1_menu_1, ui->screen_1_menu_1_cont_2, ui->screen_1_menu_1_subpage_2);

    //Create subpage for screen_1_menu_1
    ui->screen_1_menu_1_subpage_3 = lv_menu_page_create(ui->screen_1_menu_1, NULL);
    ui->screen_1_menu_1_cont_3 = lv_menu_cont_create(ui->screen_1_menu_1_sidebar_page);
    ui->screen_1_menu_1_label_3 = lv_label_create(ui->screen_1_menu_1_cont_3);
    lv_label_set_text(ui->screen_1_menu_1_label_3, "camera");
    lv_obj_set_size(ui->screen_1_menu_1_label_3, LV_PCT(100), LV_SIZE_CONTENT);
    lv_obj_set_scrollbar_mode(ui->screen_1_menu_1_subpage_3, LV_SCROLLBAR_MODE_OFF);
    lv_menu_set_load_page_event(ui->screen_1_menu_1, ui->screen_1_menu_1_cont_3, ui->screen_1_menu_1_subpage_3);
    lv_event_send(ui->screen_1_menu_1_cont_1, LV_EVENT_CLICKED, NULL);
    lv_obj_set_pos(ui->screen_1_menu_1, -20, -26);
    lv_obj_set_size(ui->screen_1_menu_1, 472, 428);
    lv_obj_set_scrollbar_mode(ui->screen_1_menu_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_1_menu_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_menu_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_menu_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_menu_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_menu_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_menu_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_1_menu_1_extra_sidebar_page_main_default
    static lv_style_t style_screen_1_menu_1_extra_sidebar_page_main_default;
    ui_init_style(&style_screen_1_menu_1_extra_sidebar_page_main_default);

    lv_style_set_bg_opa(&style_screen_1_menu_1_extra_sidebar_page_main_default, 255);
    lv_style_set_bg_color(&style_screen_1_menu_1_extra_sidebar_page_main_default, lv_color_hex(0xdaf2f8));
    lv_style_set_bg_grad_dir(&style_screen_1_menu_1_extra_sidebar_page_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_radius(&style_screen_1_menu_1_extra_sidebar_page_main_default, 0);
    lv_obj_add_style(ui->screen_1_menu_1_sidebar_page, &style_screen_1_menu_1_extra_sidebar_page_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_DEFAULT for &style_screen_1_menu_1_extra_option_btns_main_default
    static lv_style_t style_screen_1_menu_1_extra_option_btns_main_default;
    ui_init_style(&style_screen_1_menu_1_extra_option_btns_main_default);

    lv_style_set_text_color(&style_screen_1_menu_1_extra_option_btns_main_default, lv_color_hex(0x151212));
    lv_style_set_text_font(&style_screen_1_menu_1_extra_option_btns_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_1_menu_1_extra_option_btns_main_default, 255);
    lv_style_set_text_align(&style_screen_1_menu_1_extra_option_btns_main_default, LV_TEXT_ALIGN_CENTER);
    lv_style_set_pad_top(&style_screen_1_menu_1_extra_option_btns_main_default, 10);
    lv_style_set_pad_bottom(&style_screen_1_menu_1_extra_option_btns_main_default, 10);
    lv_obj_add_style(ui->screen_1_menu_1_cont_3, &style_screen_1_menu_1_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_1_menu_1_cont_2, &style_screen_1_menu_1_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_add_style(ui->screen_1_menu_1_cont_1, &style_screen_1_menu_1_extra_option_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style state: LV_STATE_CHECKED for &style_screen_1_menu_1_extra_option_btns_main_checked
    static lv_style_t style_screen_1_menu_1_extra_option_btns_main_checked;
    ui_init_style(&style_screen_1_menu_1_extra_option_btns_main_checked);

    lv_style_set_text_color(&style_screen_1_menu_1_extra_option_btns_main_checked, lv_color_hex(0x9ab700));
    lv_style_set_text_font(&style_screen_1_menu_1_extra_option_btns_main_checked, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_1_menu_1_extra_option_btns_main_checked, 255);
    lv_style_set_text_align(&style_screen_1_menu_1_extra_option_btns_main_checked, LV_TEXT_ALIGN_CENTER);
    lv_style_set_border_width(&style_screen_1_menu_1_extra_option_btns_main_checked, 0);
    lv_style_set_radius(&style_screen_1_menu_1_extra_option_btns_main_checked, 0);
    lv_style_set_bg_opa(&style_screen_1_menu_1_extra_option_btns_main_checked, 60);
    lv_style_set_bg_color(&style_screen_1_menu_1_extra_option_btns_main_checked, lv_color_hex(0x00e0b8));
    lv_style_set_bg_grad_dir(&style_screen_1_menu_1_extra_option_btns_main_checked, LV_GRAD_DIR_NONE);
    lv_obj_add_style(ui->screen_1_menu_1_cont_3, &style_screen_1_menu_1_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_add_style(ui->screen_1_menu_1_cont_2, &style_screen_1_menu_1_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);
    lv_obj_add_style(ui->screen_1_menu_1_cont_1, &style_screen_1_menu_1_extra_option_btns_main_checked, LV_PART_MAIN|LV_STATE_CHECKED);

    //Write style state: LV_STATE_DEFAULT for &style_screen_1_menu_1_extra_main_title_main_default
    static lv_style_t style_screen_1_menu_1_extra_main_title_main_default;
    ui_init_style(&style_screen_1_menu_1_extra_main_title_main_default);

    lv_style_set_text_color(&style_screen_1_menu_1_extra_main_title_main_default, lv_color_hex(0x41485a));
    lv_style_set_text_font(&style_screen_1_menu_1_extra_main_title_main_default, &lv_font_montserratMedium_12);
    lv_style_set_text_opa(&style_screen_1_menu_1_extra_main_title_main_default, 255);
    lv_style_set_text_align(&style_screen_1_menu_1_extra_main_title_main_default, LV_TEXT_ALIGN_CENTER);
    lv_style_set_bg_opa(&style_screen_1_menu_1_extra_main_title_main_default, 255);
    lv_style_set_bg_color(&style_screen_1_menu_1_extra_main_title_main_default, lv_color_hex(0xffffff));
    lv_style_set_bg_grad_dir(&style_screen_1_menu_1_extra_main_title_main_default, LV_GRAD_DIR_NONE);
    lv_style_set_pad_top(&style_screen_1_menu_1_extra_main_title_main_default, 0);
    lv_style_set_pad_bottom(&style_screen_1_menu_1_extra_main_title_main_default, 0);
    lv_menu_t * screen_1_menu_1_menu= (lv_menu_t *)ui->screen_1_menu_1;
    lv_obj_t * screen_1_menu_1_title = screen_1_menu_1_menu->sidebar_header_title;
    lv_obj_set_size(screen_1_menu_1_title, LV_PCT(100), LV_SIZE_CONTENT);
    lv_obj_add_style(lv_menu_get_sidebar_header(ui->screen_1_menu_1), &style_screen_1_menu_1_extra_main_title_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);







    //Write codes screen_1_cont_1
    ui->screen_1_cont_1 = lv_obj_create(ui->screen_1_tabview_1_tab_2);
    lv_obj_set_pos(ui->screen_1_cont_1, 144, 39);
    lv_obj_set_size(ui->screen_1_cont_1, 300, 200);
    lv_obj_set_scrollbar_mode(ui->screen_1_cont_1, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_1_cont_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_1_cont_1, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_1_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_1_cont_1, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_1_cont_1, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_1_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_cont_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes tab3
    ui->screen_1_tabview_1_tab_3 = lv_tabview_add_tab(ui->screen_1_tabview_1,"tab3");
    lv_obj_t * screen_1_tabview_1_tab_3_label = lv_label_create(ui->screen_1_tabview_1_tab_3);
    lv_label_set_text(screen_1_tabview_1_tab_3_label, "");

    //Write codes screen_1_backlight_sider
    ui->screen_1_backlight_sider = lv_slider_create(ui->screen_1_tabview_1_tab_3);
    lv_slider_set_range(ui->screen_1_backlight_sider, 10, 110);
    lv_slider_set_mode(ui->screen_1_backlight_sider, LV_SLIDER_MODE_NORMAL);
    lv_slider_set_value(ui->screen_1_backlight_sider, 20, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_1_backlight_sider, 39, 115);
    lv_obj_set_size(ui->screen_1_backlight_sider, 350, 5);

    //Write style for screen_1_backlight_sider, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_backlight_sider, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_backlight_sider, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_backlight_sider, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_backlight_sider, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui->screen_1_backlight_sider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_backlight_sider, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_backlight_sider, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_backlight_sider, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_backlight_sider, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_backlight_sider, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_backlight_sider, 50, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //Write style for screen_1_backlight_sider, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_backlight_sider, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_backlight_sider, lv_color_hex(0x2195f6), LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_backlight_sider, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_backlight_sider, 50, LV_PART_KNOB|LV_STATE_DEFAULT);

    //Write codes screen_1_backlight_bar
    ui->screen_1_backlight_bar = lv_bar_create(ui->screen_1_tabview_1_tab_3);
    lv_obj_set_style_anim_time(ui->screen_1_backlight_bar, 1000, 0);
    lv_bar_set_mode(ui->screen_1_backlight_bar, LV_BAR_MODE_NORMAL);
    lv_bar_set_range(ui->screen_1_backlight_bar, 10, 110);
    lv_bar_set_value(ui->screen_1_backlight_bar, 20, LV_ANIM_OFF);
    lv_obj_set_pos(ui->screen_1_backlight_bar, 40, 29);
    lv_obj_set_size(ui->screen_1_backlight_bar, 350, 5);

    //Write style for screen_1_backlight_bar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_backlight_bar, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_backlight_bar, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_backlight_bar, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_backlight_bar, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_1_backlight_bar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_1_backlight_bar, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_1_backlight_bar, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_1_backlight_bar, lv_color_hex(0x2195f6), LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_1_backlight_bar, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_1_backlight_bar, 10, LV_PART_INDICATOR|LV_STATE_DEFAULT);

    //The custom code of screen_1.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_1);

    //Init events for screen.
    events_init_screen_1(ui);
}
