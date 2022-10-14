/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sqs/model/MessageAttributeValue.h>
#include <aws/sqs/model/MessageSystemAttributeNameForSends.h>
#include <aws/sqs/model/MessageSystemAttributeValue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SQS
{
namespace Model
{

  class AWS_SQS_API SendMessageBatchRequestEntry
  {
  public:
    SendMessageBatchRequestEntry();
    SendMessageBatchRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    SendMessageBatchRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline SendMessageBatchRequestEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline SendMessageBatchRequestEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline SendMessageBatchRequestEntry& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetMessageBody() const{ return m_messageBody; }

    
    inline bool MessageBodyHasBeenSet() const { return m_messageBodyHasBeenSet; }

    
    inline void SetMessageBody(const Aws::String& value) { m_messageBodyHasBeenSet = true; m_messageBody = value; }

    
    inline void SetMessageBody(Aws::String&& value) { m_messageBodyHasBeenSet = true; m_messageBody = std::move(value); }

    
    inline void SetMessageBody(const char* value) { m_messageBodyHasBeenSet = true; m_messageBody.assign(value); }

    
    inline SendMessageBatchRequestEntry& WithMessageBody(const Aws::String& value) { SetMessageBody(value); return *this;}

    
    inline SendMessageBatchRequestEntry& WithMessageBody(Aws::String&& value) { SetMessageBody(std::move(value)); return *this;}

    
    inline SendMessageBatchRequestEntry& WithMessageBody(const char* value) { SetMessageBody(value); return *this;}


    
    inline int GetDelaySeconds() const{ return m_delaySeconds; }

    
    inline bool DelaySecondsHasBeenSet() const { return m_delaySecondsHasBeenSet; }

    
    inline void SetDelaySeconds(int value) { m_delaySecondsHasBeenSet = true; m_delaySeconds = value; }

    
    inline SendMessageBatchRequestEntry& WithDelaySeconds(int value) { SetDelaySeconds(value); return *this;}


    
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }

    
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }

    
    inline SendMessageBatchRequestEntry& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    
    inline SendMessageBatchRequestEntry& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}

    
    inline SendMessageBatchRequestEntry& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

    
    inline SendMessageBatchRequestEntry& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }

    
    inline SendMessageBatchRequestEntry& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    
    inline SendMessageBatchRequestEntry& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }

    
    inline SendMessageBatchRequestEntry& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    
    inline SendMessageBatchRequestEntry& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }


    
    inline const Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>& GetMessageSystemAttributes() const{ return m_messageSystemAttributes; }

    
    inline bool MessageSystemAttributesHasBeenSet() const { return m_messageSystemAttributesHasBeenSet; }

    
    inline void SetMessageSystemAttributes(const Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes = value; }

    
    inline void SetMessageSystemAttributes(Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>&& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes = std::move(value); }

    
    inline SendMessageBatchRequestEntry& WithMessageSystemAttributes(const Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>& value) { SetMessageSystemAttributes(value); return *this;}

    
    inline SendMessageBatchRequestEntry& WithMessageSystemAttributes(Aws::Map<MessageSystemAttributeNameForSends, MessageSystemAttributeValue>&& value) { SetMessageSystemAttributes(std::move(value)); return *this;}

    
    inline SendMessageBatchRequestEntry& AddMessageSystemAttributes(const MessageSystemAttributeNameForSends& key, const MessageSystemAttributeValue& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes.emplace(key, value); return *this; }

    
    inline SendMessageBatchRequestEntry& AddMessageSystemAttributes(MessageSystemAttributeNameForSends&& key, const MessageSystemAttributeValue& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes.emplace(std::move(key), value); return *this; }

    
    inline SendMessageBatchRequestEntry& AddMessageSystemAttributes(const MessageSystemAttributeNameForSends& key, MessageSystemAttributeValue&& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes.emplace(key, std::move(value)); return *this; }

    
    inline SendMessageBatchRequestEntry& AddMessageSystemAttributes(MessageSystemAttributeNameForSends&& key, MessageSystemAttributeValue&& value) { m_messageSystemAttributesHasBeenSet = true; m_messageSystemAttributes.emplace(std::move(key), std::move(value)); return *this; }


    
    inline const Aws::String& GetMessageDeduplicationId() const{ return m_messageDeduplicationId; }

    
    inline bool MessageDeduplicationIdHasBeenSet() const { return m_messageDeduplicationIdHasBeenSet; }

    
    inline void SetMessageDeduplicationId(const Aws::String& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = value; }

    
    inline void SetMessageDeduplicationId(Aws::String&& value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId = std::move(value); }

    
    inline void SetMessageDeduplicationId(const char* value) { m_messageDeduplicationIdHasBeenSet = true; m_messageDeduplicationId.assign(value); }

    
    inline SendMessageBatchRequestEntry& WithMessageDeduplicationId(const Aws::String& value) { SetMessageDeduplicationId(value); return *this;}

    
    inline SendMessageBatchRequestEntry& WithMessageDeduplicationId(Aws::String&& value) { SetMessageDeduplicationId(std::move(value)); return *this;}

    
    inline SendMessageBatchRequestEntry& WithMessageDeduplicationId(const char* value) { SetMessageDeduplicationId(value); return *this;}


    
    inline const Aws::String& GetMessageGroupId() const{ return m_messageGroupId; }

    
    inline bool MessageGroupIdHasBeenSet() const { return m_messageGroupIdHasBeenSet; }

    
    inline void SetMessageGroupId(const Aws::String& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = value; }

    
    inline void SetMessageGroupId(Aws::String&& value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId = std::move(value); }

    
    inline void SetMessageGroupId(const char* value) { m_messageGroupIdHasBeenSet = true; m_messageGroupId.assign(value); }

    
    inline SendMessageBatchRequestEntry& WithMessageGroupId(const Aws::String& value) { SetMessageGroupId(value); return *this;}

    
    inline SendMessageBatchRequestEntry& WithMessageGroupId(Aws::String&& value) { SetMessageGroupId(std::move(value)); return *this;}

    
    inline SendMessageBatchRequestEntry& WithMessageGroupId(const char* value) { SetMessageGroupId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

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
