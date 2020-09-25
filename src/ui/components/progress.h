// Copyright 2020 Shift Crypto AG
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _PROGRESS_H_
#define _PROGRESS_H_

#include <ui/component.h>

/**
 * Creates an progress bar component.
 */
component_t* progress_create(const char* title);

/**
 * Set the progress.
 * @param[in] progress value must be in [0, 1].
 */
void progress_set(component_t* component, float progress);

#endif
