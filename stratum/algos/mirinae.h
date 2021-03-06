// Copyright (c) 2018 iamstenman
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MBCHASH_H
#define MBCHASH_H

// #include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void mirinae_hash(const char* input, char* output, uint32_t height);

#ifdef __cplusplus
}
#endif

#endif
