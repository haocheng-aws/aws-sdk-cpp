﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  class AWS_SQS_API SendMessageBatchResultEntry
  {
  public:
    SendMessageBatchResultEntry();
    SendMessageBatchResultEntry(Aws::Utils::Json::JsonView jsonValue);
    SendMessageBatchResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline SendMessageBatchResultEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline SendMessageBatchResultEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline SendMessageBatchResultEntry& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    
    inline SendMessageBatchResultEntry& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    
    inline SendMessageBatchResultEntry& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    
    inline SendMessageBatchResultEntry& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    
    inline const Aws::String& GetMD5OfMessageBody() const{ return m_mD5OfMessageBody; }

    
    inline bool MD5OfMessageBodyHasBeenSet() const { return m_mD5OfMessageBodyHasBeenSet; }

    
    inline void SetMD5OfMessageBody(const Aws::String& value) { m_mD5OfMessageBodyHasBeenSet = true; m_mD5OfMessageBody = value; }

    
    inline void SetMD5OfMessageBody(Aws::String&& value) { m_mD5OfMessageBodyHasBeenSet = true; m_mD5OfMessageBody = std::move(value); }

    
    inline void SetMD5OfMessageBody(const char* value) { m_mD5OfMessageBodyHasBeenSet = true; m_mD5OfMessageBody.assign(value); }

    
    inline SendMessageBatchResultEntry& WithMD5OfMessageBody(const Aws::String& value) { SetMD5OfMessageBody(value); return *this;}

    
    inline SendMessageBatchResultEntry& WithMD5OfMessageBody(Aws::String&& value) { SetMD5OfMessageBody(std::move(value)); return *this;}

    
    inline SendMessageBatchResultEntry& WithMD5OfMessageBody(const char* value) { SetMD5OfMessageBody(value); return *this;}


    
    inline const Aws::String& GetMD5OfMessageAttributes() const{ return m_mD5OfMessageAttributes; }

    
    inline bool MD5OfMessageAttributesHasBeenSet() const { return m_mD5OfMessageAttributesHasBeenSet; }

    
    inline void SetMD5OfMessageAttributes(const Aws::String& value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes = value; }

    
    inline void SetMD5OfMessageAttributes(Aws::String&& value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes = std::move(value); }

    
    inline void SetMD5OfMessageAttributes(const char* value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes.assign(value); }

    
    inline SendMessageBatchResultEntry& WithMD5OfMessageAttributes(const Aws::String& value) { SetMD5OfMessageAttributes(value); return *this;}

    
    inline SendMessageBatchResultEntry& WithMD5OfMessageAttributes(Aws::String&& value) { SetMD5OfMessageAttributes(std::move(value)); return *this;}

    
    inline SendMessageBatchResultEntry& WithMD5OfMessageAttributes(const char* value) { SetMD5OfMessageAttributes(value); return *this;}


    
    inline const Aws::String& GetMD5OfMessageSystemAttributes() const{ return m_mD5OfMessageSystemAttributes; }

    
    inline bool MD5OfMessageSystemAttributesHasBeenSet() const { return m_mD5OfMessageSystemAttributesHasBeenSet; }

    
    inline void SetMD5OfMessageSystemAttributes(const Aws::String& value) { m_mD5OfMessageSystemAttributesHasBeenSet = true; m_mD5OfMessageSystemAttributes = value; }

    
    inline void SetMD5OfMessageSystemAttributes(Aws::String&& value) { m_mD5OfMessageSystemAttributesHasBeenSet = true; m_mD5OfMessageSystemAttributes = std::move(value); }

    
    inline void SetMD5OfMessageSystemAttributes(const char* value) { m_mD5OfMessageSystemAttributesHasBeenSet = true; m_mD5OfMessageSystemAttributes.assign(value); }

    
    inline SendMessageBatchResultEntry& WithMD5OfMessageSystemAttributes(const Aws::String& value) { SetMD5OfMessageSystemAttributes(value); return *this;}

    
    inline SendMessageBatchResultEntry& WithMD5OfMessageSystemAttributes(Aws::String&& value) { SetMD5OfMessageSystemAttributes(std::move(value)); return *this;}

    
    inline SendMessageBatchResultEntry& WithMD5OfMessageSystemAttributes(const char* value) { SetMD5OfMessageSystemAttributes(value); return *this;}


    
    inline const Aws::String& GetSequenceNumber() const{ return m_sequenceNumber; }

    
    inline bool SequenceNumberHasBeenSet() const { return m_sequenceNumberHasBeenSet; }

    
    inline void SetSequenceNumber(const Aws::String& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = value; }

    
    inline void SetSequenceNumber(Aws::String&& value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber = std::move(value); }

    
    inline void SetSequenceNumber(const char* value) { m_sequenceNumberHasBeenSet = true; m_sequenceNumber.assign(value); }

    
    inline SendMessageBatchResultEntry& WithSequenceNumber(const Aws::String& value) { SetSequenceNumber(value); return *this;}

    
    inline SendMessageBatchResultEntry& WithSequenceNumber(Aws::String&& value) { SetSequenceNumber(std::move(value)); return *this;}

    
    inline SendMessageBatchResultEntry& WithSequenceNumber(const char* value) { SetSequenceNumber(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Aws::String m_mD5OfMessageBody;
    bool m_mD5OfMessageBodyHasBeenSet = false;

    Aws::String m_mD5OfMessageAttributes;
    bool m_mD5OfMessageAttributesHasBeenSet = false;

    Aws::String m_mD5OfMessageSystemAttributes;
    bool m_mD5OfMessageSystemAttributesHasBeenSet = false;

    Aws::String m_sequenceNumber;
    bool m_sequenceNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
