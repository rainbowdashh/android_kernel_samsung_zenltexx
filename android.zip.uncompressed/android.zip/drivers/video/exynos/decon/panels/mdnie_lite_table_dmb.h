#ifndef __MDNIE_LITE_TABLE_DMB_H__
#define __MDNIE_LITE_TABLE_DMB_H__

/* 2015.01.08 */

#if defined(CONFIG_DECON_LCD_S6E3FA2)
static char STANDARD_DMB_2[] = {
	/* start */
	0xEB,
	0x01, /* mdnie_en */
	0x00, /* data_width mask 00 0000 */
	0x03, /* ascr_roi 1 ascr 00 1 0 */
	0x32, /* algo_roi 1 algo lce_roi 1 lce 00 1 0 00 1 0 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static char STANDARD_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x01, /* nr sharp cs gamma 0000 */
	0xff, /* nr_mask_th */
	0x00, /* sharpen_weight 10 */
	0x40,
	0x00, /* sharpen_maxplus 11 */
	0xa0,
	0x00, /* sharpen_maxminus 11 */
	0xa0,
	0x01, /* cs_gain 10 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x00, /* ascr_Rg */
	0xff, /* ascr_Cb */
	0x00, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x00, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x00, /* ascr_Gb */
	0xff, /* ascr_Yr */
	0x00, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x00, /* ascr_Bg */
	0x00, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xff, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xff, /* ascr_Wb */
	0x00, /* ascr_Kb */
	/* end */
};

static unsigned char NATURAL_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char NATURAL_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0a, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0x00,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x00,
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x16, /* ascr_Rg */
	0xe5, /* ascr_Cb */
	0x0e, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x14, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xd9, /* ascr_Mb */
	0x04, /* ascr_Gb */
	0xfc, /* ascr_Yr */
	0x26, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x1b, /* ascr_Bg */
	0x23, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xf8, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xef, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

static unsigned char DYNAMIC_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char DYNAMIC_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0e, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0xa0,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x0f, /* curve_1_a */
	0x00, /* curve_2_b */
	0x0f, /* curve_2_a */
	0x00, /* curve_3_b */
	0x0f, /* curve_3_a */
	0x00, /* curve_4_b */
	0x0f, /* curve_4_a */
	0x09, /* curve_5_b */
	0xa2, /* curve_5_a */
	0x09, /* curve_6_b */
	0xa2, /* curve_6_a */
	0x09, /* curve_7_b */
	0xa2, /* curve_7_a */
	0x09, /* curve_8_b */
	0xa2, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa2, /* curve_9_a */
	0x09, /* curve10_b */
	0xa2, /* curve10_a */
	0x0a, /* curve11_b */
	0xa2, /* curve11_a */
	0x0a, /* curve12_b */
	0xa2, /* curve12_a */
	0x0a, /* curve13_b */
	0xa2, /* curve13_a */
	0x0a, /* curve14_b */
	0xa2, /* curve14_a */
	0x0a, /* curve15_b */
	0xa2, /* curve15_a */
	0x0a, /* curve16_b */
	0xa2, /* curve16_a */
	0x0a, /* curve17_b */
	0xa2, /* curve17_a */
	0x0a, /* curve18_b */
	0xa2, /* curve18_a */
	0x0f, /* curve19_b */
	0xa4, /* curve19_a */
	0x0f, /* curve20_b */
	0xa4, /* curve20_a */
	0x0f, /* curve21_b */
	0xa4, /* curve21_a */
	0x23, /* curve22_b */
	0x1c, /* curve22_a */
	0x48, /* curve23_b */
	0x17, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x20,
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x00, /* ascr_Rg */
	0xff, /* ascr_Cb */
	0x00, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x00, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x00, /* ascr_Gb */
	0xff, /* ascr_Yr */
	0x00, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x00, /* ascr_Bg */
	0x00, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xff, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xff, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

static unsigned char MOVIE_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char MOVIE_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0a, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0x00,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x00,
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x82, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x2d, /* ascr_Rg */
	0xec, /* ascr_Cb */
	0x21, /* ascr_Rb */
	0xef, /* ascr_Mr */
	0x57, /* ascr_Gr */
	0x36, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x28, /* ascr_Gb */
	0xf7, /* ascr_Yr */
	0x34, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x24, /* ascr_Bg */
	0x44, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xf8, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xef, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

static unsigned char AUTO_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char AUTO_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0a, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0x80,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x00,
	0x2c, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x40, /* ascr_skin_Rg */
	0x40, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x00, /* ascr_Rg */
	0xff, /* ascr_Cb */
	0x00, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x00, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x00, /* ascr_Gb */
	0xff, /* ascr_Yr */
	0x00, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x00, /* ascr_Bg */
	0x00, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xff, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xff, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

