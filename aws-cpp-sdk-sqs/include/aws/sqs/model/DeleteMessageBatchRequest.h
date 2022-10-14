/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/DeleteMessageBatchRequestEntry.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API DeleteMessageBatchRequest : public SQSRequest
  {
  public:
    DeleteMessageBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMessageBatch"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    
    inline DeleteMessageBatchRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    
    inline DeleteMessageBatchRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    
    inline DeleteMessageBatchRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    
    inline const Aws::Vector<DeleteMessageBatchRequestEntry>& GetEntries() const{ return m_entries; }

    
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    
    inline void SetEntries(const Aws::Vector<DeleteMessageBatchRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    
    inline void SetEntries(Aws::Vector<DeleteMessageBatchRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    
    inline DeleteMessageBatchRequest& WithEntries(const Aws::Vector<DeleteMessageBatchRequestEntry>& value) { SetEntries(value); return *this;}

    
    inline DeleteMessageBatchRequest& WithEntries(Aws::Vector<DeleteMessageBatchRequestEntry>&& value) { SetEntries(std::move(value)); return *this;}

    
    inline DeleteMessageBatchRequest& AddEntries(const DeleteMessageBatchRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    
    inline DeleteMessageBatchRequest& AddEntries(DeleteMessageBatchRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    Aws::Vector<DeleteMessageBatchRequestEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
