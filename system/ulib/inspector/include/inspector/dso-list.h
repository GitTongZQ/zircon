// Copyright 2016 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include <zircon/types.h>

namespace inspector {

struct dsoinfo_t;

extern dsoinfo_t* dso_fetch_list(zx_handle_t h, const char* name);

extern void dso_free_list(dsoinfo_t*);

extern dsoinfo_t* dso_lookup (dsoinfo_t* dso_list, zx_vaddr_t pc);

extern void dso_print_list(dsoinfo_t* dso_list);

extern zx_status_t dso_find_debug_file(dsoinfo_t* dso, const char** out_debug_file);

}  // namespace inspector