#elif defined(CONFIG_DECON_LCD_S6E3HA0)
static unsigned char STANDARD_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char STANDARD_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0a, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0x80,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x00,
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x00, /* ascr_Rg */
	0xff, /* ascr_Cb */
	0x00, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x00, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x00, /* ascr_Gb */
	0xff, /* ascr_Yr */
	0x00, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x00, /* ascr_Bg */
	0x00, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xff, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xff, /* ascr_Wb */
	0x00, /* ascr_Kb */
};


static unsigned char NATURAL_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char NATURAL_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0a, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0x00,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x00,
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x16, /* ascr_Rg */
	0xe5, /* ascr_Cb */
	0x0e, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x14, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xd9, /* ascr_Mb */
	0x04, /* ascr_Gb */
	0xfc, /* ascr_Yr */
	0x26, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x1b, /* ascr_Bg */
	0x23, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xf8, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xef, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

static unsigned char DYNAMIC_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char DYNAMIC_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0e, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0xa0,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x0f, /* curve_1_a */
	0x00, /* curve_2_b */
	0x0f, /* curve_2_a */
	0x00, /* curve_3_b */
	0x0f, /* curve_3_a */
	0x00, /* curve_4_b */
	0x0f, /* curve_4_a */
	0x09, /* curve_5_b */
	0xa2, /* curve_5_a */
	0x09, /* curve_6_b */
	0xa2, /* curve_6_a */
	0x09, /* curve_7_b */
	0xa2, /* curve_7_a */
	0x09, /* curve_8_b */
	0xa2, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa2, /* curve_9_a */
	0x09, /* curve10_b */
	0xa2, /* curve10_a */
	0x0a, /* curve11_b */
	0xa2, /* curve11_a */
	0x0a, /* curve12_b */
	0xa2, /* curve12_a */
	0x0a, /* curve13_b */
	0xa2, /* curve13_a */
	0x0a, /* curve14_b */
	0xa2, /* curve14_a */
	0x0a, /* curve15_b */
	0xa2, /* curve15_a */
	0x0a, /* curve16_b */
	0xa2, /* curve16_a */
	0x0a, /* curve17_b */
	0xa2, /* curve17_a */
	0x0a, /* curve18_b */
	0xa2, /* curve18_a */
	0x0f, /* curve19_b */
	0xa4, /* curve19_a */
	0x0f, /* curve20_b */
	0xa4, /* curve20_a */
	0x0f, /* curve21_b */
	0xa4, /* curve21_a */
	0x23, /* curve22_b */
	0x1c, /* curve22_a */
	0x48, /* curve23_b */
	0x17, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x20,
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x00, /* ascr_Rg */
	0xff, /* ascr_Cb */
	0x00, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x00, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x00, /* ascr_Gb */
	0xff, /* ascr_Yr */
	0x00, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x00, /* ascr_Bg */
	0x00, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xff, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xff, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

static unsigned char MOVIE_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char MOVIE_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0a, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0x00,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x00,
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x82, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x2d, /* ascr_Rg */
	0xec, /* ascr_Cb */
	0x21, /* ascr_Rb */
	0xef, /* ascr_Mr */
	0x57, /* ascr_Gr */
	0x36, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x28, /* ascr_Gb */
	0xf7, /* ascr_Yr */
	0x34, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x24, /* ascr_Bg */
	0x44, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xf8, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xef, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

static unsigned char AUTO_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char AUTO_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0a, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0x80,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x00,
	0x2c, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x40, /* ascr_skin_Rg */
	0x40, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x00, /* ascr_Rg */
	0xff, /* ascr_Cb */
	0x00, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x00, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x00, /* ascr_Gb */
	0xff, /* ascr_Yr */
	0x00, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x00, /* ascr_Bg */
	0x00, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xff, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xff, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

#elif defined(CONFIG_DECON_LCD_S6E3HA2)	|| defined(CONFIG_DECON_LCD_S6E3HF2)\
	|| defined(CONFIG_EXYNOS_DECON_LCD_S6E3HF2_WQHD) || defined(CONFIG_PANEL_S6E3HA2_DYNAMIC)\
	|| defined(CONFIG_PANEL_S6E3HF2_DYNAMIC) /* Bypass */

#elif defined(CONFIG_PANEL_S6E3HA3_DYNAMIC) || defined(CONFIG_PANEL_S6E3HF3_DYNAMIC)


#else

static unsigned char NATURAL_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char NATURAL_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0a, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0x00,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x00,
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x16, /* ascr_Rg */
	0xe5, /* ascr_Cb */
	0x0e, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x14, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xd9, /* ascr_Mb */
	0x04, /* ascr_Gb */
	0xfc, /* ascr_Yr */
	0x26, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x1b, /* ascr_Bg */
	0x23, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xf8, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xef, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

