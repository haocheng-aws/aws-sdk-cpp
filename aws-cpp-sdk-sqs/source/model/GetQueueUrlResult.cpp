﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/GetQueueUrlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQueueUrlResult::GetQueueUrlResult()
{
}

GetQueueUrlResult::GetQueueUrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetQueueUrlResult& GetQueueUrlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueueUrl"))
  {
    m_queueUrl = jsonValue.GetString("QueueUrl");

  }



  return *this;
}
