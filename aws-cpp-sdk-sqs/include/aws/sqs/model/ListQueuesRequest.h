﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API ListQueuesRequest : public SQSRequest
  {
  public:
    ListQueuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQueues"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetQueueNamePrefix() const{ return m_queueNamePrefix; }

    
    inline bool QueueNamePrefixHasBeenSet() const { return m_queueNamePrefixHasBeenSet; }

    
    inline void SetQueueNamePrefix(const Aws::String& value) { m_queueNamePrefixHasBeenSet = true; m_queueNamePrefix = value; }

    
    inline void SetQueueNamePrefix(Aws::String&& value) { m_queueNamePrefixHasBeenSet = true; m_queueNamePrefix = std::move(value); }

    
    inline void SetQueueNamePrefix(const char* value) { m_queueNamePrefixHasBeenSet = true; m_queueNamePrefix.assign(value); }

    
    inline ListQueuesRequest& WithQueueNamePrefix(const Aws::String& value) { SetQueueNamePrefix(value); return *this;}

    
    inline ListQueuesRequest& WithQueueNamePrefix(Aws::String&& value) { SetQueueNamePrefix(std::move(value)); return *this;}

    
    inline ListQueuesRequest& WithQueueNamePrefix(const char* value) { SetQueueNamePrefix(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListQueuesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListQueuesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListQueuesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListQueuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_queueNamePrefix;
    bool m_queueNamePrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