static unsigned char DYNAMIC_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char DYNAMIC_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0e, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0xa0,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x0f, /* curve_1_a */
	0x00, /* curve_2_b */
	0x0f, /* curve_2_a */
	0x00, /* curve_3_b */
	0x0f, /* curve_3_a */
	0x00, /* curve_4_b */
	0x0f, /* curve_4_a */
	0x09, /* curve_5_b */
	0xa2, /* curve_5_a */
	0x09, /* curve_6_b */
	0xa2, /* curve_6_a */
	0x09, /* curve_7_b */
	0xa2, /* curve_7_a */
	0x09, /* curve_8_b */
	0xa2, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa2, /* curve_9_a */
	0x09, /* curve10_b */
	0xa2, /* curve10_a */
	0x0a, /* curve11_b */
	0xa2, /* curve11_a */
	0x0a, /* curve12_b */
	0xa2, /* curve12_a */
	0x0a, /* curve13_b */
	0xa2, /* curve13_a */
	0x0a, /* curve14_b */
	0xa2, /* curve14_a */
	0x0a, /* curve15_b */
	0xa2, /* curve15_a */
	0x0a, /* curve16_b */
	0xa2, /* curve16_a */
	0x0a, /* curve17_b */
	0xa2, /* curve17_a */
	0x0a, /* curve18_b */
	0xa2, /* curve18_a */
	0x0f, /* curve19_b */
	0xa4, /* curve19_a */
	0x0f, /* curve20_b */
	0xa4, /* curve20_a */
	0x0f, /* curve21_b */
	0xa4, /* curve21_a */
	0x23, /* curve22_b */
	0x1c, /* curve22_a */
	0x48, /* curve23_b */
	0x17, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x20,
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x00, /* ascr_Rg */
	0xff, /* ascr_Cb */
	0x00, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x00, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x00, /* ascr_Gb */
	0xff, /* ascr_Yr */
	0x00, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x00, /* ascr_Bg */
	0x00, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xff, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xff, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

static unsigned char MOVIE_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char MOVIE_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0a, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0x00,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x00,
	0x20, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x00, /* ascr_skin_Rg */
	0x00, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x82, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x2d, /* ascr_Rg */
	0xec, /* ascr_Cb */
	0x21, /* ascr_Rb */
	0xef, /* ascr_Mr */
	0x57, /* ascr_Gr */
	0x36, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x28, /* ascr_Gb */
	0xf7, /* ascr_Yr */
	0x34, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x24, /* ascr_Bg */
	0x44, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xf8, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xef, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

#if 0
static unsigned char COLD_DMB_2[] = {
	0xEB,
	0x01, /* mdnie_en */
	0x00, /* data_width mask 00 000 */
	0x33, /* scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0 */
	0x0f, /* sharpen cc gamma 00 0 0 */
};

static unsigned char  COLD_DMB_1[] = {
	0xEC,
	0x00, /* roi ctrl */
	0x00, /* roi0 x start */
	0x00,
	0x00, /* roi0 x end */
	0x00,
	0x00, /* roi0 y start */
	0x00,
	0x00, /* roi0 y end */
	0x00,
	0x00, /* roi1 x strat */
	0x00,
	0x00, /* roi1 x end */
	0x00,
	0x00, /* roi1 y start */
	0x00,
	0x00, /* roi1 y end */
	0x00,
	0x00, /* scr Cr Yb */
	0xff, /* scr Rr Bb */
	0xff, /* scr Cg Yg */
	0x30, /* scr Rg Bg */
	0xff, /* scr Cb Yr */
	0x30, /* scr Rb Br */
	0xff, /* scr Mr Mb */
	0x00, /* scr Gr Gb */
	0x00, /* scr Mg Mg */
	0xff, /* scr Gg Gg */
	0xff, /* scr Mb Mr */
	0x00, /* scr Gb Gr */
	0xff, /* scr Yr Cb */
	0x00, /* scr Br Rb */
	0xff, /* scr Yg Cg */
	0x00, /* scr Bg Rg */
	0x30, /* scr Yb Cr */
	0xff, /* scr Bb Rr */
	0xed, /* scr Wr Wb */
	0x00, /* scr Kr Kb */
	0xf2, /* scr Wg Wg */
	0x00, /* scr Kg Kg */
	0xff, /* scr Wb Wr */
	0x00, /* scr Kb Kr */
	0x00, /* curve 1 b */
	0x1c, /* curve 1 a */
	0x00, /* curve 2 b */
	0x1c, /* curve 2 a */
	0x00, /* curve 3 b */
	0x1c, /* curve 3 a */
	0x00, /* curve 4 b */
	0x1c, /* curve 4 a */
	0x00, /* curve 5 b */
	0x1c, /* curve 5 a */
	0x00, /* curve 6 b */
	0x1c, /* curve 6 a */
	0x00, /* curve 7 b */
	0x1c, /* curve 7 a */
	0x00, /* curve 8 b */
	0x1c, /* curve 8 a */
	0x00, /* curve 9 b */
	0x1c, /* curve 9 a */
	0x00, /* curve10 b */
	0x1c, /* curve10 a */
	0x00, /* curve11 b */
	0x1c, /* curve11 a */
	0x00, /* curve12 b */
	0x1c, /* curve12 a */
	0x00, /* curve13 b */
	0x1c, /* curve13 a */
	0x0d, /* curve14 b */
	0xa4, /* curve14 a */
	0x0d, /* curve15 b */
	0xa4, /* curve15 a */
	0x0d, /* curve16 b */
	0xa4, /* curve16 a */
	0x0d, /* curve17 b */
	0xa4, /* curve17 a */
	0x0d, /* curve18 b */
	0xa4, /* curve18 a */
	0x0d, /* curve19 b */
	0xa4, /* curve19 a */
	0x0d, /* curve20 b */
	0xa4, /* curve20 a */
	0x0d, /* curve21 b */
	0xa4, /* curve21 a */
	0x25, /* curve22 b */
	0x1c, /* curve22 a */
	0x4a, /* curve23 b */
	0x17, /* curve23 a */
	0x00, /* curve24 b */
	0xFF, /* curve24 a */
	0x04, /* cc r1 0.3 */
	0xd7,
	0x1f, /* cc r2 */
	0x4c,
	0x1f, /* cc r3 */
	0xdd,
	0x1f, /* cc g1 */
	0xa4,
	0x04, /* cc g2 */
	0x7f,
	0x1f, /* cc g3 */
	0xdd,
	0x1f, /* cc b1 */
	0xa4,
	0x1f, /* cc b2 */
	0x4c,
	0x05, /* cc b3 */
	0x10,
};

