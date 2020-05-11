/*
 * Copyright (C) 2015 Jared Boone, ShareBrained Technology, Inc.
 * Copyright (C) 2016 Furrtek
 *
 * This file is part of PortaPack.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

// This file was generated by make_bitmap.py

#ifndef __BITMAP_HPP__
#define __BITMAP_HPP__

#include "ui.hpp"

namespace ui {

static constexpr uint8_t bitmap_bulb_ignore_data[] = {
	0x00, 0x3C, 0x00, 
	0x00, 0xC3, 0x00, 
	0x80, 0x00, 0x01, 
	0x40, 0x3C, 0x02, 
	0x20, 0x7E, 0x04, 
	0x20, 0xE7, 0x04, 
	0x10, 0xC3, 0x08, 
	0x10, 0xE3, 0x08, 
	0x10, 0x70, 0x08, 
	0x10, 0x38, 0x08, 
	0x10, 0x18, 0x08, 
	0x20, 0x18, 0x04, 
	0x20, 0x00, 0x04, 
	0x40, 0x18, 0x02, 
	0x80, 0x18, 0x01, 
	0x00, 0xC3, 0x00, 
	0x00, 0xFF, 0x00, 
	0x00, 0xBD, 0x00, 
	0x00, 0xC3, 0x00, 
	0x00, 0xBD, 0x00, 
	0x00, 0xC3, 0x00, 
	0x00, 0xBD, 0x00, 
	0x00, 0x42, 0x00, 
	0x00, 0x3C, 0x00, 
};
static constexpr Bitmap bitmap_bulb_ignore {
	{ 24, 24 }, bitmap_bulb_ignore_data
};

static constexpr uint8_t bitmap_bulb_off_data[] = {
	0x00, 0x3C, 0x00, 
	0x00, 0xC3, 0x00, 
	0x80, 0x00, 0x01, 
	0x40, 0x00, 0x02, 
	0x20, 0x00, 0x04, 
	0x20, 0x00, 0x04, 
	0x10, 0x00, 0x08, 
	0x10, 0x42, 0x08, 
	0x10, 0x42, 0x08, 
	0x10, 0x24, 0x08, 
	0x10, 0x24, 0x08, 
	0x20, 0x24, 0x04, 
	0x20, 0x2C, 0x04, 
	0x40, 0x34, 0x02, 
	0x80, 0x3C, 0x01, 
	0x00, 0xFF, 0x00, 
	0x00, 0xE3, 0x00, 
	0x00, 0xBD, 0x00, 
	0x00, 0xC3, 0x00, 
	0x00, 0xBD, 0x00, 
	0x00, 0xC3, 0x00, 
	0x00, 0xBD, 0x00, 
	0x00, 0x42, 0x00, 
	0x00, 0x3C, 0x00, 
};
static constexpr Bitmap bitmap_bulb_off {
	{ 24, 24 }, bitmap_bulb_off_data
};

static constexpr uint8_t bitmap_bulb_on_data[] = {
	0x04, 0x3C, 0x20, 
	0x08, 0xFF, 0x10, 
	0x90, 0xFF, 0x09, 
	0xC0, 0xFF, 0x03, 
	0xE0, 0xFF, 0x07, 
	0xE0, 0xFF, 0x07, 
	0xF0, 0xE7, 0x0F, 
	0xF0, 0xBD, 0x0F, 
	0xF7, 0xBD, 0xEF, 
	0xF0, 0xDB, 0x0F, 
	0xF0, 0xDB, 0x0F, 
	0xE0, 0xDB, 0x07, 
	0xE0, 0xCB, 0x07, 
	0xC0, 0xD3, 0x03, 
	0x90, 0xCB, 0x09, 
	0x08, 0xFD, 0x10, 
	0x04, 0xE3, 0x20, 
	0x00, 0xBD, 0x00, 
	0x00, 0xC3, 0x00, 
	0x00, 0xBD, 0x00, 
	0x00, 0xC3, 0x00, 
	0x00, 0xBD, 0x00, 
	0x00, 0x42, 0x00, 
	0x00, 0x3C, 0x00, 
};
static constexpr Bitmap bitmap_bulb_on {
	{ 24, 24 }, bitmap_bulb_on_data
};

static constexpr uint8_t bitmap_icon_adsb_data[] = {
	0x80, 0x01, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xE8, 0x17, 
	0xFA, 0x5F, 
	0xFE, 0x7F, 
	0xFF, 0xFF, 
	0xC7, 0xE3, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0xE0, 0x07, 
	0xF8, 0x1F, 
	0x38, 0x1C, 
};
static constexpr Bitmap bitmap_icon_adsb {
	{ 16, 16 }, bitmap_icon_adsb_data
};

static constexpr uint8_t bitmap_icon_ais_data[] = {
	0x00, 0x01, 
	0x80, 0x01, 
	0xC0, 0x0D, 
	0xC0, 0x3D, 
	0xE0, 0x3D, 
	0xF0, 0x7D, 
	0xF8, 0x7D, 
	0xF8, 0x7D, 
	0xFC, 0x7D, 
	0xFE, 0x7D, 
	0x00, 0x00, 
	0xF8, 0x3F, 
	0xF8, 0x1F, 
	0xFB, 0xCF, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_ais {
	{ 16, 16 }, bitmap_icon_ais_data
};

static constexpr uint8_t bitmap_icon_aprs_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0xF0, 0x0F, 
	0x4C, 0x32, 
	0xFE, 0x7F, 
	0x25, 0xA4, 
	0x25, 0xA4, 
	0xFF, 0xFF, 
	0x25, 0xA4, 
	0x25, 0xA4, 
	0xFE, 0x7F, 
	0x4C, 0x32, 
	0xF0, 0x0F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_aprs {
	{ 16, 16 }, bitmap_icon_aprs_data
};

static constexpr uint8_t bitmap_icon_bht_data[] = {
	0x00, 0x00, 
	0xE0, 0x07, 
	0xF8, 0x08, 
	0x9C, 0x07, 
	0x0C, 0x00, 
	0x8E, 0x0A, 
	0x46, 0x12, 
	0x26, 0x22, 
	0x06, 0x02, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x06, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_bht {
	{ 16, 16 }, bitmap_icon_bht_data
};

static constexpr uint8_t bitmap_icon_biast_off_data[] = {
	0x00, 0x00, 
	0xFC, 0x3F, 
	0x00, 0x02, 
	0x00, 0x0E, 
	0x00, 0x18, 
	0x00, 0x10, 
	0x88, 0x18, 
	0xD8, 0x0E, 
	0x70, 0x18, 
	0x20, 0x10, 
	0x70, 0x18, 
	0xD8, 0x0E, 
	0x88, 0x18, 
	0x00, 0x10, 
	0x00, 0x18, 
	0x00, 0x0E, 
};
static constexpr Bitmap bitmap_icon_biast_off {
	{ 16, 16 }, bitmap_icon_biast_off_data
};

static constexpr uint8_t bitmap_icon_biast_on_data[] = {
	0x00, 0x00, 
	0xFE, 0x7F, 
	0x00, 0x02, 
	0x00, 0x0E, 
	0x20, 0x18, 
	0x20, 0x10, 
	0x30, 0x18, 
	0x10, 0x0E, 
	0x38, 0x18, 
	0xF8, 0x10, 
	0xE0, 0x18, 
	0x40, 0x0E, 
	0x60, 0x18, 
	0x20, 0x10, 
	0x20, 0x18, 
	0x00, 0x0E, 
};
static constexpr Bitmap bitmap_icon_biast_on {
	{ 16, 16 }, bitmap_icon_biast_on_data
};

static constexpr uint8_t bitmap_icon_btle_data[] = {
	0xE0, 0x03, 
	0x30, 0x07, 
	0x38, 0x0E, 
	0x3C, 0x1C, 
	0x24, 0x19, 
	0x0C, 0x13, 
	0x1C, 0x19, 
	0x3C, 0x1C, 
	0x3C, 0x1C, 
	0x1C, 0x19, 
	0x0C, 0x13, 
	0x24, 0x19, 
	0x3C, 0x1C, 
	0x38, 0x0E, 
	0x30, 0x07, 
	0xE0, 0x03, 
};
static constexpr Bitmap bitmap_icon_btle {
	{ 16, 16 }, bitmap_icon_btle_data
};

static constexpr uint8_t bitmap_icon_burger_data[] = {
	0xE0, 0x07, 
	0x58, 0x18, 
	0x04, 0x25, 
	0x12, 0x40, 
	0x85, 0x90, 
	0x21, 0x84, 
	0x01, 0x80, 
	0x06, 0x60, 
	0xFE, 0x7F, 
	0x0E, 0x78, 
	0x1F, 0xFC, 
	0x39, 0x9F, 
	0xC3, 0xC0, 
	0x0E, 0x70, 
	0xF8, 0x1F, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_burger {
	{ 16, 16 }, bitmap_icon_burger_data
};

static constexpr uint8_t bitmap_icon_camera_data[] = {
	0x00, 0x00, 
	0xE0, 0x07, 
	0xF0, 0x0F, 
	0xFE, 0x7F, 
	0x3F, 0xFC, 
	0xDF, 0xFB, 
	0xEF, 0xF7, 
	0xEF, 0xF7, 
	0xEF, 0xF7, 
	0xEF, 0xF7, 
	0xDF, 0xFB, 
	0x3F, 0xFC, 
	0xFF, 0xFF, 
	0xFE, 0x7F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_camera {
	{ 16, 16 }, bitmap_icon_camera_data
};

static constexpr uint8_t bitmap_icon_capture_data[] = {
	0xE0, 0x07, 
	0xF8, 0x1F, 
	0xFC, 0x3F, 
	0xFE, 0x7F, 
	0xFE, 0x7F, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0xFE, 0x7F, 
	0xFE, 0x7F, 
	0xFC, 0x3F, 
	0xF8, 0x1F, 
	0xE0, 0x07, 
};
static constexpr Bitmap bitmap_icon_capture {
	{ 16, 16 }, bitmap_icon_capture_data
};

static constexpr uint8_t bitmap_icon_clk_ext_data[] = {
	0x00, 
	0x00, 
	0xDC, 
	0x54, 
	0x54, 
	0x54, 
	0x54, 
	0x76, 
	0x00, 
	0x10, 
	0x38, 
	0x7C, 
	0x10, 
	0x10, 
	0x10, 
	0x00, 
};
static constexpr Bitmap bitmap_icon_clk_ext {
	{ 8, 16 }, bitmap_icon_clk_ext_data
};

static constexpr uint8_t bitmap_icon_clk_int_data[] = {
	0x00, 
	0x00, 
	0xDC, 
	0x54, 
	0x54, 
	0x54, 
	0x54, 
	0x76, 
	0x00, 
	0x44, 
	0x6C, 
	0x38, 
	0x38, 
	0x6C, 
	0x44, 
	0x00, 
};
static constexpr Bitmap bitmap_icon_clk_int {
	{ 8, 16 }, bitmap_icon_clk_int_data
};

static constexpr uint8_t bitmap_icon_codetx_data[] = {
	0x00, 0x00, 
	0xF0, 0x07, 
	0x0C, 0x18, 
	0x03, 0x60, 
	0xE0, 0x03, 
	0x18, 0x0C, 
	0x04, 0x10, 
	0xC0, 0x01, 
	0x20, 0x02, 
	0x00, 0x00, 
	0x00, 0x00, 
	0xBB, 0x6D, 
	0x2A, 0x49, 
	0x2A, 0x49, 
	0x3A, 0x49, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_codetx {
	{ 16, 16 }, bitmap_icon_codetx_data
};

static constexpr uint8_t bitmap_icon_cwgen_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0xC0, 
	0xE0, 0xE1, 
	0x20, 0x21, 
	0x21, 0x21, 
	0x21, 0x21, 
	0x33, 0x33, 
	0x33, 0x33, 
	0x12, 0x12, 
	0x12, 0x12, 
	0x12, 0x12, 
	0x1E, 0x1E, 
	0x0C, 0x0C, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_cwgen {
	{ 16, 16 }, bitmap_icon_cwgen_data
};

static constexpr uint8_t bitmap_icon_debug_data[] = {
	0xFE, 0x03, 
	0x02, 0x07, 
	0x2A, 0x0D, 
	0x52, 0x0F, 
	0x2A, 0x08, 
	0x52, 0x09, 
	0xAA, 0x0A, 
	0x52, 0x09, 
	0xAA, 0x0A, 
	0x52, 0x01, 
	0xAA, 0x12, 
	0x02, 0x18, 
	0x02, 0xFC, 
	0x02, 0x18, 
	0xFE, 0x13, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_debug {
	{ 16, 16 }, bitmap_icon_debug_data
};

static constexpr uint8_t bitmap_icon_dir_data[] = {
	0x00, 0x00, 
	0xFC, 0x00, 
	0x02, 0x01, 
	0x01, 0x3E, 
	0x01, 0xE0, 
	0x01, 0xA0, 
	0x01, 0xA0, 
	0x01, 0xA0, 
	0x01, 0xA0, 
	0x02, 0x40, 
	0x02, 0x40, 
	0x02, 0x40, 
	0x02, 0x40, 
	0x02, 0x40, 
	0xFC, 0x3F, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_dir {
	{ 16, 16 }, bitmap_icon_dir_data
};

static constexpr uint8_t bitmap_icon_dmr_data[] = {
	0x00, 0x00, 
	0xFE, 0x1F, 
	0xFE, 0x3F, 
	0x0E, 0x78, 
	0x0E, 0x70, 
	0x0E, 0x70, 
	0x0E, 0x70, 
	0x0E, 0x78, 
	0xFE, 0x3F, 
	0xFE, 0x1F, 
	0x8E, 0x07, 
	0x0E, 0x0F, 
	0x0E, 0x1E, 
	0x0E, 0x3C, 
	0x0E, 0x78, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_dmr {
	{ 16, 16 }, bitmap_icon_dmr_data
};

static constexpr uint8_t bitmap_icon_ert_data[] = {
	0x00, 0x00, 
	0x00, 0x0F, 
	0x80, 0x7F, 
	0xC0, 0x0F, 
	0xFC, 0x0F, 
	0xC2, 0x0F, 
	0x82, 0x7F, 
	0x01, 0x0F, 
	0x01, 0x00, 
	0x21, 0x05, 
	0x53, 0x09, 
	0x56, 0x09, 
	0x50, 0x05, 
	0x50, 0x05, 
	0x20, 0xAD, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_ert {
	{ 16, 16 }, bitmap_icon_ert_data
};

static constexpr uint8_t bitmap_icon_file_data[] = {
	0xFC, 0x03, 
	0x04, 0x06, 
	0x04, 0x0E, 
	0x04, 0x1E, 
	0x04, 0x3E, 
	0x04, 0x20, 
	0x04, 0x20, 
	0x04, 0x20, 
	0x04, 0x20, 
	0x04, 0x20, 
	0x04, 0x20, 
	0x04, 0x20, 
	0x04, 0x20, 
	0x04, 0x20, 
	0x04, 0x20, 
	0xFC, 0x3F, 
};
static constexpr Bitmap bitmap_icon_file {
	{ 16, 16 }, bitmap_icon_file_data
};

static constexpr uint8_t bitmap_icon_file_image_data[] = {
	0x00, 0x00, 
	0xFF, 0xFF, 
	0x01, 0x80, 
	0x01, 0x80, 
	0x89, 0x80, 
	0xC1, 0x81, 
	0xE1, 0xA3, 
	0xB1, 0xB3, 
	0x89, 0xDC, 
	0x07, 0x8C, 
	0x01, 0x90, 
	0x01, 0x80, 
	0xAB, 0x82, 
	0xFF, 0xD5, 
	0xFF, 0xFF, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_file_image {
	{ 16, 16 }, bitmap_icon_file_image_data
};

static constexpr uint8_t bitmap_icon_file_iq_data[] = {
	0x98, 0x00, 
	0x24, 0x06, 
	0xA4, 0x08, 
	0x34, 0x10, 
	0xB8, 0x20, 
	0x20, 0x20, 
	0x80, 0x00, 
	0xD5, 0x55, 
	0x80, 0x00, 
	0x02, 0x70, 
	0x82, 0x20, 
	0x04, 0x20, 
	0x88, 0x20, 
	0x30, 0x70, 
	0x80, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_file_iq {
	{ 16, 16 }, bitmap_icon_file_iq_data
};

static constexpr uint8_t bitmap_icon_file_text_data[] = {
	0x00, 0x20, 
	0x00, 0x30, 
	0x00, 0x38, 
	0x00, 0x38, 
	0x00, 0x34, 
	0x00, 0x32, 
	0x00, 0x31, 
	0x80, 0x30, 
	0xC0, 0x30, 
	0xE0, 0x3F, 
	0x30, 0x30, 
	0x18, 0x30, 
	0x0C, 0x30, 
	0x0E, 0x78, 
	0x1F, 0xFC, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_file_text {
	{ 16, 16 }, bitmap_icon_file_text_data
};

static constexpr uint8_t bitmap_icon_fox_data[] = {
	0x18, 0x18, 
	0x28, 0x14, 
	0x68, 0x16, 
	0x68, 0x16, 
	0xC8, 0x13, 
	0x88, 0x11, 
	0x04, 0x20, 
	0x24, 0x24, 
	0x22, 0x44, 
	0x01, 0x80, 
	0x06, 0x60, 
	0x98, 0x19, 
	0x20, 0x04, 
	0x40, 0x02, 
	0x80, 0x01, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_fox {
	{ 16, 16 }, bitmap_icon_fox_data
};

static constexpr uint8_t bitmap_icon_freqman_data[] = {
	0x00, 0x00, 
	0x0E, 0x00, 
	0x02, 0x00, 
	0xE6, 0x7F, 
	0x02, 0x00, 
	0x00, 0x00, 
	0x0E, 0x00, 
	0x02, 0x00, 
	0xE6, 0x7B, 
	0x02, 0x00, 
	0x00, 0x00, 
	0x0E, 0x00, 
	0x02, 0x00, 
	0x66, 0x7F, 
	0x02, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_freqman {
	{ 16, 16 }, bitmap_icon_freqman_data
};

static constexpr uint8_t bitmap_icon_gps_sim_data[] = {
	0xE0, 0x07, 
	0xF0, 0x0F, 
	0x38, 0x1F, 
	0x3C, 0x3E, 
	0x3C, 0x3C, 
	0x3C, 0x38, 
	0x3C, 0x30, 
	0x3C, 0x38, 
	0x3C, 0x3C, 
	0x38, 0x1E, 
	0x38, 0x1F, 
	0xF0, 0x0F, 
	0xE0, 0x07, 
	0xC0, 0x03, 
	0xC0, 0x03, 
	0x80, 0x01, 
};
static constexpr Bitmap bitmap_icon_gps_sim {
	{ 16, 16 }, bitmap_icon_gps_sim_data
};

static constexpr uint8_t bitmap_icon_hackrf_data[] = {
	0xF0, 0x0F, 
	0x10, 0x08, 
	0x50, 0x0A, 
	0x10, 0x08, 
	0x10, 0x08, 
	0x10, 0x08, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xF0, 0x0F, 
	0x80, 0x01, 
	0x80, 0x01, 
};
static constexpr Bitmap bitmap_icon_hackrf {
	{ 16, 16 }, bitmap_icon_hackrf_data
};

static constexpr uint8_t bitmap_icon_jammer_data[] = {
	0xA6, 0xAC, 
	0x73, 0x47, 
	0xAE, 0xB9, 
	0x55, 0xD7, 
	0x7E, 0xAE, 
	0xD3, 0x45, 
	0xCA, 0xBA, 
	0x71, 0x15, 
	0xDA, 0xFE, 
	0xF5, 0xAB, 
	0xAF, 0x98, 
	0x4A, 0x77, 
	0xAD, 0xCA, 
	0x58, 0x7D, 
	0xBF, 0xAF, 
	0x5A, 0x65, 
};
static constexpr Bitmap bitmap_icon_jammer {
	{ 16, 16 }, bitmap_icon_jammer_data
};

static constexpr uint8_t bitmap_icon_keyfob_data[] = {
	0x30, 0x00, 
	0x30, 0x00, 
	0x30, 0x00, 
	0x30, 0x00, 
	0x30, 0x00, 
	0x30, 0x00, 
	0xFC, 0x00, 
	0xCE, 0x01, 
	0x86, 0x01, 
	0xFE, 0x01, 
	0x86, 0x31, 
	0x86, 0x49, 
	0xCE, 0x87, 
	0xFC, 0x84, 
	0xFC, 0x4B, 
	0x78, 0x30, 
};
static constexpr Bitmap bitmap_icon_keyfob {
	{ 16, 16 }, bitmap_icon_keyfob_data
};

static constexpr uint8_t bitmap_icon_lcr_data[] = {
	0x0C, 0x00, 
	0xFF, 0x7F, 
	0x01, 0x80, 
	0xC1, 0x9B, 
	0xFF, 0x7F, 
	0x0C, 0x00, 
	0xFF, 0x7F, 
	0x01, 0x80, 
	0xC1, 0x9D, 
	0xFF, 0x7F, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
};
static constexpr Bitmap bitmap_icon_lcr {
	{ 16, 16 }, bitmap_icon_lcr_data
};

static constexpr uint8_t bitmap_icon_lge_data[] = {
	0x00, 0x00, 
	0x80, 0x00, 
	0xA4, 0x12, 
	0xA8, 0x0A, 
	0xD0, 0x05, 
	0xEC, 0x1B, 
	0xF0, 0x07, 
	0xFE, 0xFF, 
	0xF0, 0x07, 
	0xEC, 0x1B, 
	0xD0, 0x05, 
	0xA8, 0x0A, 
	0xA4, 0x12, 
	0x80, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_lge {
	{ 16, 16 }, bitmap_icon_lge_data
};

static constexpr uint8_t bitmap_icon_lora_data[] = {
	0xC0, 0x03, 
	0x30, 0x0C, 
	0x00, 0x00, 
	0xC0, 0x03, 
	0x00, 0x00, 
	0xC0, 0x03, 
	0x60, 0x06, 
	0x60, 0x06, 
	0x60, 0x06, 
	0x60, 0x06, 
	0xC0, 0x03, 
	0x00, 0x00, 
	0xC0, 0x03, 
	0x00, 0x00, 
	0x30, 0x0C, 
	0xC0, 0x03, 
};
static constexpr Bitmap bitmap_icon_lora {
	{ 16, 16 }, bitmap_icon_lora_data
};

static constexpr uint8_t bitmap_icon_microphone_data[] = {
	0xC0, 0x03, 
	0xA0, 0x06, 
	0x60, 0x05, 
	0xE0, 0x07, 
	0xEC, 0x37, 
	0xEC, 0x37, 
	0xE8, 0x17, 
	0xE8, 0x17, 
	0xE8, 0x17, 
	0xC8, 0x13, 
	0x18, 0x18, 
	0xF0, 0x0F, 
	0xC0, 0x03, 
	0x80, 0x01, 
	0x80, 0x01, 
	0xC0, 0x03, 
};
static constexpr Bitmap bitmap_icon_microphone {
	{ 16, 16 }, bitmap_icon_microphone_data
};

static constexpr uint8_t bitmap_icon_morse_data[] = {
	0x00, 0x00, 
	0x18, 0x00, 
	0x18, 0x00, 
	0x18, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x00, 
	0x0C, 0x1F, 
	0x06, 0x1F, 
	0x06, 0x00, 
	0x66, 0xC0, 
	0x66, 0xC0, 
	0x03, 0x00, 
	0x03, 0x00, 
	0x03, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_morse {
	{ 16, 16 }, bitmap_icon_morse_data
};

static constexpr uint8_t bitmap_icon_notepad_data[] = {
	0x0C, 0x00, 
	0x1E, 0x00, 
	0x2F, 0x00, 
	0x47, 0x00, 
	0xE2, 0x00, 
	0xD4, 0x01, 
	0xB8, 0x03, 
	0x70, 0x07, 
	0xE0, 0x0E, 
	0xC0, 0x1D, 
	0x80, 0x3B, 
	0x00, 0x4F, 
	0x00, 0x46, 
	0x00, 0x84, 
	0x00, 0xD8, 
	0x00, 0xE0, 
};
static constexpr Bitmap bitmap_icon_notepad {
	{ 16, 16 }, bitmap_icon_notepad_data
};

static constexpr uint8_t bitmap_icon_nrf_data[] = {
	0x00, 0x01, 
	0x00, 0x01, 
	0x00, 0x01, 
	0x00, 0x01, 
	0x00, 0x01, 
	0x00, 0x01, 
	0x00, 0x01, 
	0xF8, 0x3F, 
	0xFC, 0x7F, 
	0xFC, 0x7F, 
	0xDC, 0x7F, 
	0x8C, 0x6B, 
	0xDC, 0x7F, 
	0xFC, 0x7F, 
	0xFC, 0x7F, 
	0xF8, 0x3F, 
};
static constexpr Bitmap bitmap_icon_nrf {
	{ 16, 16 }, bitmap_icon_nrf_data
};

static constexpr uint8_t bitmap_icon_nuoptix_data[] = {
	0x80, 0x01, 
	0x80, 0x01, 
	0x40, 0x02, 
	0x40, 0x1A, 
	0x40, 0x1A, 
	0x20, 0x0C, 
	0x20, 0x0F, 
	0x20, 0x1E, 
	0x10, 0x0E, 
	0x10, 0x0B, 
	0x10, 0x0B, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
};
static constexpr Bitmap bitmap_icon_nuoptix {
	{ 16, 16 }, bitmap_icon_nuoptix_data
};

static constexpr uint8_t bitmap_icon_pocsag_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0xFC, 0x3F, 
	0xFE, 0x7F, 
	0x02, 0x40, 
	0xBA, 0x45, 
	0x02, 0x40, 
	0xFE, 0x7F, 
	0xFE, 0x7F, 
	0x92, 0x7C, 
	0x92, 0x7C, 
	0xFC, 0x3F, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_pocsag {
	{ 16, 16 }, bitmap_icon_pocsag_data
};

static constexpr uint8_t bitmap_icon_previous_data[] = {
	0x00, 0x00, 
	0xC0, 0x00, 
	0xE0, 0x00, 
	0x70, 0x00, 
	0x38, 0x00, 
	0x1C, 0x00, 
	0x0E, 0x00, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0x0E, 0x00, 
	0x1C, 0x00, 
	0x38, 0x00, 
	0x70, 0x00, 
	0xE0, 0x00, 
	0xC0, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_previous {
	{ 16, 16 }, bitmap_icon_previous_data
};

static constexpr uint8_t bitmap_icon_rds_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x3C, 0x3C, 
	0x7E, 0x7E, 
	0x67, 0xE7, 
	0x83, 0xC3, 
	0xC7, 0xE1, 
	0xFD, 0xBC, 
	0x42, 0x42, 
	0x3C, 0x3C, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_rds {
	{ 16, 16 }, bitmap_icon_rds_data
};

static constexpr uint8_t bitmap_icon_receivers_data[] = {
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0xF8, 0x1F, 
	0xF0, 0x0F, 
	0xE0, 0x07, 
	0xC0, 0x03, 
	0x83, 0xC1, 
	0x03, 0xC0, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
};
static constexpr Bitmap bitmap_icon_receivers {
	{ 16, 16 }, bitmap_icon_receivers_data
};

static constexpr uint8_t bitmap_icon_remote_data[] = {
	0x20, 0x00, 
	0x20, 0x00, 
	0x20, 0x00, 
	0x20, 0x00, 
	0xF0, 0x03, 
	0x10, 0x04, 
	0xD0, 0x08, 
	0xD0, 0x08, 
	0x10, 0x08, 
	0xD0, 0x08, 
	0xD0, 0x08, 
	0x10, 0x08, 
	0x10, 0x08, 
	0x30, 0x0C, 
	0xF0, 0x0F, 
	0xE0, 0x07, 
};
static constexpr Bitmap bitmap_icon_remote {
	{ 16, 16 }, bitmap_icon_remote_data
};

static constexpr uint8_t bitmap_icon_replay_data[] = {
	0x60, 0x00, 
	0xE0, 0x00, 
	0xE0, 0x01, 
	0xE0, 0x03, 
	0xE0, 0x07, 
	0xE0, 0x0F, 
	0xE0, 0x1F, 
	0xE0, 0x3F, 
	0xE0, 0x3F, 
	0xE0, 0x1F, 
	0xE0, 0x0F, 
	0xE0, 0x07, 
	0xE0, 0x03, 
	0xE0, 0x01, 
	0xE0, 0x00, 
	0x60, 0x00, 
};
static constexpr Bitmap bitmap_icon_replay {
	{ 16, 16 }, bitmap_icon_replay_data
};

static constexpr uint8_t bitmap_icon_scanner_data[] = {
	0x03, 0x00, 
	0x00, 0x00, 
	0x03, 0x00, 
	0x00, 0x00, 
	0x0F, 0x00, 
	0x00, 0x00, 
	0x03, 0x01, 
	0x80, 0x01, 
	0xC3, 0x01, 
	0xE0, 0xFF, 
	0xEF, 0xFF, 
	0xC0, 0x01, 
	0x83, 0x01, 
	0x00, 0x01, 
	0x03, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_scanner {
	{ 16, 16 }, bitmap_icon_scanner_data
};

static constexpr uint8_t bitmap_icon_script_data[] = {
	0xFC, 0x07, 
	0xFA, 0x0F, 
	0x19, 0x1A, 
	0xF9, 0x1F, 
	0x1E, 0x1D, 
	0xF8, 0x1F, 
	0x98, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0x08, 0x14, 
	0xF8, 0x1F, 
	0x48, 0x1E, 
	0xF8, 0xFF, 
	0x78, 0x80, 
	0x30, 0x40, 
	0xE0, 0x3F, 
};
static constexpr Bitmap bitmap_icon_script {
	{ 16, 16 }, bitmap_icon_script_data
};

static constexpr uint8_t bitmap_icon_sd_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0x1F, 
	0xE0, 0x1F, 
	0xF0, 0x1F, 
	0xF8, 0x1F, 
	0x98, 0x18, 
	0xE8, 0x16, 
	0xC8, 0x16, 
	0x98, 0x16, 
	0xB8, 0x16, 
	0xC8, 0x18, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_sd {
	{ 16, 16 }, bitmap_icon_sd_data
};

static constexpr uint8_t bitmap_icon_search_data[] = {
	0xF8, 0x01, 
	0xFC, 0x03, 
	0x0E, 0x07, 
	0x07, 0x0E, 
	0x03, 0x0C, 
	0x0B, 0x0C, 
	0x0B, 0x0C, 
	0x13, 0x0C, 
	0x07, 0x0E, 
	0x0E, 0x07, 
	0xFC, 0x1F, 
	0xF8, 0x3D, 
	0x00, 0x7C, 
	0x00, 0xF8, 
	0x00, 0xF0, 
	0x00, 0x60, 
};
static constexpr Bitmap bitmap_icon_search {
	{ 16, 16 }, bitmap_icon_search_data
};

static constexpr uint8_t bitmap_icon_setup_data[] = {
	0xC0, 0x01, 
	0xC0, 0x01, 
	0xE4, 0x13, 
	0xFE, 0x3F, 
	0xFF, 0x7F, 
	0x3E, 0x3E, 
	0x1C, 0x1C, 
	0x1C, 0x1C, 
	0x1C, 0x1C, 
	0x3E, 0x3E, 
	0xFF, 0x7F, 
	0xFE, 0x3F, 
	0xE4, 0x13, 
	0xC0, 0x01, 
	0xC0, 0x01, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_setup {
	{ 16, 16 }, bitmap_icon_setup_data
};

static constexpr uint8_t bitmap_icon_sleep_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x00, 0x04, 
	0x00, 0x08, 
	0x00, 0x18, 
	0x00, 0x18, 
	0x00, 0x38, 
	0x00, 0x3C, 
	0x00, 0x3C, 
	0x00, 0x3E, 
	0x84, 0x1F, 
	0xF8, 0x1F, 
	0xF0, 0x0F, 
	0xC0, 0x03, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_sleep {
	{ 16, 16 }, bitmap_icon_sleep_data
};

static constexpr uint8_t bitmap_icon_sonde_data[] = {
	0xE0, 0x03, 
	0x90, 0x07, 
	0xE8, 0x0F, 
	0xF8, 0x0F, 
	0xF8, 0x0F, 
	0xF0, 0x07, 
	0xF0, 0x07, 
	0xE0, 0x03, 
	0xE0, 0x03, 
	0xC0, 0x01, 
	0xC0, 0x01, 
	0x80, 0x00, 
	0x80, 0x00, 
	0x80, 0x02, 
	0xC0, 0x01, 
	0xC0, 0x01, 
};
static constexpr Bitmap bitmap_icon_sonde {
	{ 16, 16 }, bitmap_icon_sonde_data
};

static constexpr uint8_t bitmap_icon_soundboard_data[] = {
	0x00, 0x00, 
	0xFF, 0xFF, 
	0x63, 0x8C, 
	0x21, 0x84, 
	0x21, 0x84, 
	0xDF, 0xFB, 
	0x63, 0x8C, 
	0x21, 0x84, 
	0x21, 0x84, 
	0xDF, 0xFB, 
	0x63, 0x8C, 
	0x21, 0x84, 
	0x21, 0x84, 
	0xFF, 0xFF, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_soundboard {
	{ 16, 16 }, bitmap_icon_soundboard_data
};

static constexpr uint8_t bitmap_icon_speaker_data[] = {
	0x00, 0x00, 
	0x00, 0x20, 
	0x00, 0x30, 
	0x00, 0x38, 
	0x00, 0x3C, 
	0xDC, 0x3E, 
	0xDC, 0x3F, 
	0xDC, 0x3F, 
	0xDC, 0x3F, 
	0xDC, 0x3F, 
	0xDC, 0x3E, 
	0x00, 0x3C, 
	0x00, 0x38, 
	0x00, 0x30, 
	0x00, 0x20, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_speaker {
	{ 16, 16 }, bitmap_icon_speaker_data
};

static constexpr uint8_t bitmap_icon_sstv_data[] = {
	0x10, 0x08, 
	0x20, 0x04, 
	0x40, 0x02, 
	0x80, 0x01, 
	0xFF, 0xFF, 
	0x03, 0xF8, 
	0x5D, 0xF0, 
	0x05, 0xD0, 
	0x01, 0xF0, 
	0x01, 0xD0, 
	0x01, 0xF0, 
	0x01, 0xD0, 
	0x01, 0xF0, 
	0x01, 0x90, 
	0x03, 0x98, 
	0xFF, 0xFF, 
};
static constexpr Bitmap bitmap_icon_sstv {
	{ 16, 16 }, bitmap_icon_sstv_data
};

static constexpr uint8_t bitmap_icon_stealth_data[] = {
	0x00, 0x00, 
	0xC0, 0x03, 
	0xE0, 0x07, 
	0xE0, 0x07, 
	0xF8, 0x1F, 
	0x00, 0x00, 
	0xE0, 0x07, 
	0x60, 0x06, 
	0x00, 0x00, 
	0x70, 0x0E, 
	0xF0, 0x0F, 
	0xF8, 0x1F, 
	0xFC, 0x3E, 
	0xFC, 0x3F, 
	0xFC, 0x3E, 
	0xFC, 0x3F, 
};
static constexpr Bitmap bitmap_icon_stealth {
	{ 16, 16 }, bitmap_icon_stealth_data
};

static constexpr uint8_t bitmap_icon_tetra_data[] = {
	0xE0, 0x0F, 
	0x18, 0x38, 
	0xE4, 0x67, 
	0x7E, 0xCE, 
	0xC7, 0xCC, 
	0x00, 0x00, 
	0xFF, 0x4F, 
	0xBA, 0xB2, 
	0x9A, 0xEE, 
	0xBA, 0xB2, 
	0x00, 0x00, 
	0x3B, 0xE3, 
	0x73, 0x7E, 
	0xC6, 0x27, 
	0x1C, 0x18, 
	0xF0, 0x07, 
};
static constexpr Bitmap bitmap_icon_tetra {
	{ 16, 16 }, bitmap_icon_tetra_data
};

static constexpr uint8_t bitmap_icon_tpms_data[] = {
	0xC0, 0x03, 
	0xF0, 0x0F, 
	0x18, 0x18, 
	0xEC, 0x37, 
	0x36, 0x6C, 
	0x1A, 0x58, 
	0x0B, 0xD0, 
	0x0B, 0xD0, 
	0x0B, 0xD0, 
	0x0B, 0xD0, 
	0x1A, 0x58, 
	0x36, 0x6C, 
	0xEC, 0x37, 
	0x18, 0x18, 
	0xF0, 0x0F, 
	0xC0, 0x03, 
};
static constexpr Bitmap bitmap_icon_tpms {
	{ 16, 16 }, bitmap_icon_tpms_data
};

static constexpr uint8_t bitmap_icon_transmit_data[] = {
	0x80, 0x01, 
	0xC0, 0x03, 
	0xE0, 0x07, 
	0xF0, 0x0F, 
	0xF8, 0x1F, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x80, 0x01, 
	0x83, 0xC1, 
	0x03, 0xC0, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
};
static constexpr Bitmap bitmap_icon_transmit {
	{ 16, 16 }, bitmap_icon_transmit_data
};

static constexpr uint8_t bitmap_icon_utilities_data[] = {
	0x30, 0x24, 
	0x78, 0x66, 
	0x78, 0x66, 
	0x78, 0x7E, 
	0x78, 0x3C, 
	0x78, 0x18, 
	0x78, 0x18, 
	0x30, 0x3C, 
	0x30, 0x3C, 
	0x30, 0x3C, 
	0x30, 0x3C, 
	0x30, 0x3C, 
	0x30, 0x3C, 
	0x30, 0x3C, 
	0x30, 0x18, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_icon_utilities {
	{ 16, 16 }, bitmap_icon_utilities_data
};

static constexpr uint8_t bitmap_more_data[] = {
	0x18, 
	0x18, 
	0x18, 
	0x18, 
	0xFF, 
	0x7E, 
	0x3C, 
	0x18, 
};
static constexpr Bitmap bitmap_more {
	{ 8, 8 }, bitmap_more_data
};

static constexpr uint8_t bitmap_play_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0x0C, 0x00, 
	0x3C, 0x00, 
	0xFC, 0x00, 
	0xFC, 0x03, 
	0xFC, 0x0F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x0F, 
	0xFC, 0x03, 
	0xFC, 0x00, 
	0x3C, 0x00, 
	0x0C, 0x00, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_play {
	{ 16, 16 }, bitmap_play_data
};

static constexpr uint8_t bitmap_record_data[] = {
	0xE0, 0x07, 
	0xF8, 0x1F, 
	0xFC, 0x3F, 
	0xFE, 0x7F, 
	0xFE, 0x7F, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0xFF, 0xFF, 
	0xFE, 0x7F, 
	0xFE, 0x7F, 
	0xFC, 0x3F, 
	0xF8, 0x1F, 
	0xE0, 0x07, 
};
static constexpr Bitmap bitmap_record {
	{ 16, 16 }, bitmap_record_data
};

static constexpr uint8_t bitmap_rssipwm_data[] = {
	0x00, 0x00, 0x00, 
	0x8F, 0xE7, 0x7D, 
	0x51, 0x10, 0x10, 
	0x51, 0x10, 0x10, 
	0x8F, 0xE3, 0x10, 
	0x09, 0x04, 0x11, 
	0x11, 0x04, 0x11, 
	0xD1, 0xF3, 0x7C, 
	0x00, 0x00, 0x00, 
	0x3F, 0x1E, 0x1E, 
	0x21, 0x12, 0x12, 
	0x21, 0x12, 0x12, 
	0x21, 0x12, 0x12, 
	0x21, 0x12, 0x12, 
	0x21, 0x12, 0x12, 
	0xE1, 0xF3, 0x73, 
};
static constexpr Bitmap bitmap_rssipwm {
	{ 24, 16 }, bitmap_rssipwm_data
};

static constexpr uint8_t bitmap_sd_card_error_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0x1F, 
	0xE0, 0x1F, 
	0xF0, 0x1F, 
	0xF8, 0x1F, 
	0xC8, 0x13, 
	0x98, 0x19, 
	0x38, 0x1C, 
	0x78, 0x1E, 
	0x38, 0x1C, 
	0x98, 0x19, 
	0xC8, 0x13, 
	0xF8, 0x1F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_sd_card_error {
	{ 16, 16 }, bitmap_sd_card_error_data
};

static constexpr uint8_t bitmap_sd_card_ok_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0x1F, 
	0xE0, 0x1F, 
	0xF0, 0x1F, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0x98, 0x15, 
	0x68, 0x19, 
	0x68, 0x1D, 
	0x68, 0x19, 
	0x98, 0x15, 
	0xF8, 0x1F, 
	0xF8, 0x1F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_sd_card_ok {
	{ 16, 16 }, bitmap_sd_card_ok_data
};

static constexpr uint8_t bitmap_sd_card_unknown_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xC0, 0x1F, 
	0xE0, 0x1F, 
	0xF0, 0x1F, 
	0xF8, 0x1F, 
	0x38, 0x1C, 
	0x98, 0x19, 
	0xF8, 0x1C, 
	0x78, 0x1E, 
	0x78, 0x1E, 
	0xF8, 0x1F, 
	0x78, 0x1E, 
	0xF8, 0x1F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_sd_card_unknown {
	{ 16, 16 }, bitmap_sd_card_unknown_data
};

static constexpr uint8_t bitmap_sig_cw_data[] = {
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0xFE, 0xFF, 0xFF, 0x7F, 
	0xFE, 0xFF, 0xFF, 0x7F, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
};
static constexpr Bitmap bitmap_sig_cw {
	{ 32, 32 }, bitmap_sig_cw_data
};

static constexpr uint8_t bitmap_sig_noise_data[] = {
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x20, 0x00, 0x00, 
	0x00, 0x30, 0x80, 0x00, 
	0x00, 0x30, 0x80, 0x01, 
	0x40, 0x30, 0xC0, 0x03, 
	0xC0, 0x30, 0xC0, 0x03, 
	0xC0, 0x39, 0xC0, 0x72, 
	0xC0, 0x7B, 0x60, 0x76, 
	0x60, 0x6E, 0x60, 0x1E, 
	0x60, 0xCE, 0x6C, 0x0C, 
	0x66, 0xC4, 0x6E, 0x0C, 
	0x66, 0xC0, 0x3E, 0x00, 
	0x2C, 0xC0, 0x3B, 0x00, 
	0x3C, 0xC0, 0x39, 0x00, 
	0x3C, 0xC0, 0x18, 0x00, 
	0x18, 0x40, 0x10, 0x00, 
	0x18, 0x40, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
};
static constexpr Bitmap bitmap_sig_noise {
	{ 32, 32 }, bitmap_sig_noise_data
};

static constexpr uint8_t bitmap_sig_saw_down_data[] = {
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x0E, 0x80, 0x00, 0x60, 
	0x1E, 0x80, 0x01, 0x60, 
	0x3E, 0x80, 0x03, 0x60, 
	0x76, 0x80, 0x07, 0x60, 
	0xE6, 0x80, 0x0F, 0x60, 
	0xC6, 0x81, 0x1D, 0x60, 
	0x86, 0x83, 0x39, 0x60, 
	0x06, 0x87, 0x71, 0x60, 
	0x06, 0x8E, 0xE1, 0x60, 
	0x06, 0x9C, 0xC1, 0x61, 
	0x06, 0xB8, 0x81, 0x63, 
	0x06, 0xF0, 0x01, 0x67, 
	0x06, 0xE0, 0x01, 0x6E, 
	0x06, 0xC0, 0x01, 0x7C, 
	0x06, 0x80, 0x01, 0x78, 
	0x06, 0x00, 0x01, 0x70, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
};
static constexpr Bitmap bitmap_sig_saw_down {
	{ 32, 32 }, bitmap_sig_saw_down_data
};

static constexpr uint8_t bitmap_sig_saw_up_data[] = {
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x06, 0x00, 0x01, 0x70, 
	0x06, 0x80, 0x01, 0x78, 
	0x06, 0xC0, 0x01, 0x7C, 
	0x06, 0xE0, 0x01, 0x6E, 
	0x06, 0xF0, 0x01, 0x67, 
	0x06, 0xB8, 0x81, 0x63, 
	0x06, 0x9C, 0xC1, 0x61, 
	0x06, 0x8E, 0xE1, 0x60, 
	0x06, 0x87, 0x71, 0x60, 
	0x86, 0x83, 0x39, 0x60, 
	0xC6, 0x81, 0x1D, 0x60, 
	0xE6, 0x80, 0x0F, 0x60, 
	0x76, 0x80, 0x07, 0x60, 
	0x3E, 0x80, 0x03, 0x60, 
	0x1E, 0x80, 0x01, 0x60, 
	0x0E, 0x80, 0x00, 0x60, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
};
static constexpr Bitmap bitmap_sig_saw_up {
	{ 32, 32 }, bitmap_sig_saw_up_data
};

static constexpr uint8_t bitmap_sig_sine_data[] = {
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0xC0, 0x00, 
	0x80, 0x07, 0xE0, 0x01, 
	0xC0, 0x0F, 0xF0, 0x03, 
	0xC0, 0x0C, 0x30, 0x03, 
	0x60, 0x18, 0x18, 0x06, 
	0x60, 0x18, 0x18, 0x06, 
	0x60, 0x18, 0x18, 0x06, 
	0x60, 0x18, 0x18, 0x06, 
	0x30, 0x30, 0x0C, 0x0C, 
	0x30, 0x30, 0x0C, 0x0C, 
	0x30, 0x30, 0x0C, 0x0C, 
	0x30, 0x30, 0x0C, 0x0C, 
	0x18, 0x60, 0x06, 0x18, 
	0x1E, 0xE0, 0x07, 0x78, 
	0x0E, 0xC0, 0x03, 0x70, 
	0x06, 0x80, 0x01, 0x60, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
};
static constexpr Bitmap bitmap_sig_sine {
	{ 32, 32 }, bitmap_sig_sine_data
};

static constexpr uint8_t bitmap_sig_square_data[] = {
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0xFE, 0x83, 0xFF, 0x60, 
	0xFE, 0x83, 0xFF, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0x83, 0xC1, 0x60, 
	0x06, 0xFF, 0xC1, 0x7F, 
	0x06, 0xFF, 0xC1, 0x7F, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
};
static constexpr Bitmap bitmap_sig_square {
	{ 32, 32 }, bitmap_sig_square_data
};

static constexpr uint8_t bitmap_sig_tri_data[] = {
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0xC0, 0x00, 
	0x00, 0x03, 0xC0, 0x00, 
	0x80, 0x07, 0xE0, 0x01, 
	0x80, 0x07, 0xE0, 0x01, 
	0xC0, 0x0C, 0x30, 0x03, 
	0xC0, 0x0C, 0x30, 0x03, 
	0x60, 0x18, 0x18, 0x06, 
	0x60, 0x18, 0x18, 0x06, 
	0x30, 0x30, 0x0C, 0x0C, 
	0x30, 0x30, 0x0C, 0x0C, 
	0x18, 0x60, 0x06, 0x18, 
	0x18, 0x60, 0x06, 0x18, 
	0x0E, 0xC0, 0x03, 0x70, 
	0x0E, 0xC0, 0x03, 0x70, 
	0x06, 0x80, 0x01, 0x60, 
	0x06, 0x80, 0x01, 0x60, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 
};
static constexpr Bitmap bitmap_sig_tri {
	{ 32, 32 }, bitmap_sig_tri_data
};

static constexpr uint8_t bitmap_stop_data[] = {
	0x00, 0x00, 
	0x00, 0x00, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0xFC, 0x3F, 
	0x00, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_stop {
	{ 16, 16 }, bitmap_stop_data
};

static constexpr uint8_t bitmap_stripes_data[] = {
	0xFF, 0x03, 0xC0, 
	0xFF, 0x01, 0xE0, 
	0xFF, 0x00, 0xF0, 
	0x7F, 0x00, 0xF8, 
	0x3F, 0x00, 0xFC, 
	0x1F, 0x00, 0xFE, 
	0x0F, 0x00, 0xFF, 
	0x07, 0x80, 0xFF, 
};
static constexpr Bitmap bitmap_stripes {
	{ 24, 8 }, bitmap_stripes_data
};

static constexpr uint8_t bitmap_tab_edge_data[] = {
	0x00, 
	0x01, 
	0x01, 
	0x03, 
	0x03, 
	0x03, 
	0x07, 
	0x07, 
	0x07, 
	0x0F, 
	0x0F, 
	0x0F, 
	0x1F, 
	0x1F, 
	0x1F, 
	0x1F, 
	0x3F, 
	0x3F, 
	0x3F, 
	0x7F, 
	0x7F, 
	0x7F, 
	0xFF, 
	0xFF, 
};
static constexpr Bitmap bitmap_tab_edge {
	{ 8, 24 }, bitmap_tab_edge_data
};

static constexpr uint8_t bitmap_target_data[] = {
	0x80, 0x00, 
	0x80, 0x00, 
	0xE0, 0x03, 
	0x90, 0x04, 
	0x88, 0x08, 
	0x04, 0x10, 
	0x04, 0x10, 
	0x1F, 0x7C, 
	0x04, 0x10, 
	0x04, 0x10, 
	0x88, 0x08, 
	0x90, 0x04, 
	0xE0, 0x03, 
	0x80, 0x00, 
	0x80, 0x00, 
	0x00, 0x00, 
};
static constexpr Bitmap bitmap_target {
	{ 16, 16 }, bitmap_target_data
};

static constexpr uint8_t bitmap_target_calibrate_data[] = {
	0x02, 0x00, 0x00, 0x40, 
	0x07, 0x00, 0x00, 0xE0, 
	0x0E, 0x00, 0x00, 0x70, 
	0x1C, 0x00, 0x00, 0x38, 
	0x38, 0x00, 0x00, 0x1C, 
	0x70, 0x00, 0x00, 0x0E, 
	0xE0, 0x00, 0x00, 0x07, 
	0xC0, 0x01, 0x80, 0x03, 
	0x80, 0x03, 0xC0, 0x01, 
	0x00, 0x07, 0xE0, 0x00, 
	0x00, 0x0E, 0x70, 0x00, 
	0x00, 0x1C, 0x38, 0x00, 
	0x00, 0x38, 0x1C, 0x00, 
	0x00, 0x70, 0x0E, 0x00, 
	0x00, 0xE0, 0x07, 0x00, 
	0x00, 0xC0, 0x03, 0x00, 
	0x00, 0xC0, 0x03, 0x00, 
	0x00, 0xE0, 0x07, 0x00, 
	0x00, 0x70, 0x0E, 0x00, 
	0x00, 0x38, 0x1C, 0x00, 
	0x00, 0x1C, 0x38, 0x00, 
	0x00, 0x0E, 0x70, 0x00, 
	0x00, 0x07, 0xE0, 0x00, 
	0x80, 0x03, 0xC0, 0x01, 
	0xC0, 0x01, 0x80, 0x03, 
	0xE0, 0x00, 0x00, 0x07, 
	0x70, 0x00, 0x00, 0x0E, 
	0x38, 0x00, 0x00, 0x1C, 
	0x1C, 0x00, 0x00, 0x38, 
	0x0E, 0x00, 0x00, 0x70, 
	0x07, 0x00, 0x00, 0xE0, 
	0x02, 0x00, 0x00, 0x40, 
};
static constexpr Bitmap bitmap_target_calibrate {
	{ 32, 32 }, bitmap_target_calibrate_data
};

static constexpr uint8_t bitmap_target_verify_data[] = {
	0x00, 0xE0, 0x07, 0x00, 
	0x00, 0xFC, 0x3F, 0x00, 
	0x00, 0x1F, 0xF8, 0x00, 
	0xC0, 0x03, 0xC0, 0x03, 
	0xE0, 0x00, 0x00, 0x07, 
	0x70, 0x00, 0x00, 0x0E, 
	0x38, 0x00, 0x00, 0x1C, 
	0x18, 0x00, 0x00, 0x18, 
	0x0C, 0x00, 0x00, 0x30, 
	0x0C, 0x00, 0x00, 0x30, 
	0x06, 0x00, 0x00, 0x60, 
	0x06, 0x00, 0x00, 0x60, 
	0x06, 0x00, 0x00, 0x60, 
	0x03, 0x80, 0x01, 0xC0, 
	0x03, 0x80, 0x01, 0xC0, 
	0x03, 0xE0, 0x07, 0xC0, 
	0x03, 0xE0, 0x07, 0xC0, 
	0x03, 0x80, 0x01, 0xC0, 
	0x03, 0x80, 0x01, 0xC0, 
	0x06, 0x00, 0x00, 0x60, 
	0x06, 0x00, 0x00, 0x60, 
	0x06, 0x00, 0x00, 0x60, 
	0x0C, 0x00, 0x00, 0x30, 
	0x0C, 0x00, 0x00, 0x30, 
	0x18, 0x00, 0x00, 0x18, 
	0x38, 0x00, 0x00, 0x1C, 
	0x70, 0x00, 0x00, 0x0E, 
	0xE0, 0x00, 0x00, 0x07, 
	0xC0, 0x03, 0xC0, 0x03, 
	0x00, 0x1F, 0xF8, 0x00, 
	0x00, 0xFC, 0x3F, 0x00, 
	0x00, 0xE0, 0x07, 0x00, 
};
static constexpr Bitmap bitmap_target_verify {
	{ 32, 32 }, bitmap_target_verify_data
};


} /* namespace ui */

#endif/*__BITMAP_HPP__*/
