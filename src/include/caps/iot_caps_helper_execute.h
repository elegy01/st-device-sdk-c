/* ***************************************************************************
 *
 * Copyright 2019-2020 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#ifndef _IOT_CAPS_HELPER_EXECUTE_
#define _IOT_CAPS_HELPER_EXECUTE_

#include "iot_caps_helper.h"

#ifdef __cplusplus
extern "C" {
#endif

const static struct iot_caps_execute {
    const char *id;
    const struct execute_attr_data {
        const char *name;
        const unsigned char property;
        const unsigned char valueType;
    } attr_data;
    const struct execute_cmd_execute { const char* name; } cmd_execute;
} caps_helper_execute = {
    .id = "execute",
    .attr_data = {
        .name = "data",
        .property = ATTR_SET_VALUE_REQUIRED,
        .valueType = VALUE_TYPE_OBJECT,
    },
    .cmd_execute = { .name = "execute" }, // arguments: command(string) args(object) 
};

#ifdef __cplusplus
}
#endif

#endif /* _IOT_CAPS_HERLPER_EXECUTE_ */
