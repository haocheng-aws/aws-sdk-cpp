﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/SendMessageBatchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendMessageBatchResult::SendMessageBatchResult()
{
}

SendMessageBatchResult::SendMessageBatchResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SendMessageBatchResult& SendMessageBatchResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Successful"))
  {
    Array<JsonView> successfulJsonList = jsonValue.GetArray("Successful");
    for(unsigned successfulIndex = 0; successfulIndex < successfulJsonList.GetLength(); ++successfulIndex)
    {
      m_successful.push_back(successfulJsonList[successfulIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Failed"))
  {
    Array<JsonView> failedJsonList = jsonValue.GetArray("Failed");
    for(unsigned failedIndex = 0; failedIndex < failedJsonList.GetLength(); ++failedIndex)
    {
      m_failed.push_back(failedJsonList[failedIndex].AsObject());
    }
  }



  return *this;
}
