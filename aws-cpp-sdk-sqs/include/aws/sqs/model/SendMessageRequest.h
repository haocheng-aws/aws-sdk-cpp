/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sqs/model/MessageAttributeValue.h>
#include <aws/sqs/model/MessageSystemAttributeNameForSends.h>
#include <aws/sqs/model/MessageSystemAttributeValue.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API SendMessageRequest : public SQSRequest
  {
  public:
    SendMessageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendMessage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    
    inline SendMessageRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    
    inline SendMessageRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    
    inline SendMessageRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }

    
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }

    
    inline void SetMessageBody(const Aws::String& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }

    
    inline void SetMessageBody(Aws::String&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::move(value); }

    
    inline void SetMessageBody(const char* value) { m_messageBodyHasBeenSet = true; m_messageBody.assign(value); }

    
    inline SendMessageRequest& WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}

    
    inline SendMessageRequest& WithMessageBody(Aws::String&& value) { SetMessageBody(std::move(value)); return *this;}

    
    inline SendMessageRequest& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}


    
    inline int GetDelaySeconds() const{ return m_delaySeconds; }

    
    inline bool DelaySecondsHasBeenSet() const { return m_delaySecondsHasBeenSet; }

    
    inline void SetDelaySeconds(int value) { m_delaySecondsHasBeenSet = true; m_delaySeconds = value; }

    
    inline SendMessageRequest& WithDelaySeconds(int value) { SetDelaySeconds(value); return *this;}


    
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }

    
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }

    
    inline SendMessageRequest& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    
    inline SendMessageRequest& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}

    
    inline SendMessageRequest& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

    
    inline SendMessageRequest& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }

    
    inline SendMessageRequest& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    
    inline SendMessageRequest& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }

    
    inline SendMessageRequest& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    
    inline SendMessageRequest& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }


    
    inline const Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>& GetMessageSystemAttributes() const{ return m_messageSystemAttributes; }

    
    inline bool MessageSystemAttributesHasBeenSet() const { return m_messageSystemAttributesHasBeenSet; }

    
    inline void SetMessageSystemAttributes(const Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes = value; }

    
    inline void SetMessageSystemAttributes(Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>&& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes = std::move(value); }

    
    inline SendMessageRequest& WithMessageSystemAttributes(const Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>& value) { SetMessageSystemAttributes(value); return *this;}

    
    inline SendMessageRequest& WithMessageSystemAttributes(Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>&& value) { SetMessageSystemAttributes(std::move(value)); return *this;}

    
    inline SendMessageRequest& AddMessageSystemAttributes(const MessageSystemAttributeNameForSends& key, const MessageSystemAttributeValue& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes.emplace(key, value); return *this; }

    
    inline SendMessageRequest& AddMessageSystemAttributes(MessageSystemAttributeNameForSends&& key, const MessageSystemAttributeValue& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes.emplace(std::move(key), value); return *this; }

    
    inline SendMessageRequest& AddMessageSystemAttributes(const MessageSystemAttributeNameForSends& key, MessageSystemAttributeValue&& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes.emplace(key, std::move(value)); return *this; }

    
    inline SendMessageRequest& AddMessageSystemAttributes(MessageSystemAttributeNameForSends&& key, MessageSystemAttributeValue&& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes.emplace(std::move(key), std::move(value)); return *this; }


    
    inline const Aws::String& GetMessageDeduplicationId() const{ return m_messageDeduplicationId; }

    
    inline bool MessageDeduplicationIdHasBeenSet() const { return m_messageDeduplicationIdHasBeenSet; }

    
    inline void SetMessageDeduplicationId(const Aws::String& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = value; }

    
    inline void SetMessageDeduplicationId(Aws::String&& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = std::move(value); }

    
    inline void SetMessageDeduplicationId(const char* value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId.assign(value); }

    
    inline SendMessageRequest& WithMessageDeduplicationId(const Aws::String& value) { SetMessageDeduplicationId(value); return *this;}

    
    inline SendMessageRequest& WithMessageDeduplicationId(Aws::String&& value) { SetMessageDeduplicationId(std::move(value)); return *this;}

    
    inline SendMessageRequest& WithMessageDeduplicationId(const char* value) { SetMessageDeduplicationId(value); return *this;}


    
    inline const Aws::String& GetMessageGroupId() const{ return m_messageGroupId; }

    
    inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }

    
    inline void SetMessageGroupId(const Aws::String& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = value; }

    
    inline void SetMessageGroupId(Aws::String&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = std::move(value); }

    
    inline void SetMessageGroupId(const char* value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId.assign(value); }

    
    inline SendMessageRequest& WithMessageGroupId(const Aws::String& value) { SetMessageGroupId(value); return *this;}

    
    inline SendMessageRequest& WithMessageGroupId(Aws::String&& value) { SetMessageGroupId(std::move(value)); return *this;}

    
    inline SendMessageRequest& WithMessageGroupId(const char* value) { SetMessageGroupId(value); return *this;}

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    Aws::String m_messageBody;
    bool m_messageBodyHasBeenSet = false;

    int m_delaySeconds;
    bool m_delaySecondsHasBeenSet = false;

    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet = false;

    Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue> m_messageSystemAttributes;
    bool m_messageSystemAttributesHasBeenSet = false;

    Aws::String m_messageDeduplicationId;
    bool m_messageDeduplicationIdHasBeenSet = false;

    Aws::String m_messageGroupId;
    bool m_messageGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
