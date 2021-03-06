#pragma once

#include <float.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <malloc.h>
#include <assert.h>

#include "math.h"

#define EPSILON 0.001f

#define stack_array_length(arr) sizeof(arr) / sizeof(arr[0])

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;