/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sqs/SQSServiceClientModel.h>

namespace Aws
{
namespace SQS
{
  class AWS_SQS_API SQSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SQSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SQSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SQSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SQSClient();


        /**
         * 
         */
        virtual Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /**
         * A Callable wrapper for AddPermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

        /**
         * An Async wrapper for AddPermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddPermissionAsync(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ChangeMessageVisibilityOutcome ChangeMessageVisibility(const Model::ChangeMessageVisibilityRequest& request) const;

        /**
         * A Callable wrapper for ChangeMessageVisibility that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeMessageVisibilityOutcomeCallable ChangeMessageVisibilityCallable(const Model::ChangeMessageVisibilityRequest& request) const;

        /**
         * An Async wrapper for ChangeMessageVisibility that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeMessageVisibilityAsync(const Model::ChangeMessageVisibilityRequest& request, const ChangeMessageVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ChangeMessageVisibilityBatchOutcome ChangeMessageVisibilityBatch(const Model::ChangeMessageVisibilityBatchRequest& request) const;

        /**
         * A Callable wrapper for ChangeMessageVisibilityBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeMessageVisibilityBatchOutcomeCallable ChangeMessageVisibilityBatchCallable(const Model::ChangeMessageVisibilityBatchRequest& request) const;

        /**
         * An Async wrapper for ChangeMessageVisibilityBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeMessageVisibilityBatchAsync(const Model::ChangeMessageVisibilityBatchRequest& request, const ChangeMessageVisibilityBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest& request) const;

        /**
         * A Callable wrapper for CreateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateQueueOutcomeCallable CreateQueueCallable(const Model::CreateQueueRequest& request) const;

        /**
         * An Async wrapper for CreateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateQueueAsync(const Model::CreateQueueRequest& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteMessageOutcome DeleteMessage(const Model::DeleteMessageRequest& request) const;

        /**
         * A Callable wrapper for DeleteMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMessageOutcomeCallable DeleteMessageCallable(const Model::DeleteMessageRequest& request) const;

        /**
         * An Async wrapper for DeleteMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMessageAsync(const Model::DeleteMessageRequest& request, const DeleteMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteMessageBatchOutcome DeleteMessageBatch(const Model::DeleteMessageBatchRequest& request) const;

        /**
         * A Callable wrapper for DeleteMessageBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMessageBatchOutcomeCallable DeleteMessageBatchCallable(const Model::DeleteMessageBatchRequest& request) const;

        /**
         * An Async wrapper for DeleteMessageBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMessageBatchAsync(const Model::DeleteMessageBatchRequest& request, const DeleteMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQueueOutcomeCallable DeleteQueueCallable(const Model::DeleteQueueRequest& request) const;

        /**
         * An Async wrapper for DeleteQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQueueAsync(const Model::DeleteQueueRequest& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetQueueAttributesOutcome GetQueueAttributes(const Model::GetQueueAttributesRequest& request) const;

        /**
         * A Callable wrapper for GetQueueAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueueAttributesOutcomeCallable GetQueueAttributesCallable(const Model::GetQueueAttributesRequest& request) const;

        /**
         * An Async wrapper for GetQueueAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueueAttributesAsync(const Model::GetQueueAttributesRequest& request, const GetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetQueueUrlOutcome GetQueueUrl(const Model::GetQueueUrlRequest& request) const;

        /**
         * A Callable wrapper for GetQueueUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueueUrlOutcomeCallable GetQueueUrlCallable(const Model::GetQueueUrlRequest& request) const;

        /**
         * An Async wrapper for GetQueueUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueueUrlAsync(const Model::GetQueueUrlRequest& request, const GetQueueUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListDeadLetterSourceQueuesOutcome ListDeadLetterSourceQueues(const Model::ListDeadLetterSourceQueuesRequest& request) const;

        /**
         * A Callable wrapper for ListDeadLetterSourceQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeadLetterSourceQueuesOutcomeCallable ListDeadLetterSourceQueuesCallable(const Model::ListDeadLetterSourceQueuesRequest& request) const;

        /**
         * An Async wrapper for ListDeadLetterSourceQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeadLetterSourceQueuesAsync(const Model::ListDeadLetterSourceQueuesRequest& request, const ListDeadLetterSourceQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListQueueTagsOutcome ListQueueTags(const Model::ListQueueTagsRequest& request) const;

        /**
         * A Callable wrapper for ListQueueTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueueTagsOutcomeCallable ListQueueTagsCallable(const Model::ListQueueTagsRequest& request) const;

        /**
         * An Async wrapper for ListQueueTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueueTagsAsync(const Model::ListQueueTagsRequest& request, const ListQueueTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;

        /**
         * A Callable wrapper for ListQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueuesOutcomeCallable ListQueuesCallable(const Model::ListQueuesRequest& request) const;

        /**
         * An Async wrapper for ListQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueuesAsync(const Model::ListQueuesRequest& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::PurgeQueueOutcome PurgeQueue(const Model::PurgeQueueRequest& request) const;

        /**
         * A Callable wrapper for PurgeQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurgeQueueOutcomeCallable PurgeQueueCallable(const Model::PurgeQueueRequest& request) const;

        /**
         * An Async wrapper for PurgeQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurgeQueueAsync(const Model::PurgeQueueRequest& request, const PurgeQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ReceiveMessageOutcome ReceiveMessage(const Model::ReceiveMessageRequest& request) const;

        /**
         * A Callable wrapper for ReceiveMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReceiveMessageOutcomeCallable ReceiveMessageCallable(const Model::ReceiveMessageRequest& request) const;

        /**
         * An Async wrapper for ReceiveMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReceiveMessageAsync(const Model::ReceiveMessageRequest& request, const ReceiveMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * A Callable wrapper for RemovePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * An Async wrapper for RemovePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::SendMessageOutcome SendMessage(const Model::SendMessageRequest& request) const;

        /**
         * A Callable wrapper for SendMessage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendMessageOutcomeCallable SendMessageCallable(const Model::SendMessageRequest& request) const;

        /**
         * An Async wrapper for SendMessage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendMessageAsync(const Model::SendMessageRequest& request, const SendMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::SendMessageBatchOutcome SendMessageBatch(const Model::SendMessageBatchRequest& request) const;

        /**
         * A Callable wrapper for SendMessageBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendMessageBatchOutcomeCallable SendMessageBatchCallable(const Model::SendMessageBatchRequest& request) const;

        /**
         * An Async wrapper for SendMessageBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendMessageBatchAsync(const Model::SendMessageBatchRequest& request, const SendMessageBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::SetQueueAttributesOutcome SetQueueAttributes(const Model::SetQueueAttributesRequest& request) const;

        /**
         * A Callable wrapper for SetQueueAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetQueueAttributesOutcomeCallable SetQueueAttributesCallable(const Model::SetQueueAttributesRequest& request) const;

        /**
         * An Async wrapper for SetQueueAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetQueueAttributesAsync(const Model::SetQueueAttributesRequest& request, const SetQueueAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::TagQueueOutcome TagQueue(const Model::TagQueueRequest& request) const;

        /**
         * A Callable wrapper for TagQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagQueueOutcomeCallable TagQueueCallable(const Model::TagQueueRequest& request) const;

        /**
         * An Async wrapper for TagQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagQueueAsync(const Model::TagQueueRequest& request, const TagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::UntagQueueOutcome UntagQueue(const Model::UntagQueueRequest& request) const;

        /**
         * A Callable wrapper for UntagQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagQueueOutcomeCallable UntagQueueCallable(const Model::UntagQueueRequest& request) const;

        /**
         * An Async wrapper for UntagQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagQueueAsync(const Model::UntagQueueRequest& request, const UntagQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SQS
} // namespace Aws
