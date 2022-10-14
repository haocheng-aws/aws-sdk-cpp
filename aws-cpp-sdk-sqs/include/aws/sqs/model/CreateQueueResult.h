/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SQS
{
namespace Model
{
  class AWS_SQS_API CreateQueueResult
  {
  public:
    CreateQueueResult();
    CreateQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrl = value; }

    
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrl = std::move(value); }

    
    inline void SetQueueUrl(const char* value) { m_queueUrl.assign(value); }

    
    inline CreateQueueResult& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    
    inline CreateQueueResult& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    
    inline CreateQueueResult& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}

  private:

    Aws::String m_queueUrl;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
