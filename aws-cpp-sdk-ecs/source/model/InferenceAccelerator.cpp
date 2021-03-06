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

#include <aws/ecs/model/InferenceAccelerator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

InferenceAccelerator::InferenceAccelerator() : 
    m_deviceNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

InferenceAccelerator::InferenceAccelerator(JsonView jsonValue) : 
    m_deviceNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceAccelerator& InferenceAccelerator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceType"))
  {
    m_deviceType = jsonValue.GetString("deviceType");

    m_deviceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceAccelerator::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("deviceName", m_deviceName);

  }

  if(m_deviceTypeHasBeenSet)
  {
   payload.WithString("deviceType", m_deviceType);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
