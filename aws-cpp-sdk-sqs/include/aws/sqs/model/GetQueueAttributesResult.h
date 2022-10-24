/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/sqs/model/QueueAttributeName.h>
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
  class AWS_SQS_API GetQueueAttributesResult
  {
  public:
    GetQueueAttributesResult();
    GetQueueAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetQueueAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Map<QueueAttributeName, Aws::String>& GetAttributes() const{ return m_attributes; }

    
    inline void SetAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { m_attributes = value; }

    
    inline void SetAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { m_attributes = std::move(value); }

    
    inline GetQueueAttributesResult& WithAttributes(const Aws::Map<QueueAttributeName, Aws::String>& value) { SetAttributes(value); return *this;}

    
    inline GetQueueAttributesResult& WithAttributes(Aws::Map<QueueAttributeName, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    
    inline GetQueueAttributesResult& AddAttributes(const QueueAttributeName& key, const Aws::String& value) { m_attributes.emplace(key, value); return *this; }

    
    inline GetQueueAttributesResult& AddAttributes(QueueAttributeName&& key, const Aws::String& value) { m_attributes.emplace(std::move(key), value); return *this; }

    
    inline GetQueueAttributesResult& AddAttributes(const QueueAttributeName& key, Aws::String&& value) { m_attributes.emplace(key, std::move(value)); return *this; }

    
    inline GetQueueAttributesResult& AddAttributes(QueueAttributeName&& key, Aws::String&& value) { m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    
    inline GetQueueAttributesResult& AddAttributes(QueueAttributeName&& key, const char* value) { m_attributes.emplace(std::move(key), value); return *this; }

    
    inline GetQueueAttributesResult& AddAttributes(const QueueAttributeName& key, const char* value) { m_attributes.emplace(key, value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetQueueAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetQueueAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Map<QueueAttributeName, Aws::String> m_attributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
