/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/ChangeMessageVisibilityBatchRequestEntry.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API ChangeMessageVisibilityBatchRequest : public SQSRequest
  {
  public:
    ChangeMessageVisibilityBatchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeMessageVisibilityBatch"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    
    inline ChangeMessageVisibilityBatchRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    
    inline ChangeMessageVisibilityBatchRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    
    inline ChangeMessageVisibilityBatchRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    
    inline const Aws::Vector<ChangeMessageVisibilityBatchRequestEntry>& GetEntries() const{ return m_entries; }

    
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    
    inline void SetEntries(const Aws::Vector<ChangeMessageVisibilityBatchRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    
    inline void SetEntries(Aws::Vector<ChangeMessageVisibilityBatchRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    
    inline ChangeMessageVisibilityBatchRequest& WithEntries(const Aws::Vector<ChangeMessageVisibilityBatchRequestEntry>& value) { SetEntries(value); return *this;}

    
    inline ChangeMessageVisibilityBatchRequest& WithEntries(Aws::Vector<ChangeMessageVisibilityBatchRequestEntry>&& value) { SetEntries(std::move(value)); return *this;}

    
    inline ChangeMessageVisibilityBatchRequest& AddEntries(const ChangeMessageVisibilityBatchRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    
    inline ChangeMessageVisibilityBatchRequest& AddEntries(ChangeMessageVisibilityBatchRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    Aws::Vector<ChangeMessageVisibilityBatchRequestEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
