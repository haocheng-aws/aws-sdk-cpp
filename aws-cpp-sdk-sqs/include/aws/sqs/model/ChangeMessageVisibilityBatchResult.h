/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchResultEntry.h>
#include <aws/sqs/model/BatchResultErrorEntry.h>
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
  class AWS_SQS_API ChangeMessageVisibilityBatchResult
  {
  public:
    ChangeMessageVisibilityBatchResult();
    ChangeMessageVisibilityBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ChangeMessageVisibilityBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<ChangeMessageVisibilityBatchResultEntry>& GetSuccessful() const{ return m_successful; }

    
    inline void SetSuccessful(const Aws::Vector<ChangeMessageVisibilityBatchResultEntry>& value) { m_successful = value; }

    
    inline void SetSuccessful(Aws::Vector<ChangeMessageVisibilityBatchResultEntry>&& value) { m_successful = std::move(value); }

    
    inline ChangeMessageVisibilityBatchResult& WithSuccessful(const Aws::Vector<ChangeMessageVisibilityBatchResultEntry>& value) { SetSuccessful(value); return *this;}

    
    inline ChangeMessageVisibilityBatchResult& WithSuccessful(Aws::Vector<ChangeMessageVisibilityBatchResultEntry>&& value) { SetSuccessful(std::move(value)); return *this;}

    
    inline ChangeMessageVisibilityBatchResult& AddSuccessful(const ChangeMessageVisibilityBatchResultEntry& value) { m_successful.push_back(value); return *this; }

    
    inline ChangeMessageVisibilityBatchResult& AddSuccessful(ChangeMessageVisibilityBatchResultEntry&& value) { m_successful.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<BatchResultErrorEntry>& GetFailed() const{ return m_failed; }

    
    inline void SetFailed(const Aws::Vector<BatchResultErrorEntry>& value) { m_failed = value; }

    
    inline void SetFailed(Aws::Vector<BatchResultErrorEntry>&& value) { m_failed = std::move(value); }

    
    inline ChangeMessageVisibilityBatchResult& WithFailed(const Aws::Vector<BatchResultErrorEntry>& value) { SetFailed(value); return *this;}

    
    inline ChangeMessageVisibilityBatchResult& WithFailed(Aws::Vector<BatchResultErrorEntry>&& value) { SetFailed(std::move(value)); return *this;}

    
    inline ChangeMessageVisibilityBatchResult& AddFailed(const BatchResultErrorEntry& value) { m_failed.push_back(value); return *this; }

    
    inline ChangeMessageVisibilityBatchResult& AddFailed(BatchResultErrorEntry&& value) { m_failed.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ChangeMessageVisibilityBatchResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ChangeMessageVisibilityBatchResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ChangeMessageVisibilityBatchResultEntry> m_successful;

    Aws::Vector<BatchResultErrorEntry> m_failed;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
