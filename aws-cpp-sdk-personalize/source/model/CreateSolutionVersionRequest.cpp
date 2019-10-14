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

#include <aws/personalize/model/CreateSolutionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSolutionVersionRequest::CreateSolutionVersionRequest() : 
    m_solutionArnHasBeenSet(false),
    m_trainingMode(TrainingMode::NOT_SET),
    m_trainingModeHasBeenSet(false)
{
}

Aws::String CreateSolutionVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_solutionArnHasBeenSet)
  {
   payload.WithString("solutionArn", m_solutionArn);

  }

  if(m_trainingModeHasBeenSet)
  {
   payload.WithString("trainingMode", TrainingModeMapper::GetNameForTrainingMode(m_trainingMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSolutionVersionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonPersonalize.CreateSolutionVersion"));
  return headers;

}




