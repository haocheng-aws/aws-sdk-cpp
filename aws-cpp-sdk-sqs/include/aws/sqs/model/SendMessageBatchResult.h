/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/SendMessageBatchResultEntry.h>
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
  class AWS_SQS_API SendMessageBatchResult
  {
  public:
    SendMessageBatchResult();
    SendMessageBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SendMessageBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<SendMessageBatchResultEntry>& GetSuccessful() const{ return m_successful; }

    
    inline void SetSuccessful(const Aws::Vector<SendMessageBatchResultEntry>& value) { m_successful = value; }

    
    inline void SetSuccessful(Aws::Vector<SendMessageBatchResultEntry>&& value) { m_successful = std::move(value); }

    
    inline SendMessageBatchResult& WithSuccessful(const Aws::Vector<SendMessageBatchResultEntry>& value) { SetSuccessful(value); return *this;}

    
    inline SendMessageBatchResult& WithSuccessful(Aws::Vector<SendMessageBatchResultEntry>&& value) { SetSuccessful(std::move(value)); return *this;}

    
    inline SendMessageBatchResult& AddSuccessful(const SendMessageBatchResultEntry& value) { m_successful.push_back(value); return *this; }

    
    inline SendMessageBatchResult& AddSuccessful(SendMessageBatchResultEntry&& value) { m_successful.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<BatchResultErrorEntry>& GetFailed() const{ return m_failed; }

    
    inline void SetFailed(const Aws::Vector<BatchResultErrorEntry>& value) { m_failed = value; }

    
    inline void SetFailed(Aws::Vector<BatchResultErrorEntry>&& value) { m_failed = std::move(value); }

    
    inline SendMessageBatchResult& WithFailed(const Aws::Vector<BatchResultErrorEntry>& value) { SetFailed(value); return *this;}

    
    inline SendMessageBatchResult& WithFailed(Aws::Vector<BatchResultErrorEntry>&& value) { SetFailed(std::move(value)); return *this;}

    
    inline SendMessageBatchResult& AddFailed(const BatchResultErrorEntry& value) { m_failed.push_back(value); return *this; }

    
    inline SendMessageBatchResult& AddFailed(BatchResultErrorEntry&& value) { m_failed.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SendMessageBatchResultEntry> m_successful;

    Aws::Vector<BatchResultErrorEntry> m_failed;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
