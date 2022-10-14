/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/DeleteMessageBatchResultEntry.h>
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
  class AWS_SQS_API DeleteMessageBatchResult
  {
  public:
    DeleteMessageBatchResult();
    DeleteMessageBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteMessageBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<DeleteMessageBatchResultEntry>& GetSuccessful() const{ return m_successful; }

    
    inline void SetSuccessful(const Aws::Vector<DeleteMessageBatchResultEntry>& value) { m_successful = value; }

    
    inline void SetSuccessful(Aws::Vector<DeleteMessageBatchResultEntry>&& value) { m_successful = std::move(value); }

    
    inline DeleteMessageBatchResult& WithSuccessful(const Aws::Vector<DeleteMessageBatchResultEntry>& value) { SetSuccessful(value); return *this;}

    
    inline DeleteMessageBatchResult& WithSuccessful(Aws::Vector<DeleteMessageBatchResultEntry>&& value) { SetSuccessful(std::move(value)); return *this;}

    
    inline DeleteMessageBatchResult& AddSuccessful(const DeleteMessageBatchResultEntry& value) { m_successful.push_back(value); return *this; }

    
    inline DeleteMessageBatchResult& AddSuccessful(DeleteMessageBatchResultEntry&& value) { m_successful.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<BatchResultErrorEntry>& GetFailed() const{ return m_failed; }

    
    inline void SetFailed(const Aws::Vector<BatchResultErrorEntry>& value) { m_failed = value; }

    
    inline void SetFailed(Aws::Vector<BatchResultErrorEntry>&& value) { m_failed = std::move(value); }

    
    inline DeleteMessageBatchResult& WithFailed(const Aws::Vector<BatchResultErrorEntry>& value) { SetFailed(value); return *this;}

    
    inline DeleteMessageBatchResult& WithFailed(Aws::Vector<BatchResultErrorEntry>&& value) { SetFailed(std::move(value)); return *this;}

    
    inline DeleteMessageBatchResult& AddFailed(const BatchResultErrorEntry& value) { m_failed.push_back(value); return *this; }

    
    inline DeleteMessageBatchResult& AddFailed(BatchResultErrorEntry&& value) { m_failed.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DeleteMessageBatchResultEntry> m_successful;

    Aws::Vector<BatchResultErrorEntry> m_failed;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