static unsigned char COLD_OUTDOOR_DMB_2[] = {
	0xEB,
	0x01, /* mdnie_en */
	0x00, /* data_width mask 00 000 */
	0x33, /* scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0 */
	0x0f, /* sharpen cc gamma 00 0 0 */
};

static unsigned char COLD_OUTDOOR_DMB_1[] = {
	0xEC,
	0x00, /* roi ctrl */
	0x00, /* roi0 x start */
	0x00,
	0x00, /* roi0 x end */
	0x00,
	0x00, /* roi0 y start */
	0x00,
	0x00, /* roi0 y end */
	0x00,
	0x00, /* roi1 x strat */
	0x00,
	0x00, /* roi1 x end */
	0x00,
	0x00, /* roi1 y start */
	0x00,
	0x00, /* roi1 y end */
	0x00,
	0x00, /* scr Cr Yb */
	0xff, /* scr Rr Bb */
	0xff, /* scr Cg Yg */
	0x30, /* scr Rg Bg */
	0xff, /* scr Cb Yr */
	0x30, /* scr Rb Br */
	0xff, /* scr Mr Mb */
	0x00, /* scr Gr Gb */
	0x00, /* scr Mg Mg */
	0xff, /* scr Gg Gg */
	0xff, /* scr Mb Mr */
	0x00, /* scr Gb Gr */
	0xff, /* scr Yr Cb */
	0x00, /* scr Br Rb */
	0xff, /* scr Yg Cg */
	0x00, /* scr Bg Rg */
	0x30, /* scr Yb Cr */
	0xff, /* scr Bb Rr */
	0xed, /* scr Wr Wb */
	0x00, /* scr Kr Kb */
	0xf2, /* scr Wg Wg */
	0x00, /* scr Kg Kg */
	0xff, /* scr Wb Wr */
	0x00, /* scr Kb Kr */
	0x00, /* curve 1 b */
	0x20, /* curve 1 a */
	0x00, /* curve 2 b */
	0x20, /* curve 2 a */
	0x00, /* curve 3 b */
	0x20, /* curve 3 a */
	0x00, /* curve 4 b */
	0x20, /* curve 4 a */
	0x00, /* curve 5 b */
	0x20, /* curve 5 a */
	0x00, /* curve 6 b */
	0x20, /* curve 6 a */
	0x00, /* curve 7 b */
	0x20, /* curve 7 a */
	0x0c, /* curve 8 b */
	0xae, /* curve 8 a */
	0x0c, /* curve 9 b */
	0xae, /* curve 9 a */
	0x0c, /* curve10 b */
	0xae, /* curve10 a */
	0x0c, /* curve11 b */
	0xae, /* curve11 a */
	0x0c, /* curve12 b */
	0xae, /* curve12 a */
	0x0c, /* curve13 b */
	0xae, /* curve13 a */
	0x26, /* curve14 b */
	0xbe, /* curve14 a */
	0x26, /* curve15 b */
	0xbe, /* curve15 a */
	0x26, /* curve16 b */
	0xbe, /* curve16 a */
	0x26, /* curve17 b */
	0xbe, /* curve17 a */
	0x0f, /* curve18 b */
	0xb4, /* curve18 a */
	0x05, /* curve19 b */
	0x2c, /* curve19 a */
	0x48, /* curve20 b */
	0x1b, /* curve20 a */
	0x6d, /* curve21 b */
	0x14, /* curve21 a */
	0x99, /* curve22 b */
	0x0d, /* curve22 a */
	0xaf, /* curve23 b */
	0x0a, /* curve23 a */
	0x00, /* curve24 b */
	0xFF, /* curve24 a */
	0x04, /* cc r1 0.3 */
	0xd7,
	0x1f, /* cc r2 */
	0x4c,
	0x1f, /* cc r3 */
	0xdd,
	0x1f, /* cc g1 */
	0xa4,
	0x04, /* cc g2 */
	0x7f,
	0x1f, /* cc g3 */
	0xdd,
	0x1f, /* cc b1 */
	0xa4,
	0x1f, /* cc b2 */
	0x4c,
	0x05, /* cc b3 */
	0x10,
};

