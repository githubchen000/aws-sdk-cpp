﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppConfig
{
namespace Model
{
  enum class TriggeredBy
  {
    NOT_SET,
    USER,
    APPCONFIG,
    CLOUDWATCH_ALARM,
    INTERNAL_ERROR
  };

namespace TriggeredByMapper
{
AWS_APPCONFIG_API TriggeredBy GetTriggeredByForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForTriggeredBy(TriggeredBy value);
} // namespace TriggeredByMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
