/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_SQS_API ListQueuesResult
  {
  public:
    ListQueuesResult();
    ListQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<Aws::String>& GetQueueUrls() const{ return m_queueUrls; }

    
    inline void SetQueueUrls(const Aws::Vector<Aws::String>& value) { m_queueUrls = value; }

    
    inline void SetQueueUrls(Aws::Vector<Aws::String>&& value) { m_queueUrls = std::move(value); }

    
    inline ListQueuesResult& WithQueueUrls(const Aws::Vector<Aws::String>& value) { SetQueueUrls(value); return *this;}

    
    inline ListQueuesResult& WithQueueUrls(Aws::Vector<Aws::String>&& value) { SetQueueUrls(std::move(value)); return *this;}

    
    inline ListQueuesResult& AddQueueUrls(const Aws::String& value) { m_queueUrls.push_back(value); return *this; }

    
    inline ListQueuesResult& AddQueueUrls(Aws::String&& value) { m_queueUrls.push_back(std::move(value)); return *this; }

    
    inline ListQueuesResult& AddQueueUrls(const char* value) { m_queueUrls.push_back(value); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListQueuesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListQueuesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListQueuesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListQueuesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListQueuesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_queueUrls;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