static unsigned char WARM_DMB_2[] = {
	0xEB,
	0x01, /* mdnie_en */
	0x00, /* data_width mask 00 000 */
	0x33, /* scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0 */
	0x0f, /* sharpen cc gamma 00 0 0 */
};

static unsigned char WARM_DMB_1[] = {
	0xEC,
	0x00, /* roi ctrl */
	0x00, /* roi0 x start */
	0x00,
	0x00, /* roi0 x end */
	0x00,
	0x00, /* roi0 y start */
	0x00,
	0x00, /* roi0 y end */
	0x00,
	0x00, /* roi1 x strat */
	0x00,
	0x00, /* roi1 x end */
	0x00,
	0x00, /* roi1 y start */
	0x00,
	0x00, /* roi1 y end */
	0x00,
	0x00, /* scr Cr Yb */
	0xff, /* scr Rr Bb */
	0xff, /* scr Cg Yg */
	0x30, /* scr Rg Bg */
	0xff, /* scr Cb Yr */
	0x30, /* scr Rb Br */
	0xff, /* scr Mr Mb */
	0x00, /* scr Gr Gb */
	0x00, /* scr Mg Mg */
	0xff, /* scr Gg Gg */
	0xff, /* scr Mb Mr */
	0x00, /* scr Gb Gr */
	0xff, /* scr Yr Cb */
	0x00, /* scr Br Rb */
	0xff, /* scr Yg Cg */
	0x00, /* scr Bg Rg */
	0x30, /* scr Yb Cr */
	0xff, /* scr Bb Rr */
	0xff, /* scr Wr Wb */
	0x00, /* scr Kr Kb */
	0xf6, /* scr Wg Wg */
	0x00, /* scr Kg Kg */
	0xe5, /* scr Wb Wr */
	0x00, /* scr Kb Kr */
	0x00, /* curve 1 b */
	0x1c, /* curve 1 a */
	0x00, /* curve 2 b */
	0x1c, /* curve 2 a */
	0x00, /* curve 3 b */
	0x1c, /* curve 3 a */
	0x00, /* curve 4 b */
	0x1c, /* curve 4 a */
	0x00, /* curve 5 b */
	0x1c, /* curve 5 a */
	0x00, /* curve 6 b */
	0x1c, /* curve 6 a */
	0x00, /* curve 7 b */
	0x1c, /* curve 7 a */
	0x00, /* curve 8 b */
	0x1c, /* curve 8 a */
	0x00, /* curve 9 b */
	0x1c, /* curve 9 a */
	0x00, /* curve10 b */
	0x1c, /* curve10 a */
	0x00, /* curve11 b */
	0x1c, /* curve11 a */
	0x00, /* curve12 b */
	0x1c, /* curve12 a */
	0x00, /* curve13 b */
	0x1c, /* curve13 a */
	0x0d, /* curve14 b */
	0xa4, /* curve14 a */
	0x0d, /* curve15 b */
	0xa4, /* curve15 a */
	0x0d, /* curve16 b */
	0xa4, /* curve16 a */
	0x0d, /* curve17 b */
	0xa4, /* curve17 a */
	0x0d, /* curve18 b */
	0xa4, /* curve18 a */
	0x0d, /* curve19 b */
	0xa4, /* curve19 a */
	0x0d, /* curve20 b */
	0xa4, /* curve20 a */
	0x0d, /* curve21 b */
	0xa4, /* curve21 a */
	0x25, /* curve22 b */
	0x1c, /* curve22 a */
	0x4a, /* curve23 b */
	0x17, /* curve23 a */
	0x00, /* curve24 b */
	0xFF, /* curve24 a */
	0x04, /* cc r1 0.3 */
	0xd7,
	0x1f, /* cc r2 */
	0x4c,
	0x1f, /* cc r3 */
	0xdd,
	0x1f, /* cc g1 */
	0xa4,
	0x04, /* cc g2 */
	0x7f,
	0x1f, /* cc g3 */
	0xdd,
	0x1f, /* cc b1 */
	0xa4,
	0x1f, /* cc b2 */
	0x4c,
	0x05, /* cc b3 */
	0x10,
};

