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

  class AWS_SQS_API DeleteMessageBatchRequestEntry
  {
  public:
    DeleteMessageBatchRequestEntry();
    DeleteMessageBatchRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    DeleteMessageBatchRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline DeleteMessageBatchRequestEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline DeleteMessageBatchRequestEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline DeleteMessageBatchRequestEntry& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetReceiptHandle() const{ return m_receiptHandle; }

    
    inline bool ReceiptHandleHasBeenSet() const { return m_receiptHandleHasBeenSet; }

    
    inline void SetReceiptHandle(const Aws::String& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = value; }

    
    inline void SetReceiptHandle(Aws::String&& value) { m_receiptHandleHasBeenSet = true; m_receiptHandle = std::move(value); }

    
    inline void SetReceiptHandle(const char* value) { m_receiptHandleHasBeenSet = true; m_receiptHandle.assign(value); }

    
    inline DeleteMessageBatchRequestEntry& WithReceiptHandle(const Aws::String& value) { SetReceiptHandle(value); return *this;}

    
    inline DeleteMessageBatchRequestEntry& WithReceiptHandle(Aws::String&& value) { SetReceiptHandle(std::move(value)); return *this;}

    
    inline DeleteMessageBatchRequestEntry& WithReceiptHandle(const char* value) { SetReceiptHandle(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_receiptHandle;
    bool m_receiptHandleHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
