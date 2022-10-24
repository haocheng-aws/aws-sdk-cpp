/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SQS
{
namespace Model
{

ResponseMetadata::ResponseMetadata() : 
    m_requestIdHasBeenSet(false)
{
}

ResponseMetadata::ResponseMetadata(JsonView jsonValue) : 
    m_requestIdHasBeenSet(false)
{
  *this = jsonValue;
}

ResponseMetadata& ResponseMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

    m_requestIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ResponseMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("RequestId", m_requestId);

  }

  return payload;
}

} // namespace Model
} // namespace SQS
} // namespace Aws
