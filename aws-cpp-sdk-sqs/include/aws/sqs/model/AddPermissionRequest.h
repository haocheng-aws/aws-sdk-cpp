/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/sqs/SQSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SQS
{
namespace Model
{

  /**
   */
  class AWS_SQS_API AddPermissionRequest : public SQSRequest
  {
  public:
    AddPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddPermission"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetQueueUrl() const{ return m_queueUrl; }

    
    inline bool QueueUrlHasBeenSet() const { return m_queueUrlHasBeenSet; }

    
    inline void SetQueueUrl(const Aws::String& value) { m_queueUrlHasBeenSet = true; m_queueUrl = value; }

    
    inline void SetQueueUrl(Aws::String&& value) { m_queueUrlHasBeenSet = true; m_queueUrl = std::move(value); }

    
    inline void SetQueueUrl(const char* value) { m_queueUrlHasBeenSet = true; m_queueUrl.assign(value); }

    
    inline AddPermissionRequest& WithQueueUrl(const Aws::String& value) { SetQueueUrl(value); return *this;}

    
    inline AddPermissionRequest& WithQueueUrl(Aws::String&& value) { SetQueueUrl(std::move(value)); return *this;}

    
    inline AddPermissionRequest& WithQueueUrl(const char* value) { SetQueueUrl(value); return *this;}


    
    inline const Aws::String& GetLabel() const{ return m_label; }

    
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    
    inline AddPermissionRequest& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    
    inline AddPermissionRequest& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    
    inline AddPermissionRequest& WithLabel(const char* value) { SetLabel(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetAWSAccountIds() const{ return m_aWSAccountIds; }

    
    inline bool AWSAccountIdsHasBeenSet() const { return m_aWSAccountIdsHasBeenSet; }

    
    inline void SetAWSAccountIds(const Aws::Vector<Aws::String>& value) { m_aWSAccountIdsHasBeenSet = true; m_aWSAccountIds = value; }

    
    inline void SetAWSAccountIds(Aws::Vector<Aws::String>&& value) { m_aWSAccountIdsHasBeenSet = true; m_aWSAccountIds = std::move(value); }

    
    inline AddPermissionRequest& WithAWSAccountIds(const Aws::Vector<Aws::String>& value) { SetAWSAccountIds(value); return *this;}

    
    inline AddPermissionRequest& WithAWSAccountIds(Aws::Vector<Aws::String>&& value) { SetAWSAccountIds(std::move(value)); return *this;}

    
    inline AddPermissionRequest& AddAWSAccountIds(const Aws::String& value) { m_aWSAccountIdsHasBeenSet = true; m_aWSAccountIds.push_back(value); return *this; }

    
    inline AddPermissionRequest& AddAWSAccountIds(Aws::String&& value) { m_aWSAccountIdsHasBeenSet = true; m_aWSAccountIds.push_back(std::move(value)); return *this; }

    
    inline AddPermissionRequest& AddAWSAccountIds(const char* value) { m_aWSAccountIdsHasBeenSet = true; m_aWSAccountIds.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetActions() const{ return m_actions; }

    
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    
    inline void SetActions(const Aws::Vector<Aws::String>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    
    inline void SetActions(Aws::Vector<Aws::String>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    
    inline AddPermissionRequest& WithActions(const Aws::Vector<Aws::String>& value) { SetActions(value); return *this;}

    
    inline AddPermissionRequest& WithActions(Aws::Vector<Aws::String>&& value) { SetActions(std::move(value)); return *this;}

    
    inline AddPermissionRequest& AddActions(const Aws::String& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    
    inline AddPermissionRequest& AddActions(Aws::String&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

    
    inline AddPermissionRequest& AddActions(const char* value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

  private:

    Aws::String m_queueUrl;
    bool m_queueUrlHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::Vector<Aws::String> m_aWSAccountIds;
    bool m_aWSAccountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
