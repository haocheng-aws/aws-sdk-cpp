/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sqs/model/Message.h>
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
  class AWS_SQS_API ReceiveMessageResult
  {
  public:
    ReceiveMessageResult();
    ReceiveMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ReceiveMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<Message>& GetMessages() const{ return m_messages; }

    
    inline void SetMessages(const Aws::Vector<Message>& value) { m_messages = value; }

    
    inline void SetMessages(Aws::Vector<Message>&& value) { m_messages = std::move(value); }

    
    inline ReceiveMessageResult& WithMessages(const Aws::Vector<Message>& value) { SetMessages(value); return *this;}

    
    inline ReceiveMessageResult& WithMessages(Aws::Vector<Message>&& value) { SetMessages(std::move(value)); return *this;}

    
    inline ReceiveMessageResult& AddMessages(const Message& value) { m_messages.push_back(value); return *this; }

    
    inline ReceiveMessageResult& AddMessages(Message&& value) { m_messages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Message> m_messages;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
