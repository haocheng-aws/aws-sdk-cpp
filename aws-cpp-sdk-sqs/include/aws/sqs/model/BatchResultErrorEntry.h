/**
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

  class AWS_SQS_API BatchResultErrorEntry
  {
  public:
    BatchResultErrorEntry();
    BatchResultErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    BatchResultErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline BatchResultErrorEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline BatchResultErrorEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline BatchResultErrorEntry& WithId(const char* value) { SetId(value); return *this;}


    
    inline bool GetSenderFault() const{ return m_senderFault; }

    
    inline bool SenderFaultHasBeenSet() const { return m_senderFaultHasBeenSet; }

    
    inline void SetSenderFault(bool value) { m_senderFaultHasBeenSet = true; m_senderFault = value; }

    
    inline BatchResultErrorEntry& WithSenderFault(bool value) { SetSenderFault(value); return *this;}


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline BatchResultErrorEntry& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline BatchResultErrorEntry& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline BatchResultErrorEntry& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline BatchResultErrorEntry& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline BatchResultErrorEntry& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline BatchResultErrorEntry& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_senderFault;
    bool m_senderFaultHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