static unsigned char WARM_OUTDOOR_DMB_2[] = {
	0xEB,
	0x01, /* mdnie_en */
	0x00, /* data_width mask 00 000 */
	0x33, /* scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0 */
	0x0f, /* sharpen cc gamma 00 0 0 */
};

static unsigned char WARM_OUTDOOR_DMB_1[] = {
	0xEC,
	0x00, /* roi ctrl */
	0x00, /* roi0 x start */
	0x00,
	0x00, /* roi0 x end */
	0x00,
	0x00, /* roi0 y start */
	0x00,
	0x00, /* roi0 y end */
	0x00,
	0x00, /* roi1 x strat */
	0x00,
	0x00, /* roi1 x end */
	0x00,
	0x00, /* roi1 y start */
	0x00,
	0x00, /* roi1 y end */
	0x00,
	0x00, /* scr Cr Yb */
	0xff, /* scr Rr Bb */
	0xff, /* scr Cg Yg */
	0x30, /* scr Rg Bg */
	0xff, /* scr Cb Yr */
	0x30, /* scr Rb Br */
	0xff, /* scr Mr Mb */
	0x00, /* scr Gr Gb */
	0x00, /* scr Mg Mg */
	0xff, /* scr Gg Gg */
	0xff, /* scr Mb Mr */
	0x00, /* scr Gb Gr */
	0xff, /* scr Yr Cb */
	0x00, /* scr Br Rb */
	0xff, /* scr Yg Cg */
	0x00, /* scr Bg Rg */
	0x30, /* scr Yb Cr */
	0xff, /* scr Bb Rr */
	0xff, /* scr Wr Wb */
	0x00, /* scr Kr Kb */
	0xf6, /* scr Wg Wg */
	0x00, /* scr Kg Kg */
	0xe5, /* scr Wb Wr */
	0x00, /* scr Kb Kr */
	0x00, /* curve 1 b */
	0x20, /* curve 1 a */
	0x00, /* curve 2 b */
	0x20, /* curve 2 a */
	0x00, /* curve 3 b */
	0x20, /* curve 3 a */
	0x00, /* curve 4 b */
	0x20, /* curve 4 a */
	0x00, /* curve 5 b */
	0x20, /* curve 5 a */
	0x00, /* curve 6 b */
	0x20, /* curve 6 a */
	0x00, /* curve 7 b */
	0x20, /* curve 7 a */
	0x0c, /* curve 8 b */
	0xae, /* curve 8 a */
	0x0c, /* curve 9 b */
	0xae, /* curve 9 a */
	0x0c, /* curve10 b */
	0xae, /* curve10 a */
	0x0c, /* curve11 b */
	0xae, /* curve11 a */
	0x0c, /* curve12 b */
	0xae, /* curve12 a */
	0x0c, /* curve13 b */
	0xae, /* curve13 a */
	0x26, /* curve14 b */
	0xbe, /* curve14 a */
	0x26, /* curve15 b */
	0xbe, /* curve15 a */
	0x26, /* curve16 b */
	0xbe, /* curve16 a */
	0x26, /* curve17 b */
	0xbe, /* curve17 a */
	0x0f, /* curve18 b */
	0xb4, /* curve18 a */
	0x05, /* curve19 b */
	0x2c, /* curve19 a */
	0x48, /* curve20 b */
	0x1b, /* curve20 a */
	0x6d, /* curve21 b */
	0x14, /* curve21 a */
	0x99, /* curve22 b */
	0x0d, /* curve22 a */
	0xaf, /* curve23 b */
	0x0a, /* curve23 a */
	0x00, /* curve24 b */
	0xFF, /* curve24 a */
	0x04, /* cc r1 0.3 */
	0xd7,
	0x1f, /* cc r2 */
	0x4c,
	0x1f, /* cc r3 */
	0xdd,
	0x1f, /* cc g1 */
	0xa4,
	0x04, /* cc g2 */
	0x7f,
	0x1f, /* cc g3 */
	0xdd,
	0x1f, /* cc b1 */
	0xa4,
	0x1f, /* cc b2 */
	0x4c,
	0x05, /* cc b3 */
	0x10,
};

static unsigned char OUTDOOR_DMB_2[] = {
	0xEB,
	0x01, /* mdnie_en */
	0x00, /* data_width mask 00 000 */
	0x33, /* scr_roi 1 scr algo_roi 1 algo 00 1 0 00 1 0 */
	0x0f, /* sharpen cc gamma 00 0 0 */
};

