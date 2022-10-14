/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API ChangeMessageVisibilityRequest : public SQSRequest
  {
  public:
    ChangeMessageVisibilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeMessageVisibility"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    
    inline ChangeMessageVisibilityRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    
    inline ChangeMessageVisibilityRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    
    inline ChangeMessageVisibilityRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    
    inline const Aws::String& GetReceiptHandle() const{ return m_receiptHandle; }

    
    inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }

    
    inline void SetReceiptHandle(const Aws::String& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = value; }

    
    inline void SetReceiptHandle(Aws::String&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = std::move(value); }

    
    inline void SetReceiptHandle(const char* value) { m_receiptHandleHasBeenSet = true; m_receiptHandle.assign(value); }

    
    inline ChangeMessageVisibilityRequest& WithReceiptHandle(const Aws::String& value) { SetReceiptHandle(value); return *this;}

    
    inline ChangeMessageVisibilityRequest& WithReceiptHandle(Aws::String&& value) { SetReceiptHandle(std::move(value)); return *this;}

    
    inline ChangeMessageVisibilityRequest& WithReceiptHandle(const char* value) { SetReceiptHandle(value); return *this;}


    
    inline int GetVisibilityTimeout() const{ return m_visibilityTimeout; }

    
    inline bool VisibilityTimeoutHasBeenSet() const { return m_visibilityTimeoutHasBeenSet; }

    
    inline void SetVisibilityTimeout(int value) { m_visibilityTimeoutHasBeenSet = true; m_visibilityTimeout = value; }

    
    inline ChangeMessageVisibilityRequest& WithVisibilityTimeout(int value) { SetVisibilityTimeout(value); return *this;}

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet = false;

    int m_visibilityTimeout;
    bool m_visibilityTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
