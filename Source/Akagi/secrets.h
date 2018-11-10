/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2018
*
*  TITLE:       SECRETS.H
*
*  VERSION:     3.04
*
*  DATE:        10 Nov 2018
*
*  Secrets used for decryption.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

#pragma once

#define UACME_KEY_SIZE      32
//
// Note:
// Attach Kuma key and packed unit when building not for github 
// otherwise remediation methods will fail,
// g_bSecretsXX need to be re-generated too.
//

#ifdef _WIN64
static const unsigned char g_bSecrets[288] = {
    0x06, 0xC2, 0x85, 0x0B, 0x18, 0xF2, 0x13, 0x07, 0xD8, 0x8F, 0x05, 0x86, 0x59, 0x0F, 0x41, 0x02,
    0x59, 0xD2, 0x49, 0xFA, 0x58, 0xC0, 0xD4, 0x79, 0xC1, 0xE3, 0x6F, 0x79, 0x3D, 0x27, 0xF3, 0x61,
    0x19, 0x2C, 0x14, 0x39, 0x72, 0x2D, 0x5B, 0xB7, 0x58, 0x8E, 0x49, 0x4E, 0xCC, 0x0C, 0x83, 0x8B,
    0x40, 0xCD, 0xC1, 0xC0, 0xF7, 0xA9, 0x34, 0x8B, 0x0C, 0x4B, 0x0B, 0x52, 0x08, 0x9A, 0xE6, 0x48,
    0xAB, 0xCF, 0xC4, 0x50, 0x8A, 0x4C, 0x83, 0x24, 0x0B, 0xDC, 0xB9, 0x73, 0x7B, 0x94, 0x5C, 0x46,
    0xA0, 0x3E, 0xB3, 0x21, 0x60, 0x89, 0x77, 0x84, 0xE5, 0x0C, 0x80, 0xA7, 0x42, 0x28, 0xE3, 0xF4,
    0xA5, 0x32, 0x81, 0x5A, 0x2F, 0xC0, 0xFD, 0x1C, 0x03, 0xDB, 0x9B, 0x94, 0x80, 0xCC, 0x98, 0x30,
    0x95, 0xF4, 0xAB, 0x9D, 0xA9, 0x6F, 0x78, 0x9A, 0x9D, 0x63, 0x41, 0x74, 0xAE, 0xE7, 0x38, 0x64,
    0x44, 0xC0, 0xD9, 0x45, 0xA3, 0xA3, 0x58, 0x7F, 0xFA, 0x1E, 0xD8, 0xDD, 0x8D, 0xFB, 0xF0, 0xED,
    0x09, 0xC2, 0x85, 0x0B, 0xE0, 0x4F, 0xDA, 0x57, 0xF7, 0xF7, 0xBB, 0x8F, 0x0E, 0x53, 0xF4, 0xD8,
    0xF8, 0x1A, 0x4F, 0xFF, 0x24, 0xDA, 0xFF, 0x66, 0xA2, 0x18, 0x5D, 0xBC, 0xA8, 0xBE, 0x28, 0x6D,
    0x6E, 0x7F, 0x9A, 0x2E, 0x7F, 0x2D, 0x5A, 0xB5, 0x49, 0x4F, 0xD0, 0x50, 0xCA, 0x47, 0x5C, 0xE5,
    0x58, 0x0D, 0x47, 0x2D, 0x3B, 0xDF, 0x69, 0x04, 0xB0, 0xC7, 0xF7, 0xBE, 0xF1, 0x13, 0x21, 0x9F,
    0x19, 0xBE, 0xF3, 0x67, 0x1D, 0x80, 0xDA, 0xA6, 0x01, 0xD6, 0xAD, 0x5B, 0x24, 0xB5, 0xE9, 0xE9,
    0x95, 0x22, 0xF0, 0x77, 0xA9, 0xC6, 0x55, 0xB5, 0x1F, 0x3B, 0x6A, 0xBF, 0xCA, 0xBE, 0x4F, 0xF7,
    0xF6, 0x5D, 0x0A, 0x23, 0x9B, 0x47, 0x66, 0x14, 0x06, 0x45, 0x84, 0x09, 0x48, 0x93, 0x27, 0x4F,
    0xF1, 0xC9, 0xDF, 0x0F, 0x30, 0x4C, 0xDF, 0x75, 0xAB, 0xEA, 0x72, 0x51, 0x2C, 0x56, 0x42, 0x3C,
    0x79, 0x6C, 0x89, 0x46, 0x9A, 0xA1, 0xCD, 0x38, 0x22, 0x3E, 0x96, 0x00, 0xE5, 0xA8, 0x67, 0x21
};
#else
static const unsigned char g_bSecrets[180] = {
    0xA9, 0xC2, 0x85, 0x0B, 0x3C, 0x19, 0x47, 0x63, 0xCC, 0xE0, 0x3E, 0x26, 0x1A, 0x36, 0x7E, 0xDA,
    0x24, 0x9A, 0x70, 0xC3, 0xE6, 0x62, 0x7A, 0x92, 0x22, 0xEB, 0x88, 0xF6, 0x41, 0x6B, 0x24, 0x49,
    0x02, 0xFB, 0x78, 0x6D, 0xDF, 0x2D, 0x5B, 0xB7, 0x0B, 0x3F, 0xF0, 0xB9, 0x88, 0xCB, 0x9F, 0xA0,
    0x6D, 0xAB, 0xE1, 0x1C, 0x04, 0x26, 0xF2, 0xD3, 0x88, 0xE4, 0x57, 0x22, 0x0F, 0x96, 0xC8, 0x91,
    0xC3, 0x14, 0xF7, 0xAA, 0x18, 0x50, 0x43, 0x26, 0xA4, 0xDC, 0xB9, 0x73, 0x15, 0xFF, 0xF5, 0x75,
    0x58, 0xEE, 0x4E, 0xDA, 0x8E, 0xEA, 0x63, 0x4D, 0x18, 0xFC, 0x54, 0x6D, 0x0F, 0x4A, 0x43, 0x50,
    0x57, 0xAE, 0xF5, 0x65, 0xD0, 0x55, 0xF7, 0x91, 0x41, 0x17, 0x4F, 0x1E, 0x2A, 0xCC, 0x98, 0x30,
    0x43, 0x5B, 0xF8, 0x00, 0x6A, 0x06, 0xDE, 0xE0, 0x52, 0x19, 0x6F, 0x7D, 0x9B, 0x9E, 0xEA, 0x03,
    0xBF, 0xD9, 0xCB, 0xC6, 0x01, 0xF2, 0xE2, 0x18, 0x16, 0xA0, 0xCF, 0x1F, 0xED, 0x61, 0x18, 0x23,
    0x9F, 0x3D, 0x7A, 0xF4, 0x5D, 0x82, 0xDA, 0x88, 0x0C, 0x79, 0x48, 0xD3, 0x51, 0x7B, 0x39, 0x77,
    0x76, 0x3A, 0xF8, 0xBD, 0xA9, 0xC5, 0x11, 0xBF, 0xC7, 0x86, 0xDD, 0xA2, 0x49, 0xE9, 0x28, 0x1C,
    0xF6, 0x97, 0x26, 0x75
};
#endif