static unsigned char OUTDOOR_DMB_1[] = {
	0xEC,
	0x00, /* roi ctrl */
	0x00, /* roi0 x start */
	0x00,
	0x00, /* roi0 x end */
	0x00,
	0x00, /* roi0 y start */
	0x00,
	0x00, /* roi0 y end */
	0x00,
	0x00, /* roi1 x strat */
	0x00,
	0x00, /* roi1 x end */
	0x00,
	0x00, /* roi1 y start */
	0x00,
	0x00, /* roi1 y end */
	0x00,
	0x00, /* scr Cr Yb */
	0xff, /* scr Rr Bb */
	0xff, /* scr Cg Yg */
	0x30, /* scr Rg Bg */
	0xff, /* scr Cb Yr */
	0x30, /* scr Rb Br */
	0xff, /* scr Mr Mb */
	0x00, /* scr Gr Gb */
	0x00, /* scr Mg Mg */
	0xff, /* scr Gg Gg */
	0xff, /* scr Mb Mr */
	0x00, /* scr Gb Gr */
	0xff, /* scr Yr Cb */
	0x00, /* scr Br Rb */
	0xff, /* scr Yg Cg */
	0x00, /* scr Bg Rg */
	0x30, /* scr Yb Cr */
	0xff, /* scr Bb Rr */
	0xff, /* scr Wr Wb */
	0x00, /* scr Kr Kb */
	0xff, /* scr Wg Wg */
	0x00, /* scr Kg Kg */
	0xff, /* scr Wb Wr */
	0x00, /* scr Kb Kr */
	0x00, /* curve 1 b */
	0x20, /* curve 1 a */
	0x00, /* curve 2 b */
	0x20, /* curve 2 a */
	0x00, /* curve 3 b */
	0x20, /* curve 3 a */
	0x00, /* curve 4 b */
	0x20, /* curve 4 a */
	0x00, /* curve 5 b */
	0x20, /* curve 5 a */
	0x00, /* curve 6 b */
	0x20, /* curve 6 a */
	0x00, /* curve 7 b */
	0x20, /* curve 7 a */
	0x0c, /* curve 8 b */
	0xae, /* curve 8 a */
	0x0c, /* curve 9 b */
	0xae, /* curve 9 a */
	0x0c, /* curve10 b */
	0xae, /* curve10 a */
	0x0c, /* curve11 b */
	0xae, /* curve11 a */
	0x0c, /* curve12 b */
	0xae, /* curve12 a */
	0x0c, /* curve13 b */
	0xae, /* curve13 a */
	0x26, /* curve14 b */
	0xbe, /* curve14 a */
	0x26, /* curve15 b */
	0xbe, /* curve15 a */
	0x26, /* curve16 b */
	0xbe, /* curve16 a */
	0x26, /* curve17 b */
	0xbe, /* curve17 a */
	0x0f, /* curve18 b */
	0xb4, /* curve18 a */
	0x05, /* curve19 b */
	0x2c, /* curve19 a */
	0x48, /* curve20 b */
	0x1b, /* curve20 a */
	0x6d, /* curve21 b */
	0x14, /* curve21 a */
	0x99, /* curve22 b */
	0x0d, /* curve22 a */
	0xaf, /* curve23 b */
	0x0a, /* curve23 a */
	0x00, /* curve24 b */
	0xFF, /* curve24 a */
	0x04, /* cc r1 0.3 */
	0xd7,
	0x1f, /* cc r2 */
	0x4c,
	0x1f, /* cc r3 */
	0xdd,
	0x1f, /* cc g1 */
	0xa4,
	0x04, /* cc g2 */
	0x7f,
	0x1f, /* cc g3 */
	0xdd,
	0x1f, /* cc b1 */
	0xa4,
	0x1f, /* cc b2 */
	0x4c,
	0x05, /* cc b3 */
	0x10,
};
#endif

static unsigned char AUTO_DMB_2[] = {
	0xEB,
	0x01, /* lce_en mdnie_en 0 0 */
	0x00, /* data_width mask 00 0000 */
	0x00, /* lce 1  lce_roi 0 1 00 */
	0xcc, /* algo 1 algo_roi ascr 1 ascr_roi 0 1 00 0 1 00 */
	0x00, /* roi_ctrl 00 */
	0x00, /* roi0_x_start 12 */
	0x00,
	0x00, /* roi0_x_end */
	0x00,
	0x00, /* roi0_y_start */
	0x00,
	0x00, /* roi0_y_end */
	0x00,
	0x00, /* roi1_x_strat */
	0x00,
	0x00, /* roi1_x_end */
	0x00,
	0x00, /* roi1_y_start */
	0x00,
	0x00, /* roi1_y_end */
	0x00,
};

