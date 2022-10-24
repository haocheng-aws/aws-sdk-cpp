/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sqs/model/ResponseMetadata.h>
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
  class AWS_SQS_API GetQueueUrlResult
  {
  public:
    GetQueueUrlResult();
    GetQueueUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetQueueUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrl = value; }

    
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrl = std::move(value); }

    
    inline void SetQueueUrl(const char* value) { m_queueUrl.assign(value); }

    
    inline GetQueueUrlResult& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    
    inline GetQueueUrlResult& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    
    inline GetQueueUrlResult& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetQueueUrlResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetQueueUrlResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_queueUrl;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
