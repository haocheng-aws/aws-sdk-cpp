/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/QueueAttributeName.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API ReceiveMessageRequest : public SQSRequest
  {
  public:
    ReceiveMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReceiveMessage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    
    inline ReceiveMessageRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    
    inline ReceiveMessageRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    
    inline ReceiveMessageRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    
    inline const Aws::Vector<QueueAttributeName>& GetAttributeNames() const{ return m_attributeNames; }

    
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }

    
    inline void SetAttributeNames(const Aws::Vector<QueueAttributeName>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    
    inline void SetAttributeNames(Aws::Vector<QueueAttributeName>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }

    
    inline ReceiveMessageRequest& WithAttributeNames(const Aws::Vector<QueueAttributeName>& value) { SetAttributeNames(value); return *this;}

    
    inline ReceiveMessageRequest& WithAttributeNames(Aws::Vector<QueueAttributeName>&& value) { SetAttributeNames(std::move(value)); return *this;}

    
    inline ReceiveMessageRequest& AddAttributeNames(const QueueAttributeName& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    
    inline ReceiveMessageRequest& AddAttributeNames(QueueAttributeName&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetMessageAttributeNames() const{ return m_messageAttributeNames; }

    
    inline bool MessageAttributeNamesHasBeenSet() const { return m_messageAttributeNamesHasBeenSet; }

    
    inline void SetMessageAttributeNames(const Aws::Vector<Aws::String>& value) { m_messageAttributeNamesHasBeenSet = true; m_messageAttributeNames = value; }

    
    inline void SetMessageAttributeNames(Aws::Vector<Aws::String>&& value) { m_messageAttributeNamesHasBeenSet = true; m_messageAttributeNames = std::move(value); }

    
    inline ReceiveMessageRequest& WithMessageAttributeNames(const Aws::Vector<Aws::String>& value) { SetMessageAttributeNames(value); return *this;}

    
    inline ReceiveMessageRequest& WithMessageAttributeNames(Aws::Vector<Aws::String>&& value) { SetMessageAttributeNames(std::move(value)); return *this;}

    
    inline ReceiveMessageRequest& AddMessageAttributeNames(const Aws::String& value) { m_messageAttributeNamesHasBeenSet = true; m_messageAttributeNames.push_back(value); return *this; }

    
    inline ReceiveMessageRequest& AddMessageAttributeNames(Aws::String&& value) { m_messageAttributeNamesHasBeenSet = true; m_messageAttributeNames.push_back(std::move(value)); return *this; }

    
    inline ReceiveMessageRequest& AddMessageAttributeNames(const char* value) { m_messageAttributeNamesHasBeenSet = true; m_messageAttributeNames.push_back(value); return *this; }


    
    inline int GetMaxNumberOfMessages() const{ return m_maxNumberOfMessages; }

    
    inline bool MaxNumberOfMessagesHasBeenSet() const { return m_maxNumberOfMessagesHasBeenSet; }

    
    inline void SetMaxNumberOfMessages(int value) { m_maxNumberOfMessagesHasBeenSet = true; m_maxNumberOfMessages = value; }

    
    inline ReceiveMessageRequest& WithMaxNumberOfMessages(int value) { SetMaxNumberOfMessages(value); return *this;}


    
    inline int GetVisibilityTimeout() const{ return m_visibilityTimeout; }

    
    inline bool VisibilityTimeoutHasBeenSet() const { return m_visibilityTimeoutHasBeenSet; }

    
    inline void SetVisibilityTimeout(int value) { m_visibilityTimeoutHasBeenSet = true; m_visibilityTimeout = value; }

    
    inline ReceiveMessageRequest& WithVisibilityTimeout(int value) { SetVisibilityTimeout(value); return *this;}


    
    inline int GetWaitTimeSeconds() const{ return m_waitTimeSeconds; }

    
    inline bool WaitTimeSecondsHasBeenSet() const { return m_waitTimeSecondsHasBeenSet; }

    
    inline void SetWaitTimeSeconds(int value) { m_waitTimeSecondsHasBeenSet = true; m_waitTimeSeconds = value; }

    
    inline ReceiveMessageRequest& WithWaitTimeSeconds(int value) { SetWaitTimeSeconds(value); return *this;}


    
    inline const Aws::String& GetReceiveRequestAttemptId() const{ return m_receiveRequestAttemptId; }

    
    inline bool ReceiveRequestAttemptIdHasBeenSet() const { return m_receiveRequestAttemptIdHasBeenSet; }

    
    inline void SetReceiveRequestAttemptId(const Aws::String& value) { m_receiveRequestAttemptIdHasBeenSet = true; m_receiveRequestAttemptId = value; }

    
    inline void SetReceiveRequestAttemptId(Aws::String&& value) { m_receiveRequestAttemptIdHasBeenSet = true; m_receiveRequestAttemptId = std::move(value); }

    
    inline void SetReceiveRequestAttemptId(const char* value) { m_receiveRequestAttemptIdHasBeenSet = true; m_receiveRequestAttemptId.assign(value); }

    
    inline ReceiveMessageRequest& WithReceiveRequestAttemptId(const Aws::String& value) { SetReceiveRequestAttemptId(value); return *this;}

    
    inline ReceiveMessageRequest& WithReceiveRequestAttemptId(Aws::String&& value) { SetReceiveRequestAttemptId(std::move(value)); return *this;}

    
    inline ReceiveMessageRequest& WithReceiveRequestAttemptId(const char* value) { SetReceiveRequestAttemptId(value); return *this;}

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    Aws::Vector<QueueAttributeName> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_messageAttributeNames;
    bool m_messageAttributeNamesHasBeenSet = false;

    int m_maxNumberOfMessages;
    bool m_maxNumberOfMessagesHasBeenSet = false;

    int m_visibilityTimeout;
    bool m_visibilityTimeoutHasBeenSet = false;

    int m_waitTimeSeconds;
    bool m_waitTimeSecondsHasBeenSet = false;

    Aws::String m_receiveRequestAttemptId;
    bool m_receiveRequestAttemptIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
