// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void ui_event_Screen_DP(lv_event_t * e);
lv_obj_t * ui_Screen_DP;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Panel10;
lv_obj_t * ui_Label27;
void ui_event_Switch_Power_Ender1(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Ender1;
lv_obj_t * ui_Label34;
lv_obj_t * ui_Image9;
lv_obj_t * ui_Panel11;
lv_obj_t * ui_Label13;
void ui_event_Switch_Power_Ender(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Ender;
lv_obj_t * ui_Label16;
lv_obj_t * ui_Image3;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Label1;
void ui_event_Slider_Brightness_Light_Ender(lv_event_t * e);
lv_obj_t * ui_Slider_Brightness_Light_Ender;
void ui_event_Switch_Power_Light_Ender(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Light_Ender;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label15;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Panel15;
lv_obj_t * ui_Label22;
void ui_event_Slider_Speed_Alveo3D(lv_event_t * e);
lv_obj_t * ui_Slider_Speed_Alveo3D;
void ui_event_Switch_Power_Alveo3D(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Alveo3D;
lv_obj_t * ui_Image7;
lv_obj_t * ui_Label23;
lv_obj_t * ui_Label24;
void ui_event_Image1(lv_event_t * e);
lv_obj_t * ui_Image1;
lv_obj_t * ui_Panel9;
lv_obj_t * ui_Label10;
void ui_event_Switch_Power_Xiaomi(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Xiaomi;
lv_obj_t * ui_Label11;
lv_obj_t * ui_Image4;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Chart2;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Panel8;
lv_obj_t * ui_Chart1;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Chart6;
lv_obj_t * ui_Label2;
void ui_event_Screen_CHAT_CNC(lv_event_t * e);
lv_obj_t * ui_Screen_CHAT_CNC;
lv_obj_t * ui_Panel12;
lv_obj_t * ui_Panel13;
lv_obj_t * ui_Label17;
void ui_event_Switch_Power_Chatcnc(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Chatcnc;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Image5;
lv_obj_t * ui_Panel14;
lv_obj_t * ui_Label19;
void ui_event_Slider_Brightness_Light_Chatcnc(lv_event_t * e);
lv_obj_t * ui_Slider_Brightness_Light_Chatcnc;
void ui_event_Switch_Power_Light_Chatcnc(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Light_Chatcnc;
lv_obj_t * ui_Label20;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Image6;
lv_obj_t * ui_Panel16;
lv_obj_t * ui_Label25;
void ui_event_Switch_Power_Xiaomi1(lv_event_t * e);
lv_obj_t * ui_Switch_Power_Xiaomi1;
lv_obj_t * ui_Label26;
lv_obj_t * ui_Image8;
lv_obj_t * ui_Panel5;
lv_obj_t * ui_Chart3;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Panel6;
lv_obj_t * ui_Chart4;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Panel7;
lv_obj_t * ui_Chart5;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Alveo_Info_Screen;
lv_obj_t * ui_Panel17;
lv_obj_t * ui_Label12;
void ui_event_Image11(lv_event_t * e);
lv_obj_t * ui_Image11;
lv_obj_t * ui_Arc2;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label29;
lv_obj_t * ui_Label30;
lv_obj_t * ui_Label31;
lv_obj_t * ui_Arc1;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Label28;
lv_obj_t * ui_Label32;
lv_obj_t * ui_Label33;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen_DP(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        _ui_screen_change(ui_Screen_CHAT_CNC, LV_SCR_LOAD_ANIM_MOVE_TOP, 750, 0);
    }
}
void ui_event_Switch_Power_Ender1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_ender(e);
    }
}
void ui_event_Switch_Power_Ender(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_ender(e);
    }
}
void ui_event_Slider_Brightness_Light_Ender(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_slider_brightness_ender(e);
    }
}
void ui_event_Switch_Power_Light_Ender(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_light_ender(e);
    }
}
void ui_event_Slider_Speed_Alveo3D(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_slider_speed_alveo3d(e);
    }
}
void ui_event_Switch_Power_Alveo3D(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_power_alveo3d(e);
    }
}
void ui_event_Image1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Alveo_Info_Screen, LV_SCR_LOAD_ANIM_OVER_TOP, 0, 0);
    }
}
void ui_event_Switch_Power_Xiaomi(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_xiaomi(e);
    }
}
void ui_event_Screen_CHAT_CNC(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        _ui_screen_change(ui_Screen_DP, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 750, 0);
    }
}
void ui_event_Switch_Power_Chatcnc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_chatcnc(e);
    }
}
void ui_event_Slider_Brightness_Light_Chatcnc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_slider_brightness_chatcnc(e);
    }
}
void ui_event_Switch_Power_Light_Chatcnc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_light_chatcnc(e);
    }
}
void ui_event_Switch_Power_Xiaomi1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        event_switch_power_xiaomi1(e);
    }
}
void ui_event_Image11(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Screen_DP, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen_DP_screen_init(void)
{
    ui_Screen_DP = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen_DP, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel4 = lv_obj_create(ui_Screen_DP);
    lv_obj_set_width(ui_Panel4, 800);
    lv_obj_set_height(ui_Panel4, 500);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel4, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel4, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel4, LV_OBJ_FLAG_FLEX_IN_NEW_TRACK);     /// Flags
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Panel4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_Panel4, LV_DIR_HOR);

    ui_Panel10 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel10, 250);
    lv_obj_set_height(ui_Panel10, 440);
    lv_obj_set_x(ui_Panel10, -176);
    lv_obj_set_y(ui_Panel10, 40);
    lv_obj_set_align(ui_Panel10, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel10, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel10, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel10, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label27 = lv_label_create(ui_Panel10);
    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label27, -67);
    lv_obj_set_y(ui_Label27, 120);
    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label27, "Power");

    ui_Switch_Power_Ender1 = lv_switch_create(ui_Panel10);
    lv_obj_set_width(ui_Switch_Power_Ender1, 50);
    lv_obj_set_height(ui_Switch_Power_Ender1, 25);
    lv_obj_set_x(ui_Switch_Power_Ender1, 65);
    lv_obj_set_y(ui_Switch_Power_Ender1, 120);
    lv_obj_set_align(ui_Switch_Power_Ender1, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Ender1, LV_STATE_CHECKED);       /// States

    ui_Label34 = lv_label_create(ui_Panel10);
    lv_obj_set_width(ui_Label34, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label34, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label34, 0);
    lv_obj_set_y(ui_Label34, -180);
    lv_obj_set_align(ui_Label34, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label34, "Zentrale");

    ui_Image9 = lv_img_create(ui_Panel10);
    lv_img_set_src(ui_Image9, &ui_img_1994275582);
    lv_obj_set_width(ui_Image9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image9, 0);
    lv_obj_set_y(ui_Image9, -22);
    lv_obj_set_align(ui_Image9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image9, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image9, 250);

    ui_Panel11 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel11, 250);
    lv_obj_set_height(ui_Panel11, 440);
    lv_obj_set_x(ui_Panel11, -176);
    lv_obj_set_y(ui_Panel11, 40);
    lv_obj_set_align(ui_Panel11, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel11, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel11, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel11, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, -67);
    lv_obj_set_y(ui_Label13, 120);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "Power");

    ui_Switch_Power_Ender = lv_switch_create(ui_Panel11);
    lv_obj_set_width(ui_Switch_Power_Ender, 50);
    lv_obj_set_height(ui_Switch_Power_Ender, 25);
    lv_obj_set_x(ui_Switch_Power_Ender, 65);
    lv_obj_set_y(ui_Switch_Power_Ender, 120);
    lv_obj_set_align(ui_Switch_Power_Ender, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Ender, LV_STATE_CHECKED);       /// States

    ui_Label16 = lv_label_create(ui_Panel11);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label16, 0);
    lv_obj_set_y(ui_Label16, -180);
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "Ender 3 Pro");

    ui_Image3 = lv_img_create(ui_Panel11);
    lv_img_set_src(ui_Image3, &ui_img_538830638);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image3, 0);
    lv_obj_set_y(ui_Image3, -22);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image3, 200);

    ui_Panel3 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel3, 250);
    lv_obj_set_height(ui_Panel3, 440);
    lv_obj_set_x(ui_Panel3, -176);
    lv_obj_set_y(ui_Panel3, 40);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel3, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -68);
    lv_obj_set_y(ui_Label1, 120);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "Power");

    ui_Slider_Brightness_Light_Ender = lv_slider_create(ui_Panel3);
    lv_slider_set_value(ui_Slider_Brightness_Light_Ender, 100, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider_Brightness_Light_Ender) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Slider_Brightness_Light_Ender, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider_Brightness_Light_Ender, 200);
    lv_obj_set_height(ui_Slider_Brightness_Light_Ender, 10);
    lv_obj_set_x(ui_Slider_Brightness_Light_Ender, 0);
    lv_obj_set_y(ui_Slider_Brightness_Light_Ender, 185);
    lv_obj_set_align(ui_Slider_Brightness_Light_Ender, LV_ALIGN_CENTER);

    ui_Switch_Power_Light_Ender = lv_switch_create(ui_Panel3);
    lv_obj_set_width(ui_Switch_Power_Light_Ender, 50);
    lv_obj_set_height(ui_Switch_Power_Light_Ender, 25);
    lv_obj_set_x(ui_Switch_Power_Light_Ender, 73);
    lv_obj_set_y(ui_Switch_Power_Light_Ender, 120);
    lv_obj_set_align(ui_Switch_Power_Light_Ender, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Light_Ender, LV_STATE_CHECKED);       /// States

    ui_Label5 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, -180);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "Licht");

    ui_Label15 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label15, -62);
    lv_obj_set_y(ui_Label15, 150);
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "Helligkeit");
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_Panel3);
    lv_img_set_src(ui_Image2, &ui_img_1822783234);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image2, 0);
    lv_obj_set_y(ui_Image2, 5);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image2, 250);

    ui_Panel15 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel15, 250);
    lv_obj_set_height(ui_Panel15, 440);
    lv_obj_set_x(ui_Panel15, -176);
    lv_obj_set_y(ui_Panel15, 40);
    lv_obj_set_align(ui_Panel15, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel15, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel15, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel15, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel15, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel15, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label22 = lv_label_create(ui_Panel15);
    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label22, -67);
    lv_obj_set_y(ui_Label22, 120);
    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label22, "Power");

    ui_Slider_Speed_Alveo3D = lv_slider_create(ui_Panel15);
    lv_slider_set_value(ui_Slider_Speed_Alveo3D, 100, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider_Speed_Alveo3D) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Slider_Speed_Alveo3D, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider_Speed_Alveo3D, 200);
    lv_obj_set_height(ui_Slider_Speed_Alveo3D, 10);
    lv_obj_set_x(ui_Slider_Speed_Alveo3D, 0);
    lv_obj_set_y(ui_Slider_Speed_Alveo3D, 185);
    lv_obj_set_align(ui_Slider_Speed_Alveo3D, LV_ALIGN_CENTER);

    ui_Switch_Power_Alveo3D = lv_switch_create(ui_Panel15);
    lv_obj_set_width(ui_Switch_Power_Alveo3D, 50);
    lv_obj_set_height(ui_Switch_Power_Alveo3D, 25);
    lv_obj_set_x(ui_Switch_Power_Alveo3D, 82);
    lv_obj_set_y(ui_Switch_Power_Alveo3D, 120);
    lv_obj_set_align(ui_Switch_Power_Alveo3D, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Alveo3D, LV_STATE_CHECKED);       /// States

    ui_Image7 = lv_img_create(ui_Panel15);
    lv_img_set_src(ui_Image7, &ui_img_2065209696);
    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image7, 0);
    lv_obj_set_y(ui_Image7, -14);
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image7, 150);

    ui_Label23 = lv_label_create(ui_Panel15);
    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label23, 0);
    lv_obj_set_y(ui_Label23, -180);
    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label23, "Alveo 3D");

    ui_Label24 = lv_label_create(ui_Panel15);
    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label24, -34);
    lv_obj_set_y(ui_Label24, 152);
    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label24, "Ventilator Speed");
    lv_obj_set_style_text_font(ui_Label24, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Panel15);
    lv_img_set_src(ui_Image1, &ui_img_1544019445);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image1, 86);
    lv_obj_set_y(ui_Image1, -181);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image1, 100);

    ui_Panel9 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel9, 250);
    lv_obj_set_height(ui_Panel9, 440);
    lv_obj_set_x(ui_Panel9, -176);
    lv_obj_set_y(ui_Panel9, 40);
    lv_obj_set_align(ui_Panel9, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel9, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel9, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel9, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel9, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Panel9);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, -68);
    lv_obj_set_y(ui_Label10, 113);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "Power");

    ui_Switch_Power_Xiaomi = lv_switch_create(ui_Panel9);
    lv_obj_set_width(ui_Switch_Power_Xiaomi, 50);
    lv_obj_set_height(ui_Switch_Power_Xiaomi, 25);
    lv_obj_set_x(ui_Switch_Power_Xiaomi, 64);
    lv_obj_set_y(ui_Switch_Power_Xiaomi, 115);
    lv_obj_set_align(ui_Switch_Power_Xiaomi, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Xiaomi, LV_STATE_CHECKED);       /// States

    ui_Label11 = lv_label_create(ui_Panel9);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, 0);
    lv_obj_set_y(ui_Label11, -180);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "Xiaomi Luftfilter");

    ui_Image4 = lv_img_create(ui_Panel9);
    lv_img_set_src(ui_Image4, &ui_img_1869445265);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image4, -1);
    lv_obj_set_y(ui_Image4, 2);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image4, 200);

    ui_Panel2 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel2, 500);
    lv_obj_set_height(ui_Panel2, 440);
    lv_obj_set_x(ui_Panel2, -138);
    lv_obj_set_y(ui_Panel2, -4);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart2 = lv_chart_create(ui_Panel2);
    lv_obj_set_width(ui_Chart2, 365);
    lv_obj_set_height(ui_Chart2, 330);
    lv_obj_set_x(ui_Chart2, -2);
    lv_obj_set_y(ui_Chart2, 15);
    lv_obj_set_align(ui_Chart2, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_Chart2, LV_CHART_TYPE_LINE);
    lv_chart_set_axis_tick(ui_Chart2, LV_CHART_AXIS_PRIMARY_X, 10, 5, 5, 2, false, 50);
    lv_chart_set_axis_tick(ui_Chart2, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 50);
    lv_chart_series_t * ui_Chart2_series_1 = lv_chart_add_series(ui_Chart2, lv_color_hex(0x1208C0),
                                                                 LV_CHART_AXIS_PRIMARY_Y);
    static lv_coord_t ui_Chart2_series_1_array[] = { 20, 22, 25, 28, 30, 31, 32, 30, 31, 32, 30 };
    lv_chart_set_ext_y_array(ui_Chart2, ui_Chart2_series_1, ui_Chart2_series_1_array);

    ui_Label8 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, -5);
    lv_obj_set_y(ui_Label8, -180);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "Temperatur");

    ui_Panel8 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel8, 500);
    lv_obj_set_height(ui_Panel8, 440);
    lv_obj_set_x(ui_Panel8, 470);
    lv_obj_set_y(ui_Panel8, 16);
    lv_obj_set_align(ui_Panel8, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel8, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel8, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel8, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart1 = lv_chart_create(ui_Panel8);
    lv_obj_set_width(ui_Chart1, 365);
    lv_obj_set_height(ui_Chart1, 330);
    lv_obj_set_x(ui_Chart1, -5);
    lv_obj_set_y(ui_Chart1, 14);
    lv_obj_set_align(ui_Chart1, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_Chart1, LV_CHART_TYPE_LINE);
    lv_chart_set_range(ui_Chart1, LV_CHART_AXIS_SECONDARY_Y, 0, 250);
    lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_PRIMARY_X, 10, 5, 5, 2, false, 50);
    lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 50);
    lv_chart_series_t * ui_Chart1_series_1 = lv_chart_add_series(ui_Chart1, lv_color_hex(0xEE1313),
                                                                 LV_CHART_AXIS_SECONDARY_Y);
    static lv_coord_t ui_Chart1_series_1_array[] = { 120, 121, 120, 120, 121, 120, 120, 121, 121, 121 };
    lv_chart_set_ext_y_array(ui_Chart1, ui_Chart1_series_1, ui_Chart1_series_1_array);

    ui_Label9 = lv_label_create(ui_Panel8);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, 6);
    lv_obj_set_y(ui_Label9, -180);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "Feuchtigkeitssensor");

    ui_Panel1 = lv_obj_create(ui_Panel4);
    lv_obj_set_width(ui_Panel1, 500);
    lv_obj_set_height(ui_Panel1, 440);
    lv_obj_set_x(ui_Panel1, 368);
    lv_obj_set_y(ui_Panel1, 11);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel1, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart6 = lv_chart_create(ui_Panel1);
    lv_obj_set_width(ui_Chart6, 365);
    lv_obj_set_height(ui_Chart6, 330);
    lv_obj_set_x(ui_Chart6, -12);
    lv_obj_set_y(ui_Chart6, 13);
    lv_obj_set_align(ui_Chart6, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_Chart6, LV_CHART_TYPE_LINE);
    lv_chart_set_axis_tick(ui_Chart6, LV_CHART_AXIS_PRIMARY_X, 10, 5, 5, 2, false, 50);
    lv_chart_set_axis_tick(ui_Chart6, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 50);
    lv_chart_series_t * ui_Chart6_series_1 = lv_chart_add_series(ui_Chart6, lv_color_hex(0x1E8500),
                                                                 LV_CHART_AXIS_PRIMARY_Y);
    static lv_coord_t ui_Chart6_series_1_array[] = { 0, 10, 20, 40, 80, 80, 40, 20, 10, 0 };
    lv_chart_set_ext_y_array(ui_Chart6, ui_Chart6_series_1, ui_Chart6_series_1_array);

    ui_Label2 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -15);
    lv_obj_set_y(ui_Label2, -180);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "Air quality");

    lv_obj_add_event_cb(ui_Switch_Power_Ender1, ui_event_Switch_Power_Ender1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Ender, ui_event_Switch_Power_Ender, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Slider_Brightness_Light_Ender, ui_event_Slider_Brightness_Light_Ender, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Light_Ender, ui_event_Switch_Power_Light_Ender, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Slider_Speed_Alveo3D, ui_event_Slider_Speed_Alveo3D, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Alveo3D, ui_event_Switch_Power_Alveo3D, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Image1, ui_event_Image1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Xiaomi, ui_event_Switch_Power_Xiaomi, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen_DP, ui_event_Screen_DP, LV_EVENT_ALL, NULL);

}
void ui_Screen_CHAT_CNC_screen_init(void)
{
    ui_Screen_CHAT_CNC = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen_CHAT_CNC, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel12 = lv_obj_create(ui_Screen_CHAT_CNC);
    lv_obj_set_width(ui_Panel12, 800);
    lv_obj_set_height(ui_Panel12, 500);
    lv_obj_set_align(ui_Panel12, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel12, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Panel12, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Panel12, LV_OBJ_FLAG_FLEX_IN_NEW_TRACK);     /// Flags
    lv_obj_clear_flag(ui_Panel12, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Panel12, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_Panel12, LV_DIR_HOR);

    ui_Panel13 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel13, 250);
    lv_obj_set_height(ui_Panel13, 440);
    lv_obj_set_x(ui_Panel13, -176);
    lv_obj_set_y(ui_Panel13, 40);
    lv_obj_set_align(ui_Panel13, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel13, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel13, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel13, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel13, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel13, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_Panel13);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label17, -67);
    lv_obj_set_y(ui_Label17, 114);
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "Power");

    ui_Switch_Power_Chatcnc = lv_switch_create(ui_Panel13);
    lv_obj_set_width(ui_Switch_Power_Chatcnc, 50);
    lv_obj_set_height(ui_Switch_Power_Chatcnc, 25);
    lv_obj_set_x(ui_Switch_Power_Chatcnc, 66);
    lv_obj_set_y(ui_Switch_Power_Chatcnc, 113);
    lv_obj_set_align(ui_Switch_Power_Chatcnc, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Chatcnc, LV_STATE_CHECKED);       /// States

    ui_Label18 = lv_label_create(ui_Panel13);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label18, 0);
    lv_obj_set_y(ui_Label18, -180);
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "CHAT CNC");

    ui_Image5 = lv_img_create(ui_Panel13);
    lv_img_set_src(ui_Image5, &ui_img_549405571);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image5, 0);
    lv_obj_set_y(ui_Image5, -22);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image5, 200);

    ui_Panel14 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel14, 250);
    lv_obj_set_height(ui_Panel14, 440);
    lv_obj_set_x(ui_Panel14, -176);
    lv_obj_set_y(ui_Panel14, 40);
    lv_obj_set_align(ui_Panel14, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel14, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel14, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel14, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel14, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel14, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label19 = lv_label_create(ui_Panel14);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label19, -67);
    lv_obj_set_y(ui_Label19, 113);
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "Power");

    ui_Slider_Brightness_Light_Chatcnc = lv_slider_create(ui_Panel14);
    lv_slider_set_value(ui_Slider_Brightness_Light_Chatcnc, 100, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider_Brightness_Light_Chatcnc) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Slider_Brightness_Light_Chatcnc, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider_Brightness_Light_Chatcnc, 200);
    lv_obj_set_height(ui_Slider_Brightness_Light_Chatcnc, 10);
    lv_obj_set_x(ui_Slider_Brightness_Light_Chatcnc, 0);
    lv_obj_set_y(ui_Slider_Brightness_Light_Chatcnc, 190);
    lv_obj_set_align(ui_Slider_Brightness_Light_Chatcnc, LV_ALIGN_CENTER);

    ui_Switch_Power_Light_Chatcnc = lv_switch_create(ui_Panel14);
    lv_obj_set_width(ui_Switch_Power_Light_Chatcnc, 50);
    lv_obj_set_height(ui_Switch_Power_Light_Chatcnc, 25);
    lv_obj_set_x(ui_Switch_Power_Light_Chatcnc, 66);
    lv_obj_set_y(ui_Switch_Power_Light_Chatcnc, 114);
    lv_obj_set_align(ui_Switch_Power_Light_Chatcnc, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Light_Chatcnc, LV_STATE_CHECKED);       /// States

    ui_Label20 = lv_label_create(ui_Panel14);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label20, 0);
    lv_obj_set_y(ui_Label20, -180);
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label20, "Licht");

    ui_Label21 = lv_label_create(ui_Panel14);
    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label21, -62);
    lv_obj_set_y(ui_Label21, 160);
    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label21, "Helligkeit");
    lv_obj_set_style_text_font(ui_Label21, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image6 = lv_img_create(ui_Panel14);
    lv_img_set_src(ui_Image6, &ui_img_1822783234);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image6, 0);
    lv_obj_set_y(ui_Image6, -3);
    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image6, 250);

    ui_Panel16 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel16, 250);
    lv_obj_set_height(ui_Panel16, 440);
    lv_obj_set_x(ui_Panel16, -176);
    lv_obj_set_y(ui_Panel16, 40);
    lv_obj_set_align(ui_Panel16, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel16, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel16, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel16, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel16, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel16, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label25 = lv_label_create(ui_Panel16);
    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label25, -68);
    lv_obj_set_y(ui_Label25, 113);
    lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label25, "Power");

    ui_Switch_Power_Xiaomi1 = lv_switch_create(ui_Panel16);
    lv_obj_set_width(ui_Switch_Power_Xiaomi1, 50);
    lv_obj_set_height(ui_Switch_Power_Xiaomi1, 25);
    lv_obj_set_x(ui_Switch_Power_Xiaomi1, 67);
    lv_obj_set_y(ui_Switch_Power_Xiaomi1, 112);
    lv_obj_set_align(ui_Switch_Power_Xiaomi1, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Switch_Power_Xiaomi1, LV_STATE_CHECKED);       /// States

    ui_Label26 = lv_label_create(ui_Panel16);
    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label26, 0);
    lv_obj_set_y(ui_Label26, -180);
    lv_obj_set_align(ui_Label26, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label26, "Xiaomi Luftfilter");

    ui_Image8 = lv_img_create(ui_Panel16);
    lv_img_set_src(ui_Image8, &ui_img_1869445265);
    lv_obj_set_width(ui_Image8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image8, 0);
    lv_obj_set_y(ui_Image8, -30);
    lv_obj_set_align(ui_Image8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image8, 200);

    ui_Panel5 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel5, 500);
    lv_obj_set_height(ui_Panel5, 440);
    lv_obj_set_x(ui_Panel5, 32);
    lv_obj_set_y(ui_Panel5, -13);
    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel5, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel5, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel5, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart3 = lv_chart_create(ui_Panel5);
    lv_obj_set_width(ui_Chart3, 365);
    lv_obj_set_height(ui_Chart3, 330);
    lv_obj_set_x(ui_Chart3, -2);
    lv_obj_set_y(ui_Chart3, 15);
    lv_obj_set_align(ui_Chart3, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_Chart3, LV_CHART_TYPE_LINE);
    lv_chart_set_axis_tick(ui_Chart3, LV_CHART_AXIS_PRIMARY_X, 10, 5, 5, 2, false, 50);
    lv_chart_set_axis_tick(ui_Chart3, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 50);
    lv_chart_series_t * ui_Chart3_series_1 = lv_chart_add_series(ui_Chart3, lv_color_hex(0x1208C0),
                                                                 LV_CHART_AXIS_PRIMARY_Y);
    static lv_coord_t ui_Chart3_series_1_array[] = { 20, 22, 25, 28, 30, 31, 32, 30, 31, 32, 30 };
    lv_chart_set_ext_y_array(ui_Chart3, ui_Chart3_series_1, ui_Chart3_series_1_array);

    ui_Label3 = lv_label_create(ui_Panel5);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -143);
    lv_obj_set_y(ui_Label3, -171);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "Temperatur");

    ui_Panel6 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel6, 500);
    lv_obj_set_height(ui_Panel6, 440);
    lv_obj_set_x(ui_Panel6, -328);
    lv_obj_set_y(ui_Panel6, -5);
    lv_obj_set_align(ui_Panel6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel6, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel6, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel6, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart4 = lv_chart_create(ui_Panel6);
    lv_obj_set_width(ui_Chart4, 365);
    lv_obj_set_height(ui_Chart4, 330);
    lv_obj_set_x(ui_Chart4, -5);
    lv_obj_set_y(ui_Chart4, 14);
    lv_obj_set_align(ui_Chart4, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_Chart4, LV_CHART_TYPE_LINE);
    lv_chart_set_range(ui_Chart4, LV_CHART_AXIS_SECONDARY_Y, 0, 250);
    lv_chart_set_axis_tick(ui_Chart4, LV_CHART_AXIS_PRIMARY_X, 10, 5, 5, 2, false, 50);
    lv_chart_set_axis_tick(ui_Chart4, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 50);
    lv_chart_series_t * ui_Chart4_series_1 = lv_chart_add_series(ui_Chart4, lv_color_hex(0xEE1313),
                                                                 LV_CHART_AXIS_SECONDARY_Y);
    static lv_coord_t ui_Chart4_series_1_array[] = { 120, 121, 120, 120, 121, 120, 120, 121, 121, 121 };
    lv_chart_set_ext_y_array(ui_Chart4, ui_Chart4_series_1, ui_Chart4_series_1_array);

    ui_Label4 = lv_label_create(ui_Panel6);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -107);
    lv_obj_set_y(ui_Label4, -171);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Feuchtigkeitssensor");

    ui_Panel7 = lv_obj_create(ui_Panel12);
    lv_obj_set_width(ui_Panel7, 500);
    lv_obj_set_height(ui_Panel7, 440);
    lv_obj_set_x(ui_Panel7, 383);
    lv_obj_set_y(ui_Panel7, -1);
    lv_obj_set_align(ui_Panel7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_outline_color(ui_Panel7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Panel7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Panel7, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Panel7, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Panel7, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart5 = lv_chart_create(ui_Panel7);
    lv_obj_set_width(ui_Chart5, 365);
    lv_obj_set_height(ui_Chart5, 330);
    lv_obj_set_x(ui_Chart5, -12);
    lv_obj_set_y(ui_Chart5, 13);
    lv_obj_set_align(ui_Chart5, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_Chart5, LV_CHART_TYPE_LINE);
    lv_chart_set_axis_tick(ui_Chart5, LV_CHART_AXIS_PRIMARY_X, 10, 5, 5, 2, false, 50);
    lv_chart_set_axis_tick(ui_Chart5, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 50);
    lv_chart_series_t * ui_Chart5_series_1 = lv_chart_add_series(ui_Chart5, lv_color_hex(0x1E8500),
                                                                 LV_CHART_AXIS_PRIMARY_Y);
    static lv_coord_t ui_Chart5_series_1_array[] = { 0, 10, 20, 40, 80, 80, 40, 20, 10, 0 };
    lv_chart_set_ext_y_array(ui_Chart5, ui_Chart5_series_1, ui_Chart5_series_1_array);

    ui_Label6 = lv_label_create(ui_Panel7);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, -158);
    lv_obj_set_y(ui_Label6, -171);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "Air quality");

    lv_obj_add_event_cb(ui_Switch_Power_Chatcnc, ui_event_Switch_Power_Chatcnc, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Slider_Brightness_Light_Chatcnc, ui_event_Slider_Brightness_Light_Chatcnc, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Light_Chatcnc, ui_event_Switch_Power_Light_Chatcnc, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch_Power_Xiaomi1, ui_event_Switch_Power_Xiaomi1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Screen_CHAT_CNC, ui_event_Screen_CHAT_CNC, LV_EVENT_ALL, NULL);

}
void ui_Alveo_Info_Screen_screen_init(void)
{
    ui_Alveo_Info_Screen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Alveo_Info_Screen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel17 = lv_obj_create(ui_Alveo_Info_Screen);
    lv_obj_set_width(ui_Panel17, 700);
    lv_obj_set_height(ui_Panel17, 400);
    lv_obj_set_align(ui_Panel17, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel17, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label12 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, -170);
    lv_obj_set_y(ui_Label12, -160);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "Status Alveo3D  Filter");
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image11 = lv_img_create(ui_Panel17);
    lv_img_set_src(ui_Image11, &ui_img_close_png);
    lv_obj_set_width(ui_Image11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image11, 310);
    lv_obj_set_y(ui_Image11, -160);
    lv_obj_set_align(ui_Image11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image11, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image11, 270);

    ui_Arc2 = lv_arc_create(ui_Panel17);
    lv_obj_set_width(ui_Arc2, 250);
    lv_obj_set_height(ui_Arc2, 250);
    lv_obj_set_x(ui_Arc2, 140);
    lv_obj_set_y(ui_Arc2, 30);
    lv_obj_set_align(ui_Arc2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_arc_set_range(ui_Arc2, 0, 6);
    lv_arc_set_value(ui_Arc2, 4);

    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0xF33008), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_opa(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, 144);
    lv_obj_set_y(ui_Label7, 10);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "Betriebsstunden");
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label29 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label29, 140);
    lv_obj_set_y(ui_Label29, 35);
    lv_obj_set_align(ui_Label29, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label29, "[m]");
    lv_obj_set_style_text_font(ui_Label29, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label30 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label30, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label30, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label30, 205);
    lv_obj_set_y(ui_Label30, 130);
    lv_obj_set_align(ui_Label30, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label30, "6");
    lv_obj_set_style_text_font(ui_Label30, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label31 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label31, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label31, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label31, 75);
    lv_obj_set_y(ui_Label31, 130);
    lv_obj_set_align(ui_Label31, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label31, "0");
    lv_obj_set_style_text_font(ui_Label31, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1 = lv_arc_create(ui_Panel17);
    lv_obj_set_width(ui_Arc1, 250);
    lv_obj_set_height(ui_Arc1, 250);
    lv_obj_set_x(ui_Arc1, -140);
    lv_obj_set_y(ui_Arc1, 30);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                      LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Arc1, LV_SCROLLBAR_MODE_OFF);
    lv_arc_set_value(ui_Arc1, 20);
    lv_obj_set_style_arc_width(ui_Arc1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0xCB8800), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_blend_mode(ui_Arc1, LV_BLEND_MODE_NORMAL, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, -140);
    lv_obj_set_y(ui_Label14, 10);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "Filter Sattigung");
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label28 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label28, -141);
    lv_obj_set_y(ui_Label28, 35);
    lv_obj_set_align(ui_Label28, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label28, "[%]");
    lv_obj_set_style_text_font(ui_Label28, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label32 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label32, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label32, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label32, -205);
    lv_obj_set_y(ui_Label32, 130);
    lv_obj_set_align(ui_Label32, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label32, "0");
    lv_obj_set_style_text_font(ui_Label32, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label33 = lv_label_create(ui_Panel17);
    lv_obj_set_width(ui_Label33, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label33, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label33, -75);
    lv_obj_set_y(ui_Label33, 130);
    lv_obj_set_align(ui_Label33, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label33, "100");
    lv_obj_set_style_text_font(ui_Label33, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Image11, ui_event_Image11, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen_DP_screen_init();
    ui_Screen_CHAT_CNC_screen_init();
    ui_Alveo_Info_Screen_screen_init();
    lv_disp_load_scr(ui_Screen_DP);
}
