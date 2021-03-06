#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_UP
#define LV_ATTRIBUTE_IMG_UP
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_UP uint8_t a_up_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Blue: 2 bit, Green: 3 bit, Red: 3 bit*/
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x4e, 0x04, 0x20, 0x24, 0x24, 0x4d, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x45, 0x49, 0xdb, 0xe0, 0xe0, 0xe0, 0xe0, 0xbb, 0x49, 0x45, 0xfb, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xd7, 0x25, 0xdb, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdb, 0x24, 0xdb, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x25, 0xdf, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0x24, 0xdb, 0xff, 0xff, 
  0xff, 0xff, 0x45, 0xdb, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdb, 0x29, 0xff, 0xff, 
  0xff, 0xb7, 0x49, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xbb, 0xdb, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x69, 0xb7, 0xff, 
  0xff, 0x49, 0xdb, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdb, 0x00, 0x00, 0xbb, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xbb, 0x6e, 0xff, 
  0xff, 0x24, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xd7, 0x24, 0x6e, 0x6e, 0x25, 0xd7, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x24, 0xff, 
  0xff, 0x24, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x92, 0xff, 0x92, 0x92, 0xff, 0x96, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x20, 0xff, 
  0xff, 0x24, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x92, 0xb2, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x25, 0xff, 
  0xff, 0x04, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x92, 0x92, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x25, 0xff, 
  0xff, 0x6a, 0xdb, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x96, 0x92, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xb7, 0x6e, 0xff, 
  0xff, 0xb7, 0x49, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x69, 0xb7, 0xff, 
  0xff, 0xff, 0x25, 0xdb, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdb, 0x29, 0xff, 0xff, 
  0xff, 0xff, 0xdb, 0x24, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0x25, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xdb, 0x24, 0xdb, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xdb, 0x25, 0xdb, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xdb, 0x29, 0x69, 0xbb, 0xe0, 0xe0, 0xe0, 0xe0, 0xb7, 0x69, 0x49, 0xfb, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb7, 0x6e, 0x24, 0x20, 0x25, 0x25, 0x69, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit*/
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xde, 0xff, 0x55, 0xad, 0xac, 0x52, 0xa3, 0x10, 0x63, 0x18, 0xa3, 0x10, 0xc3, 0x20, 0xca, 0x52, 0x76, 0xad, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xdf, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0xf7, 0xff, 0xf7, 0xff, 0xff, 0x99, 0xd6, 0x45, 0x39, 0x68, 0x4a, 0xd5, 0xbd, 0x40, 0xf8, 0x20, 0xf8, 0x00, 0xf0, 0x02, 0xf8, 0xd6, 0xad, 0x48, 0x4a, 0x64, 0x31, 0x5b, 0xd6, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x34, 0xbd, 0xe4, 0x18, 0x3a, 0xbe, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x02, 0xf8, 0x20, 0xf8, 0x20, 0xf8, 0xf7, 0xbd, 0xe3, 0x20, 0x96, 0xb5, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xb9, 0xd6, 0xe4, 0x18, 0x3d, 0xd7, 0x00, 0xf8, 0x41, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x20, 0xf8, 0x21, 0xe8, 0x01, 0xf8, 0xdc, 0xde, 0xe3, 0x28, 0x7a, 0xd6, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0xff, 0x45, 0x39, 0x1a, 0xbe, 0x00, 0xf8, 0x40, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x01, 0xf8, 0x40, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x34, 0xbe, 0xa7, 0x29, 0xbf, 0xff, 0xff, 0xff, 
  0xdf, 0xff, 0x75, 0xad, 0x68, 0x4a, 0x21, 0xf8, 0x21, 0xf8, 0x00, 0xf8, 0x02, 0xf8, 0x00, 0xf8, 0x22, 0xf8, 0xd5, 0xad, 0xb6, 0xbd, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x02, 0xf8, 0x00, 0xf8, 0x02, 0xf8, 0x8a, 0x5a, 0x77, 0xa5, 0xde, 0xff, 
  0xff, 0xff, 0x8c, 0x4a, 0xb4, 0xb5, 0x01, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x60, 0xf8, 0xb5, 0xbd, 0x01, 0x10, 0x41, 0x00, 0x95, 0xb5, 0x20, 0xf0, 0x00, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x20, 0xf8, 0xb5, 0xad, 0xad, 0x62, 0xfe, 0xff, 
  0xff, 0xff, 0xe1, 0x20, 0x01, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x96, 0xb5, 0xe4, 0x18, 0x6c, 0x63, 0x2c, 0x63, 0x24, 0x21, 0x76, 0xb5, 0x40, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0xe3, 0x18, 0xfe, 0xff, 
  0xdf, 0xff, 0x82, 0x10, 0x01, 0xf0, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x40, 0xf8, 0x71, 0x84, 0x1d, 0xef, 0x30, 0x84, 0xf1, 0x93, 0xdb, 0xe6, 0xb2, 0x84, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x82, 0x18, 0xdd, 0xf7, 
  0x9f, 0xff, 0xa1, 0x28, 0x41, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x40, 0xf8, 0x00, 0xf8, 0x21, 0xf8, 0x00, 0xf8, 0x51, 0x8c, 0x10, 0x94, 0x20, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x20, 0xf8, 0x01, 0xf8, 0x00, 0xf0, 0xc5, 0x18, 0xff, 0xff, 
  0xfe, 0xff, 0xa1, 0x08, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x40, 0xf8, 0x12, 0x84, 0x52, 0x8c, 0x20, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0xa4, 0x18, 0xff, 0xf7, 
  0xff, 0xff, 0x6c, 0x62, 0xb6, 0xbd, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x41, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x90, 0x84, 0x50, 0x8c, 0x00, 0xf0, 0x01, 0xf0, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x74, 0xb5, 0xad, 0x62, 0xfe, 0xff, 
  0xff, 0xff, 0x55, 0xad, 0x69, 0x4a, 0x20, 0xf8, 0x42, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x21, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x40, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x22, 0xf8, 0x2a, 0x52, 0x76, 0xb5, 0xfe, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x66, 0x31, 0xd7, 0xc5, 0x00, 0xf8, 0x00, 0xf8, 0x40, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x00, 0xf0, 0x22, 0xf8, 0x00, 0xf8, 0x00, 0xf0, 0x01, 0xf8, 0x20, 0xf0, 0x00, 0xf8, 0xd5, 0xbd, 0x86, 0x31, 0xdf, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x9b, 0xd6, 0x24, 0x21, 0xdb, 0xd6, 0x21, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf0, 0x40, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0xdc, 0xde, 0xc4, 0x20, 0xba, 0xde, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x96, 0xb5, 0xe3, 0x28, 0x34, 0xbe, 0x03, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x21, 0xf8, 0x02, 0xf8, 0xf5, 0xbd, 0xc4, 0x28, 0xb7, 0xbd, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0x7a, 0xce, 0x87, 0x21, 0x6a, 0x5a, 0xb5, 0xad, 0x01, 0xf8, 0x00, 0xf8, 0x20, 0xf0, 0x00, 0xf8, 0x94, 0xb5, 0x4a, 0x5a, 0x86, 0x31, 0x9a, 0xd6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xdf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0x77, 0xa5, 0xac, 0x62, 0xc3, 0x18, 0x62, 0x18, 0xc5, 0x10, 0xc5, 0x20, 0x8c, 0x5a, 0x55, 0xad, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 
  0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xf7, 0xff, 0xff, 0xff, 0xf7, 0xfd, 0xf7, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit BUT the 2 bytes are swapped*/
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xde, 0xad, 0x55, 0x52, 0xac, 0x10, 0xa3, 0x18, 0x63, 0x10, 0xa3, 0x20, 0xc3, 0x52, 0xca, 0xad, 0x76, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xdf, 0xff, 0xff, 
  0xff, 0xff, 0xf7, 0xfe, 0xf7, 0xff, 0xff, 0xff, 0xd6, 0x99, 0x39, 0x45, 0x4a, 0x68, 0xbd, 0xd5, 0xf8, 0x40, 0xf8, 0x20, 0xf0, 0x00, 0xf8, 0x02, 0xad, 0xd6, 0x4a, 0x48, 0x31, 0x64, 0xd6, 0x5b, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbd, 0x34, 0x18, 0xe4, 0xbe, 0x3a, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x02, 0xf8, 0x20, 0xf8, 0x20, 0xbd, 0xf7, 0x20, 0xe3, 0xb5, 0x96, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 
  0xff, 0xff, 0xff, 0xff, 0xd6, 0xb9, 0x18, 0xe4, 0xd7, 0x3d, 0xf8, 0x00, 0xf8, 0x41, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x20, 0xe8, 0x21, 0xf8, 0x01, 0xde, 0xdc, 0x28, 0xe3, 0xd6, 0x7a, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xfe, 0x39, 0x45, 0xbe, 0x1a, 0xf8, 0x00, 0xf8, 0x40, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x01, 0xf8, 0x40, 0xf8, 0x00, 0xf8, 0x00, 0xbe, 0x34, 0x29, 0xa7, 0xff, 0xbf, 0xff, 0xff, 
  0xff, 0xdf, 0xad, 0x75, 0x4a, 0x68, 0xf8, 0x21, 0xf8, 0x21, 0xf8, 0x00, 0xf8, 0x02, 0xf8, 0x00, 0xf8, 0x22, 0xad, 0xd5, 0xbd, 0xb6, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x02, 0xf8, 0x00, 0xf8, 0x02, 0x5a, 0x8a, 0xa5, 0x77, 0xff, 0xde, 
  0xff, 0xff, 0x4a, 0x8c, 0xb5, 0xb4, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x60, 0xbd, 0xb5, 0x10, 0x01, 0x00, 0x41, 0xb5, 0x95, 0xf0, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x20, 0xad, 0xb5, 0x62, 0xad, 0xff, 0xfe, 
  0xff, 0xff, 0x20, 0xe1, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xb5, 0x96, 0x18, 0xe4, 0x63, 0x6c, 0x63, 0x2c, 0x21, 0x24, 0xb5, 0x76, 0xf8, 0x40, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x01, 0x18, 0xe3, 0xff, 0xfe, 
  0xff, 0xdf, 0x10, 0x82, 0xf0, 0x01, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x40, 0x84, 0x71, 0xef, 0x1d, 0x84, 0x30, 0x93, 0xf1, 0xe6, 0xdb, 0x84, 0xb2, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x00, 0x18, 0x82, 0xf7, 0xdd, 
  0xff, 0x9f, 0x28, 0xa1, 0xf8, 0x41, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x40, 0xf8, 0x00, 0xf8, 0x21, 0xf8, 0x00, 0x8c, 0x51, 0x94, 0x10, 0xf8, 0x20, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x20, 0xf8, 0x01, 0xf0, 0x00, 0x18, 0xc5, 0xff, 0xff, 
  0xff, 0xfe, 0x08, 0xa1, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x40, 0x84, 0x12, 0x8c, 0x52, 0xf8, 0x20, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x01, 0x18, 0xa4, 0xf7, 0xff, 
  0xff, 0xff, 0x62, 0x6c, 0xbd, 0xb6, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x41, 0xf8, 0x20, 0xf8, 0x00, 0x84, 0x90, 0x8c, 0x50, 0xf0, 0x00, 0xf0, 0x01, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x00, 0xb5, 0x74, 0x62, 0xad, 0xff, 0xfe, 
  0xff, 0xff, 0xad, 0x55, 0x4a, 0x69, 0xf8, 0x20, 0xf8, 0x42, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x21, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x40, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x22, 0x52, 0x2a, 0xb5, 0x76, 0xff, 0xfe, 
  0xff, 0xff, 0xff, 0xff, 0x31, 0x66, 0xc5, 0xd7, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x40, 0xf8, 0x00, 0xf8, 0x20, 0xf0, 0x00, 0xf8, 0x22, 0xf8, 0x00, 0xf0, 0x00, 0xf8, 0x01, 0xf0, 0x20, 0xf8, 0x00, 0xbd, 0xd5, 0x31, 0x86, 0xff, 0xdf, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xd6, 0x9b, 0x21, 0x24, 0xd6, 0xdb, 0xf8, 0x21, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x00, 0xf8, 0x00, 0xf0, 0x00, 0xf8, 0x40, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x20, 0xde, 0xdc, 0x20, 0xc4, 0xde, 0xba, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb5, 0x96, 0x28, 0xe3, 0xbe, 0x34, 0xf8, 0x03, 0xf8, 0x00, 0xf8, 0x00, 0xf8, 0x20, 0xf8, 0x01, 0xf8, 0x00, 0xf8, 0x21, 0xf8, 0x02, 0xbd, 0xf5, 0x28, 0xc4, 0xbd, 0xb7, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xce, 0x7a, 0x21, 0x87, 0x5a, 0x6a, 0xad, 0xb5, 0xf8, 0x01, 0xf8, 0x00, 0xf0, 0x20, 0xf8, 0x00, 0xb5, 0x94, 0x5a, 0x4a, 0x31, 0x86, 0xd6, 0x9a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xdf, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xa5, 0x77, 0x62, 0xac, 0x18, 0xc3, 0x18, 0x62, 0x10, 0xc5, 0x20, 0xc5, 0x5a, 0x8c, 0xad, 0x55, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 
  0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xfe, 0xff, 0xfe, 0xf7, 0xfe, 0xff, 0xff, 0xf7, 0xff, 0xf7, 0xfd, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Blue: 8 bit, Green: 8 bit, Red: 8 bit, Fix 0xFF: 8 bit, */
  0xff, 0xfc, 0xff, 0xff, 0xfe, 0xff, 0xfa, 0xff, 0xf7, 0xfb, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xfe, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xfc, 0xfe, 0xfe, 0xff, 0xf6, 0xff, 0xff, 0xff, 0xf0, 0xfb, 0xf9, 0xff, 0xff, 0xfc, 0xf9, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xf8, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xfa, 0xfd, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xff, 
  0xf9, 0xfb, 0xf5, 0xff, 0xfa, 0xfd, 0xff, 0xff, 0xf8, 0xff, 0xf7, 0xff, 0xfb, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xed, 0xf8, 0xf6, 0xff, 0xa7, 0xaa, 0xa8, 0xff, 0x64, 0x53, 0x50, 0xff, 0x18, 0x15, 0x0d, 0xff, 0x17, 0x0d, 0x1a, 0xff, 0x18, 0x14, 0x13, 0xff, 0x1a, 0x18, 0x24, 0xff, 0x4d, 0x58, 0x4e, 0xff, 0xae, 0xae, 0xa8, 0xff, 0xf7, 0xfe, 0xf9, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xfb, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xfd, 0xfc, 0xfe, 0xff, 
  0xf7, 0xfb, 0xff, 0xff, 0xf3, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xf2, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xca, 0xd2, 0xd2, 0xff, 0x27, 0x28, 0x36, 0xff, 0x41, 0x4c, 0x49, 0xff, 0xa5, 0xb8, 0xb5, 0xff, 0x03, 0x07, 0xff, 0xff, 0x00, 0x03, 0xff, 0xff, 0x04, 0x00, 0xf4, 0xff, 0x0d, 0x00, 0xf8, 0xff, 0xb3, 0xb7, 0xac, 0xff, 0x44, 0x49, 0x48, 0xff, 0x22, 0x2e, 0x32, 0xff, 0xd9, 0xca, 0xd2, 0xff, 0xfa, 0xf9, 0xff, 0xff, 0xfb, 0xfd, 0xff, 0xff, 0xfa, 0xff, 0xfc, 0xff, 0xfb, 0xff, 0xff, 0xff, 
  0xff, 0xfc, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xa3, 0xa6, 0xbb, 0xff, 0x24, 0x1e, 0x19, 0xff, 0xd1, 0xc4, 0xbc, 0xff, 0x00, 0x00, 0xf6, 0xff, 0x08, 0x00, 0xff, 0xff, 0x00, 0x00, 0xf6, 0xff, 0x00, 0x01, 0xfe, 0xff, 0x00, 0x06, 0xff, 0xff, 0x0e, 0x00, 0xfc, 0xff, 0x00, 0x05, 0xff, 0xff, 0x00, 0x03, 0xfa, 0xff, 0xb8, 0xbd, 0xbb, 0xff, 0x1a, 0x1c, 0x24, 0xff, 0xb2, 0xb1, 0xb3, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xf8, 0xff, 0xfc, 0xff, 0xf5, 0xf5, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0xff, 0xff, 0xfd, 0xf9, 0xff, 0xcb, 0xd3, 0xd3, 0xff, 0x24, 0x1e, 0x19, 0xff, 0xe6, 0xe5, 0xd0, 0xff, 0x00, 0x00, 0xf9, 0xff, 0x0b, 0x08, 0xfe, 0xff, 0x00, 0x00, 0xf9, 0xff, 0x04, 0x02, 0xfc, 0xff, 0x00, 0x00, 0xfb, 0xff, 0x00, 0x00, 0xfc, 0xff, 0x07, 0x00, 0xf8, 0xff, 0x00, 0x06, 0xff, 0xff, 0x06, 0x04, 0xea, 0xff, 0x05, 0x02, 0xff, 0xff, 0xdf, 0xd8, 0xdb, 0xff, 0x1b, 0x1b, 0x27, 0xff, 0xd3, 0xce, 0xcd, 0xff, 0xfe, 0xff, 0xfd, 0xff, 0xfc, 0xfd, 0xff, 0xff, 
  0xfd, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xfd, 0xff, 0x27, 0x28, 0x36, 0xff, 0xce, 0xc1, 0xb9, 0xff, 0x00, 0x00, 0xf9, 0xff, 0x00, 0x09, 0xff, 0xff, 0x02, 0x00, 0xfc, 0xff, 0x0b, 0x00, 0xff, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x06, 0x02, 0xff, 0xff, 0x03, 0x00, 0xfe, 0xff, 0x08, 0x02, 0xff, 0xff, 0x06, 0x00, 0xfb, 0xff, 0x00, 0x0a, 0xff, 0xff, 0x01, 0x02, 0xf7, 0xff, 0x00, 0x01, 0xfe, 0xff, 0xa3, 0xc4, 0xb6, 0xff, 0x36, 0x33, 0x25, 0xff, 0xff, 0xf5, 0xff, 0xff, 0xfb, 0xff, 0xf7, 0xff, 
  0xff, 0xfa, 0xfb, 0xff, 0xaa, 0xad, 0xab, 0xff, 0x42, 0x4d, 0x4a, 0xff, 0x05, 0x04, 0xfe, 0xff, 0x08, 0x05, 0xfb, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x0e, 0x00, 0xfc, 0xff, 0x00, 0x02, 0xfe, 0xff, 0x0d, 0x03, 0xfd, 0xff, 0xab, 0xb8, 0xaa, 0xff, 0xb3, 0xb5, 0xb5, 0xff, 0x00, 0x03, 0xff, 0xff, 0x04, 0x02, 0xfc, 0xff, 0x00, 0x00, 0xf8, 0xff, 0x12, 0x00, 0xff, 0xff, 0x00, 0x01, 0xf9, 0xff, 0x12, 0x00, 0xfd, 0xff, 0x52, 0x4f, 0x58, 0xff, 0xb5, 0xac, 0xa2, 0xff, 0xf0, 0xf8, 0xff, 0xff, 
  0xfb, 0xff, 0xff, 0xff, 0x60, 0x4f, 0x4c, 0xff, 0xa2, 0xb5, 0xb2, 0xff, 0x07, 0x00, 0xfe, 0xff, 0x00, 0x00, 0xfa, 0xff, 0x0c, 0x00, 0xff, 0xff, 0x00, 0x00, 0xfc, 0xff, 0x00, 0x0c, 0xf5, 0xff, 0xac, 0xb6, 0xb6, 0xff, 0x06, 0x02, 0x0d, 0xff, 0x09, 0x09, 0x03, 0xff, 0xa7, 0xb2, 0xaf, 0xff, 0x00, 0x06, 0xf0, 0xff, 0x02, 0x02, 0xff, 0xff, 0x00, 0x00, 0xf6, 0xff, 0x05, 0x02, 0xff, 0xff, 0x00, 0x03, 0xfa, 0xff, 0xa5, 0xb3, 0xa8, 0xff, 0x65, 0x55, 0x60, 0xff, 0xf1, 0xff, 0xff, 0xff, 
  0xff, 0xfd, 0xf9, 0xff, 0x05, 0x1c, 0x1e, 0xff, 0x0c, 0x00, 0xfb, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x00, 0x04, 0xfe, 0xff, 0x00, 0x01, 0xfe, 0xff, 0x04, 0x02, 0xff, 0xff, 0xb1, 0xb0, 0xb4, 0xff, 0x20, 0x1c, 0x1b, 0xff, 0x62, 0x6b, 0x61, 0xff, 0x62, 0x64, 0x5e, 0xff, 0x23, 0x26, 0x24, 0xff, 0xb2, 0xab, 0xb2, 0xff, 0x00, 0x08, 0xf6, 0xff, 0x00, 0x00, 0xfc, 0xff, 0x00, 0x02, 0xff, 0xff, 0x00, 0x00, 0xfb, 0xff, 0x09, 0x01, 0xff, 0xff, 0x19, 0x1c, 0x1a, 0xff, 0xf3, 0xff, 0xff, 0xff, 
  0xf5, 0xf8, 0xff, 0xff, 0x12, 0x11, 0x13, 0xff, 0x09, 0x00, 0xf3, 0xff, 0x00, 0x00, 0xfd, 0xff, 0x0c, 0x01, 0xf7, 0xff, 0x00, 0x00, 0xfd, 0xff, 0x00, 0x07, 0xf8, 0xff, 0x89, 0x8d, 0x81, 0xff, 0xe5, 0xe0, 0xe9, 0xff, 0x81, 0x85, 0x80, 0xff, 0x88, 0x7e, 0x8f, 0xff, 0xd9, 0xd8, 0xe1, 0xff, 0x8d, 0x93, 0x80, 0xff, 0x00, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xfd, 0xff, 0x00, 0x00, 0xf7, 0xff, 0x00, 0x06, 0xff, 0xff, 0x00, 0x00, 0xfd, 0xff, 0x14, 0x10, 0x1c, 0xff, 0xe6, 0xfa, 0xee, 0xff, 
  0xff, 0xf2, 0xf5, 0xff, 0x09, 0x15, 0x27, 0xff, 0x05, 0x07, 0xf5, 0xff, 0x00, 0x02, 0xff, 0xff, 0x08, 0x00, 0xff, 0xff, 0x00, 0x08, 0xf9, 0xff, 0x04, 0x00, 0xfb, 0xff, 0x06, 0x06, 0xff, 0xff, 0x02, 0x00, 0xf5, 0xff, 0x8b, 0x89, 0x88, 0xff, 0x80, 0x82, 0x94, 0xff, 0x00, 0x03, 0xf9, 0xff, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0xfc, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x02, 0x05, 0xfa, 0xff, 0x08, 0x00, 0xfd, 0xff, 0x00, 0x01, 0xef, 0xff, 0x2b, 0x1a, 0x17, 0xff, 0xff, 0xfe, 0xfd, 0xff, 
  0xef, 0xff, 0xf7, 0xff, 0x0a, 0x14, 0x08, 0xff, 0x0a, 0x00, 0xfe, 0xff, 0x00, 0x01, 0xfc, 0xff, 0x00, 0x00, 0xfb, 0xff, 0x06, 0x01, 0xf7, 0xff, 0x00, 0x01, 0xfe, 0xff, 0x00, 0x00, 0xf9, 0xff, 0x00, 0x08, 0xfd, 0xff, 0x90, 0x82, 0x83, 0xff, 0x8e, 0x87, 0x8c, 0xff, 0x00, 0x06, 0xff, 0xff, 0x09, 0x00, 0xfd, 0xff, 0x00, 0x01, 0xfe, 0xff, 0x00, 0x06, 0xff, 0xff, 0x04, 0x00, 0xfd, 0xff, 0x00, 0x02, 0xff, 0xff, 0x07, 0x02, 0xfd, 0xff, 0x21, 0x13, 0x19, 0xff, 0xfe, 0xff, 0xf1, 0xff, 
  0xff, 0xfd, 0xf8, 0xff, 0x61, 0x4e, 0x5d, 0xff, 0xaf, 0xb3, 0xb8, 0xff, 0x00, 0x00, 0xfd, 0xff, 0x00, 0x00, 0xfb, 0xff, 0x04, 0x02, 0xff, 0xff, 0x07, 0x08, 0xfd, 0xff, 0x00, 0x06, 0xfd, 0xff, 0x00, 0x00, 0xf9, 0xff, 0x81, 0x91, 0x80, 0xff, 0x81, 0x87, 0x8c, 0xff, 0x02, 0x00, 0xf1, 0xff, 0x08, 0x00, 0xf2, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x00, 0x02, 0xff, 0xff, 0x03, 0x01, 0xff, 0xff, 0x01, 0x02, 0xf7, 0xff, 0xa3, 0xad, 0xad, 0xff, 0x67, 0x56, 0x61, 0xff, 0xf1, 0xff, 0xfc, 0xff, 
  0xfa, 0xff, 0xfe, 0xff, 0xac, 0xaa, 0xa9, 0xff, 0x4b, 0x4b, 0x45, 0xff, 0x00, 0x05, 0xfc, 0xff, 0x14, 0x0a, 0xf7, 0xff, 0x09, 0x00, 0xfd, 0xff, 0x00, 0x00, 0xf6, 0xff, 0x01, 0x01, 0xff, 0xff, 0x07, 0x03, 0xff, 0xff, 0x00, 0x03, 0xfc, 0xff, 0x04, 0x00, 0xfd, 0xff, 0x00, 0x03, 0xff, 0xff, 0x00, 0x07, 0xff, 0xff, 0x00, 0x05, 0xff, 0xff, 0x00, 0x00, 0xf6, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x10, 0x05, 0xfc, 0xff, 0x4d, 0x46, 0x53, 0xff, 0xaf, 0xae, 0xb0, 0xff, 0xf1, 0xff, 0xff, 0xff, 
  0xfb, 0xff, 0xff, 0xff, 0xfb, 0xfc, 0xff, 0xff, 0x31, 0x2c, 0x2d, 0xff, 0xb5, 0xb8, 0xbd, 0xff, 0x00, 0x00, 0xfe, 0xff, 0x00, 0x00, 0xfe, 0xff, 0x02, 0x07, 0xff, 0xff, 0x00, 0x02, 0xfa, 0xff, 0x00, 0x06, 0xf9, 0xff, 0x00, 0x00, 0xf2, 0xff, 0x14, 0x03, 0xff, 0xff, 0x00, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xef, 0xff, 0x0c, 0x01, 0xff, 0xff, 0x00, 0x05, 0xf2, 0xff, 0x03, 0x01, 0xff, 0xff, 0xab, 0xba, 0xb6, 0xff, 0x33, 0x31, 0x30, 0xff, 0xfc, 0xfa, 0xf9, 0xff, 0xff, 0xff, 0xf8, 0xff, 
  0xff, 0xfd, 0xff, 0xff, 0xfc, 0xff, 0xf6, 0xff, 0xd5, 0xcf, 0xd0, 0xff, 0x1d, 0x26, 0x23, 0xff, 0xd8, 0xd8, 0xd2, 0xff, 0x06, 0x06, 0xff, 0xff, 0x02, 0x00, 0xfa, 0xff, 0x01, 0x03, 0xfb, 0xff, 0x00, 0x00, 0xfe, 0xff, 0x04, 0x00, 0xff, 0xff, 0x00, 0x00, 0xf2, 0xff, 0x02, 0x07, 0xff, 0xff, 0x06, 0x00, 0xff, 0xff, 0x00, 0x00, 0xfb, 0xff, 0x02, 0x04, 0xfc, 0xff, 0xdf, 0xd9, 0xda, 0xff, 0x21, 0x17, 0x23, 0xff, 0xd1, 0xd5, 0xd6, 0xff, 0xfa, 0xff, 0xfb, 0xff, 0xff, 0xfb, 0xff, 0xff, 
  0xfa, 0xfd, 0xff, 0xff, 0xf9, 0xff, 0xf7, 0xff, 0xfd, 0xfc, 0xff, 0xff, 0xb2, 0xb1, 0xb3, 0xff, 0x1b, 0x1b, 0x27, 0xff, 0xa3, 0xc4, 0xb6, 0xff, 0x15, 0x00, 0xff, 0xff, 0x00, 0x01, 0xf8, 0xff, 0x00, 0x00, 0xfe, 0xff, 0x00, 0x03, 0xff, 0xff, 0x09, 0x01, 0xff, 0xff, 0x00, 0x00, 0xfb, 0xff, 0x05, 0x06, 0xfb, 0xff, 0x0d, 0x02, 0xf9, 0xff, 0xac, 0xbb, 0xb7, 0xff, 0x23, 0x19, 0x25, 0xff, 0xb5, 0xb5, 0xb5, 0xff, 0xf8, 0xf8, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 
  0xff, 0xfe, 0xff, 0xff, 0xfd, 0xff, 0xf2, 0xff, 0xfb, 0xfd, 0xff, 0xff, 0xfb, 0xfc, 0xfa, 0xff, 0xd1, 0xcc, 0xcb, 0xff, 0x35, 0x32, 0x24, 0xff, 0x51, 0x4e, 0x57, 0xff, 0xa5, 0xb3, 0xa8, 0xff, 0x06, 0x00, 0xfd, 0xff, 0x01, 0x01, 0xff, 0xff, 0x00, 0x03, 0xf1, 0xff, 0x04, 0x02, 0xfc, 0xff, 0xa3, 0xaf, 0xaf, 0xff, 0x51, 0x4a, 0x57, 0xff, 0x34, 0x32, 0x31, 0xff, 0xce, 0xd0, 0xd1, 0xff, 0xfb, 0xfb, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfa, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xfa, 0xff, 0xfc, 0xff, 0xf8, 0xff, 0xfc, 0xff, 0xfe, 0xff, 0xfd, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xb5, 0xac, 0xa2, 0xff, 0x64, 0x54, 0x5f, 0xff, 0x18, 0x19, 0x17, 0xff, 0x13, 0x0c, 0x19, 0xff, 0x26, 0x17, 0x14, 0xff, 0x26, 0x18, 0x1e, 0xff, 0x60, 0x50, 0x5b, 0xff, 0xab, 0xaa, 0xac, 0xff, 0xf9, 0xf7, 0xf6, 0xff, 0xfb, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 0xfa, 0xfa, 0xfa, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf4, 0xff, 0xfe, 0xfd, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xff, 0xff, 0xfd, 0xfe, 0xff, 0xff, 0xfb, 0xff, 0xf7, 0xff, 0xee, 0xf6, 0xfd, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xff, 0xed, 0xfe, 0xf3, 0xff, 0xfe, 0xfc, 0xfb, 0xff, 0xfb, 0xff, 0xee, 0xff, 0xe6, 0xfb, 0xf3, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
#endif
};

const lv_img_dsc_t a_up = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .data = a_up_map,
};

