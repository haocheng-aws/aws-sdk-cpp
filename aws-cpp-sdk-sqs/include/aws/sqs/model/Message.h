/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sqs/model/MessageSystemAttributeName.h>
#include <aws/sqs/model/MessageAttributeValue.h>
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

  class AWS_SQS_API Message
  {
  public:
    Message();
    Message(Aws::Utils::Json::JsonView jsonValue);
    Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    
    inline Message& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    
    inline Message& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    
    inline Message& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    
    inline const Aws::String& GetReceiptHandle() const{ return m_receiptHandle; }

    
    inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }

    
    inline void SetReceiptHandle(const Aws::String& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = value; }

    
    inline void SetReceiptHandle(Aws::String&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = std::move(value); }

    
    inline void SetReceiptHandle(const char* value) { m_receiptHandleHasBeenSet = true; m_receiptHandle.assign(value); }

    
    inline Message& WithReceiptHandle(const Aws::String& value) { SetReceiptHandle(value); return *this;}

    
    inline Message& WithReceiptHandle(Aws::String&& value) { SetReceiptHandle(std::move(value)); return *this;}

    
    inline Message& WithReceiptHandle(const char* value) { SetReceiptHandle(value); return *this;}


    
    inline const Aws::String& GetMD5OfBody() const{ return m_mD5OfBody; }

    
    inline bool MD5OfBodyHasBeenSet() const { return m_mD5OfBodyHasBeenSet; }

    
    inline void SetMD5OfBody(const Aws::String& value) { m_mD5OfBodyHasBeenSet = true; m_mD5OfBody = value; }

    
    inline void SetMD5OfBody(Aws::String&& value) { m_mD5OfBodyHasBeenSet = true; m_mD5OfBody = std::move(value); }

    
    inline void SetMD5OfBody(const char* value) { m_mD5OfBodyHasBeenSet = true; m_mD5OfBody.assign(value); }

    
    inline Message& WithMD5OfBody(const Aws::String& value) { SetMD5OfBody(value); return *this;}

    
    inline Message& WithMD5OfBody(Aws::String&& value) { SetMD5OfBody(std::move(value)); return *this;}

    
    inline Message& WithMD5OfBody(const char* value) { SetMD5OfBody(value); return *this;}


    
    inline const Aws::String& GetBody() const{ return m_body; }

    
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    
    inline Message& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    
    inline Message& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    
    inline Message& WithBody(const char* value) { SetBody(value); return *this;}


    
    inline const Aws::Map<MessageSystemAttributeName, Aws::String>& GetAttributes() const{ return m_attributes; }

    
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    
    inline void SetAttributes(const Aws::Map<MessageSystemAttributeName, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    
    inline void SetAttributes(Aws::Map<MessageSystemAttributeName, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    
    inline Message& WithAttributes(const Aws::Map<MessageSystemAttributeName, Aws::String>& value) { SetAttributes(value); return *this;}

    
    inline Message& WithAttributes(Aws::Map<MessageSystemAttributeName, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    
    inline Message& AddAttributes(const MessageSystemAttributeName& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    
    inline Message& AddAttributes(MessageSystemAttributeName&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    
    inline Message& AddAttributes(const MessageSystemAttributeName& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    
    inline Message& AddAttributes(MessageSystemAttributeName&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    
    inline Message& AddAttributes(MessageSystemAttributeName&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    
    inline Message& AddAttributes(const MessageSystemAttributeName& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    
    inline const Aws::String& GetMD5OfMessageAttributes() const{ return m_mD5OfMessageAttributes; }

    
    inline bool MD5OfMessageAttributesHasBeenSet() const { return m_mD5OfMessageAttributesHasBeenSet; }

    
    inline void SetMD5OfMessageAttributes(const Aws::String& value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes = value; }

    
    inline void SetMD5OfMessageAttributes(Aws::String&& value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes = std::move(value); }

    
    inline void SetMD5OfMessageAttributes(const char* value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes.assign(value); }

    
    inline Message& WithMD5OfMessageAttributes(const Aws::String& value) { SetMD5OfMessageAttributes(value); return *this;}

    
    inline Message& WithMD5OfMessageAttributes(Aws::String&& value) { SetMD5OfMessageAttributes(std::move(value)); return *this;}

    
    inline Message& WithMD5OfMessageAttributes(const char* value) { SetMD5OfMessageAttributes(value); return *this;}


    
    inline const Aws::Map<Aws::String, MessageAttributeValue>& GetMessageAttributes() const{ return m_messageAttributes; }

    
    inline bool MessageAttributesHasBeenSet() const { return m_messageAttributesHasBeenSet; }

    
    inline void SetMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = value; }

    
    inline void SetMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes = std::move(value); }

    
    inline Message& WithMessageAttributes(const Aws::Map<Aws::String, MessageAttributeValue>& value) { SetMessageAttributes(value); return *this;}

    
    inline Message& WithMessageAttributes(Aws::Map<Aws::String, MessageAttributeValue>&& value) { SetMessageAttributes(std::move(value)); return *this;}

    
    inline Message& AddMessageAttributes(const Aws::String& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

    
    inline Message& AddMessageAttributes(Aws::String&& key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), value); return *this; }

    
    inline Message& AddMessageAttributes(const Aws::String& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    
    inline Message& AddMessageAttributes(Aws::String&& key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(std::move(key), std::move(value)); return *this; }

    
    inline Message& AddMessageAttributes(const char* key, MessageAttributeValue&& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, std::move(value)); return *this; }

    
    inline Message& AddMessageAttributes(const char* key, const MessageAttributeValue& value) { m_messageAttributesHasBeenSet = true; m_messageAttributes.emplace(key, value); return *this; }

  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet = false;

    Aws::String m_mD5OfBody;
    bool m_mD5OfBodyHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Map<MessageSystemAttributeName, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_mD5OfMessageAttributes;
    bool m_mD5OfMessageAttributesHasBeenSet = false;

    Aws::Map<Aws::String, MessageAttributeValue> m_messageAttributes;
    bool m_messageAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