static unsigned char AUTO_DMB_1[] = {
	0xEC,
	0x18, /* lce_gain 00 0000 */
	0x24, /* lce_color_gain 00 0000 */
	0x10, /* lce_scene_change_on scene_trans 0 0000 */
	0x14, /* lce_min_diff */
	0xb3, /* lce_illum_gain */
	0x01, /* lce_ref_offset 9 */
	0x0e,
	0x01, /* lce_ref_gain 9 */
	0x00,
	0x66, /* lce_block_size h v 0000 0000 */
	0xfa, /* lce_bright_th */
	0x2d, /* lce_bin_size_ratio */
	0x03, /* lce_dark_th 000 */
	0x96, /* lce_min_ref_offset */
	0x0a, /* gamma cs sharp nr 0000 */
	0xff, /* nr_mask_th */
	0x01, /* sharpen_weight 10 */
	0x80,
	0x01, /* sharpen_maxplus 11 */
	0x00,
	0x01, /* sharpen_maxminus 11 */
	0x00,
	0x00, /* curve_1_b */
	0x20, /* curve_1_a */
	0x00, /* curve_2_b */
	0x20, /* curve_2_a */
	0x00, /* curve_3_b */
	0x20, /* curve_3_a */
	0x00, /* curve_4_b */
	0x20, /* curve_4_a */
	0x02, /* curve_5_b */
	0x1b, /* curve_5_a */
	0x02, /* curve_6_b */
	0x1b, /* curve_6_a */
	0x02, /* curve_7_b */
	0x1b, /* curve_7_a */
	0x02, /* curve_8_b */
	0x1b, /* curve_8_a */
	0x09, /* curve_9_b */
	0xa6, /* curve_9_a */
	0x09, /* curve10_b */
	0xa6, /* curve10_a */
	0x09, /* curve11_b */
	0xa6, /* curve11_a */
	0x09, /* curve12_b */
	0xa6, /* curve12_a */
	0x00, /* curve13_b */
	0x20, /* curve13_a */
	0x00, /* curve14_b */
	0x20, /* curve14_a */
	0x00, /* curve15_b */
	0x20, /* curve15_a */
	0x00, /* curve16_b */
	0x20, /* curve16_a */
	0x00, /* curve17_b */
	0x20, /* curve17_a */
	0x00, /* curve18_b */
	0x20, /* curve18_a */
	0x00, /* curve19_b */
	0x20, /* curve19_a */
	0x00, /* curve20_b */
	0x20, /* curve20_a */
	0x00, /* curve21_b */
	0x20, /* curve21_a */
	0x00, /* curve22_b */
	0x20, /* curve22_a */
	0x00, /* curve23_b */
	0x20, /* curve23_a */
	0x00, /* curve24_b */
	0xFF, /* curve24_a */
	0x01, /* cs_gain 10 */
	0x00,
	0x2c, /* ascr_skin_on strength 0 00000 */
	0x67, /* ascr_skin_cb */
	0xa9, /* ascr_skin_cr */
	0x17, /* ascr_dist_up */
	0x29, /* ascr_dist_down */
	0x19, /* ascr_dist_right */
	0x27, /* ascr_dist_left */
	0x00, /* ascr_div_up 20 */
	0x59,
	0x0b,
	0x00, /* ascr_div_down */
	0x31,
	0xf4,
	0x00, /* ascr_div_right */
	0x51,
	0xec,
	0x00, /* ascr_div_left */
	0x34,
	0x83,
	0xff, /* ascr_skin_Rr */
	0x40, /* ascr_skin_Rg */
	0x40, /* ascr_skin_Rb */
	0xff, /* ascr_skin_Yr */
	0xff, /* ascr_skin_Yg */
	0x00, /* ascr_skin_Yb */
	0xff, /* ascr_skin_Mr */
	0x00, /* ascr_skin_Mg */
	0xff, /* ascr_skin_Mb */
	0xff, /* ascr_skin_Wr */
	0xff, /* ascr_skin_Wg */
	0xff, /* ascr_skin_Wb */
	0x00, /* ascr_Cr */
	0xff, /* ascr_Rr */
	0xff, /* ascr_Cg */
	0x00, /* ascr_Rg */
	0xff, /* ascr_Cb */
	0x00, /* ascr_Rb */
	0xff, /* ascr_Mr */
	0x00, /* ascr_Gr */
	0x00, /* ascr_Mg */
	0xff, /* ascr_Gg */
	0xff, /* ascr_Mb */
	0x00, /* ascr_Gb */
	0xff, /* ascr_Yr */
	0x00, /* ascr_Br */
	0xff, /* ascr_Yg */
	0x00, /* ascr_Bg */
	0x00, /* ascr_Yb */
	0xff, /* ascr_Bb */
	0xff, /* ascr_Wr */
	0x00, /* ascr_Kr */
	0xff, /* ascr_Wg */
	0x00, /* ascr_Kg */
	0xff, /* ascr_Wb */
	0x00, /* ascr_Kb */
};

#endif


struct mdnie_table dmb_table[MODE_MAX] = {
	MDNIE_SET(DYNAMIC_DMB),
	MDNIE_SET(STANDARD_DMB),
	MDNIE_SET(NATURAL_DMB),
	MDNIE_SET(MOVIE_DMB),
	MDNIE_SET(AUTO_DMB)
};

#endif
