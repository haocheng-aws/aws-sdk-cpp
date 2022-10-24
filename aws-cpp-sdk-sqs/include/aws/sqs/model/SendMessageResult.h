/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sqs/model/ResponseMetadata.h>
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
  class AWS_SQS_API SendMessageResult
  {
  public:
    SendMessageResult();
    SendMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SendMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetMD5OfMessageBody() const{ return m_mD5OfMessageBody; }

    
    inline void SetMD5OfMessageBody(const Aws::String& value) { m_mD5OfMessageBody = value; }

    
    inline void SetMD5OfMessageBody(Aws::String&& value) { m_mD5OfMessageBody = std::move(value); }

    
    inline void SetMD5OfMessageBody(const char* value) { m_mD5OfMessageBody.assign(value); }

    
    inline SendMessageResult& WithMD5OfMessageBody(const Aws::String& value) { SetMD5OfMessageBody(value); return *this;}

    
    inline SendMessageResult& WithMD5OfMessageBody(Aws::String&& value) { SetMD5OfMessageBody(std::move(value)); return *this;}

    
    inline SendMessageResult& WithMD5OfMessageBody(const char* value) { SetMD5OfMessageBody(value); return *this;}


    
    inline const Aws::String& GetMD5OfMessageAttributes() const{ return m_mD5OfMessageAttributes; }

    
    inline void SetMD5OfMessageAttributes(const Aws::String& value) { m_mD5OfMessageAttributes = value; }

    
    inline void SetMD5OfMessageAttributes(Aws::String&& value) { m_mD5OfMessageAttributes = std::move(value); }

    
    inline void SetMD5OfMessageAttributes(const char* value) { m_mD5OfMessageAttributes.assign(value); }

    
    inline SendMessageResult& WithMD5OfMessageAttributes(const Aws::String& value) { SetMD5OfMessageAttributes(value); return *this;}

    
    inline SendMessageResult& WithMD5OfMessageAttributes(Aws::String&& value) { SetMD5OfMessageAttributes(std::move(value)); return *this;}

    
    inline SendMessageResult& WithMD5OfMessageAttributes(const char* value) { SetMD5OfMessageAttributes(value); return *this;}


    
    inline const Aws::String& GetMD5OfMessageSystemAttributes() const{ return m_mD5OfMessageSystemAttributes; }

    
    inline void SetMD5OfMessageSystemAttributes(const Aws::String& value) { m_mD5OfMessageSystemAttributes = value; }

    
    inline void SetMD5OfMessageSystemAttributes(Aws::String&& value) { m_mD5OfMessageSystemAttributes = std::move(value); }

    
    inline void SetMD5OfMessageSystemAttributes(const char* value) { m_mD5OfMessageSystemAttributes.assign(value); }

    
    inline SendMessageResult& WithMD5OfMessageSystemAttributes(const Aws::String& value) { SetMD5OfMessageSystemAttributes(value); return *this;}

    
    inline SendMessageResult& WithMD5OfMessageSystemAttributes(Aws::String&& value) { SetMD5OfMessageSystemAttributes(std::move(value)); return *this;}

    
    inline SendMessageResult& WithMD5OfMessageSystemAttributes(const char* value) { SetMD5OfMessageSystemAttributes(value); return *this;}


    
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    
    inline void SetMessageId(Aws::String&& value) { m_messageId = std::move(value); }

    
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    
    inline SendMessageResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    
    inline SendMessageResult& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    
    inline SendMessageResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    
    inline const Aws::String& GetSequenceNumber() const{ return m_sequenceNumber; }

    
    inline void SetSequenceNumber(const Aws::String& value) { m_sequenceNumber = value; }

    
    inline void SetSequenceNumber(Aws::String&& value) { m_sequenceNumber = std::move(value); }

    
    inline void SetSequenceNumber(const char* value) { m_sequenceNumber.assign(value); }

    
    inline SendMessageResult& WithSequenceNumber(const Aws::String& value) { SetSequenceNumber(value); return *this;}

    
    inline SendMessageResult& WithSequenceNumber(Aws::String&& value) { SetSequenceNumber(std::move(value)); return *this;}

    
    inline SendMessageResult& WithSequenceNumber(const char* value) { SetSequenceNumber(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline SendMessageResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SendMessageResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_mD5OfMessageBody;

    Aws::String m_mD5OfMessageAttributes;

    Aws::String m_mD5OfMessageSystemAttributes;

    Aws::String m_messageId;

    Aws::String m_sequenceNumber;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
