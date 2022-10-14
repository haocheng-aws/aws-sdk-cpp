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

  class AWS_SQS_API DeleteMessageBatchResultEntry
  {
  public:
    DeleteMessageBatchResultEntry();
    DeleteMessageBatchResultEntry(Aws::Utils::Json::JsonView jsonValue);
    DeleteMessageBatchResultEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline DeleteMessageBatchResultEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline DeleteMessageBatchResultEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline DeleteMessageBatchResultEntry& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
