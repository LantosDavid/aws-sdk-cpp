﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/AddPermissionResult.h>
#include <aws/lambda/model/CreateAliasResult.h>
#include <aws/lambda/model/CreateEventSourceMappingResult.h>
#include <aws/lambda/model/CreateFunctionResult.h>
#include <aws/lambda/model/DeleteEventSourceMappingResult.h>
#include <aws/lambda/model/GetAccountSettingsResult.h>
#include <aws/lambda/model/GetAliasResult.h>
#include <aws/lambda/model/GetEventSourceMappingResult.h>
#include <aws/lambda/model/GetFunctionResult.h>
#include <aws/lambda/model/GetFunctionConfigurationResult.h>
#include <aws/lambda/model/GetPolicyResult.h>
#include <aws/lambda/model/InvokeResult.h>
#include <aws/lambda/model/ListAliasesResult.h>
#include <aws/lambda/model/ListEventSourceMappingsResult.h>
#include <aws/lambda/model/ListFunctionsResult.h>
#include <aws/lambda/model/ListTagsResult.h>
#include <aws/lambda/model/ListVersionsByFunctionResult.h>
#include <aws/lambda/model/PublishVersionResult.h>
#include <aws/lambda/model/PutFunctionConcurrencyResult.h>
#include <aws/lambda/model/UpdateAliasResult.h>
#include <aws/lambda/model/UpdateEventSourceMappingResult.h>
#include <aws/lambda/model/UpdateFunctionCodeResult.h>
#include <aws/lambda/model/UpdateFunctionConfigurationResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Lambda
{

namespace Model
{
        class AddPermissionRequest;
        class CreateAliasRequest;
        class CreateEventSourceMappingRequest;
        class CreateFunctionRequest;
        class DeleteAliasRequest;
        class DeleteEventSourceMappingRequest;
        class DeleteFunctionRequest;
        class DeleteFunctionConcurrencyRequest;
        class GetAccountSettingsRequest;
        class GetAliasRequest;
        class GetEventSourceMappingRequest;
        class GetFunctionRequest;
        class GetFunctionConfigurationRequest;
        class GetPolicyRequest;
        class InvokeRequest;
        class ListAliasesRequest;
        class ListEventSourceMappingsRequest;
        class ListFunctionsRequest;
        class ListTagsRequest;
        class ListVersionsByFunctionRequest;
        class PublishVersionRequest;
        class PutFunctionConcurrencyRequest;
        class RemovePermissionRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateAliasRequest;
        class UpdateEventSourceMappingRequest;
        class UpdateFunctionCodeRequest;
        class UpdateFunctionConfigurationRequest;

        typedef Aws::Utils::Outcome<AddPermissionResult, Aws::Client::AWSError<LambdaErrors>> AddPermissionOutcome;
        typedef Aws::Utils::Outcome<CreateAliasResult, Aws::Client::AWSError<LambdaErrors>> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> CreateEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<CreateFunctionResult, Aws::Client::AWSError<LambdaErrors>> CreateFunctionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> DeleteAliasOutcome;
        typedef Aws::Utils::Outcome<DeleteEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> DeleteEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> DeleteFunctionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> DeleteFunctionConcurrencyOutcome;
        typedef Aws::Utils::Outcome<GetAccountSettingsResult, Aws::Client::AWSError<LambdaErrors>> GetAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<GetAliasResult, Aws::Client::AWSError<LambdaErrors>> GetAliasOutcome;
        typedef Aws::Utils::Outcome<GetEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> GetEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<GetFunctionResult, Aws::Client::AWSError<LambdaErrors>> GetFunctionOutcome;
        typedef Aws::Utils::Outcome<GetFunctionConfigurationResult, Aws::Client::AWSError<LambdaErrors>> GetFunctionConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetPolicyResult, Aws::Client::AWSError<LambdaErrors>> GetPolicyOutcome;
        typedef Aws::Utils::Outcome<InvokeResult, Aws::Client::AWSError<LambdaErrors>> InvokeOutcome;
        typedef Aws::Utils::Outcome<ListAliasesResult, Aws::Client::AWSError<LambdaErrors>> ListAliasesOutcome;
        typedef Aws::Utils::Outcome<ListEventSourceMappingsResult, Aws::Client::AWSError<LambdaErrors>> ListEventSourceMappingsOutcome;
        typedef Aws::Utils::Outcome<ListFunctionsResult, Aws::Client::AWSError<LambdaErrors>> ListFunctionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<LambdaErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<ListVersionsByFunctionResult, Aws::Client::AWSError<LambdaErrors>> ListVersionsByFunctionOutcome;
        typedef Aws::Utils::Outcome<PublishVersionResult, Aws::Client::AWSError<LambdaErrors>> PublishVersionOutcome;
        typedef Aws::Utils::Outcome<PutFunctionConcurrencyResult, Aws::Client::AWSError<LambdaErrors>> PutFunctionConcurrencyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> RemovePermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<LambdaErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateAliasResult, Aws::Client::AWSError<LambdaErrors>> UpdateAliasOutcome;
        typedef Aws::Utils::Outcome<UpdateEventSourceMappingResult, Aws::Client::AWSError<LambdaErrors>> UpdateEventSourceMappingOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionCodeResult, Aws::Client::AWSError<LambdaErrors>> UpdateFunctionCodeOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionConfigurationResult, Aws::Client::AWSError<LambdaErrors>> UpdateFunctionConfigurationOutcome;

        typedef std::future<AddPermissionOutcome> AddPermissionOutcomeCallable;
        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateEventSourceMappingOutcome> CreateEventSourceMappingOutcomeCallable;
        typedef std::future<CreateFunctionOutcome> CreateFunctionOutcomeCallable;
        typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
        typedef std::future<DeleteEventSourceMappingOutcome> DeleteEventSourceMappingOutcomeCallable;
        typedef std::future<DeleteFunctionOutcome> DeleteFunctionOutcomeCallable;
        typedef std::future<DeleteFunctionConcurrencyOutcome> DeleteFunctionConcurrencyOutcomeCallable;
        typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
        typedef std::future<GetAliasOutcome> GetAliasOutcomeCallable;
        typedef std::future<GetEventSourceMappingOutcome> GetEventSourceMappingOutcomeCallable;
        typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
        typedef std::future<GetFunctionConfigurationOutcome> GetFunctionConfigurationOutcomeCallable;
        typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
        typedef std::future<InvokeOutcome> InvokeOutcomeCallable;
        typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
        typedef std::future<ListEventSourceMappingsOutcome> ListEventSourceMappingsOutcomeCallable;
        typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<ListVersionsByFunctionOutcome> ListVersionsByFunctionOutcomeCallable;
        typedef std::future<PublishVersionOutcome> PublishVersionOutcomeCallable;
        typedef std::future<PutFunctionConcurrencyOutcome> PutFunctionConcurrencyOutcomeCallable;
        typedef std::future<RemovePermissionOutcome> RemovePermissionOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
        typedef std::future<UpdateEventSourceMappingOutcome> UpdateEventSourceMappingOutcomeCallable;
        typedef std::future<UpdateFunctionCodeOutcome> UpdateFunctionCodeOutcomeCallable;
        typedef std::future<UpdateFunctionConfigurationOutcome> UpdateFunctionConfigurationOutcomeCallable;
} // namespace Model

  class LambdaClient;

    typedef std::function<void(const LambdaClient*, const Model::AddPermissionRequest&, const Model::AddPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddPermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateEventSourceMappingRequest&, const Model::CreateEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::CreateFunctionRequest&, const Model::CreateFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteEventSourceMappingRequest&, const Model::DeleteEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteFunctionRequest&, const Model::DeleteFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::DeleteFunctionConcurrencyRequest&, const Model::DeleteFunctionConcurrencyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionConcurrencyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetAliasRequest&, const Model::GetAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetEventSourceMappingRequest&, const Model::GetEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionRequest&, const Model::GetFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetFunctionConfigurationRequest&, const Model::GetFunctionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionConfigurationResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::InvokeRequest&, const Model::InvokeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InvokeResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListEventSourceMappingsRequest&, const Model::ListEventSourceMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventSourceMappingsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListFunctionsRequest&, const Model::ListFunctionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctionsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::ListVersionsByFunctionRequest&, const Model::ListVersionsByFunctionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVersionsByFunctionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PublishVersionRequest&, const Model::PublishVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishVersionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::PutFunctionConcurrencyRequest&, const Model::PutFunctionConcurrencyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFunctionConcurrencyResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::RemovePermissionRequest&, const Model::RemovePermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemovePermissionResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateEventSourceMappingRequest&, const Model::UpdateEventSourceMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventSourceMappingResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateFunctionCodeRequest&, const Model::UpdateFunctionCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionCodeResponseReceivedHandler;
    typedef std::function<void(const LambdaClient*, const Model::UpdateFunctionConfigurationRequest&, const Model::UpdateFunctionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionConfigurationResponseReceivedHandler;

  /**
   * <fullname>AWS Lambda</fullname> <p> <b>Overview</b> </p> <p>This is the <i>AWS
   * Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional
   * information. For the service overview, see <a
   * href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS
   * Lambda</a>, and for information about how the service works, see <a
   * href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS
   * Lambda: How it Works</a> in the <b>AWS Lambda Developer Guide</b>.</p>
   */
  class AWS_LAMBDA_API LambdaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LambdaClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LambdaClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LambdaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LambdaClient();

        inline virtual const char* GetServiceClientName() const override { return "Lambda"; }


        /**
         * <p>Adds a permission to the resource policy associated with the specified AWS
         * Lambda function. You use resource policies to grant permissions to event sources
         * that use the <i>push</i> model. In a <i>push</i> model, event sources (such as
         * Amazon S3 and custom applications) invoke your Lambda function. Each permission
         * you add to the resource policy allows an event source permission to invoke the
         * Lambda function. </p> <p>Permissions apply to the Amazon Resource Name (ARN)
         * used to invoke the function, which can be unqualified (the unpublished version
         * of the function), or include a version or alias. If a client uses a version or
         * alias to invoke a function, use the <code>Qualifier</code> parameter to apply
         * permissions to that ARN. For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:AddPermission</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::AddPermissionOutcome AddPermission(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Adds a permission to the resource policy associated with the specified AWS
         * Lambda function. You use resource policies to grant permissions to event sources
         * that use the <i>push</i> model. In a <i>push</i> model, event sources (such as
         * Amazon S3 and custom applications) invoke your Lambda function. Each permission
         * you add to the resource policy allows an event source permission to invoke the
         * Lambda function. </p> <p>Permissions apply to the Amazon Resource Name (ARN)
         * used to invoke the function, which can be unqualified (the unpublished version
         * of the function), or include a version or alias. If a client uses a version or
         * alias to invoke a function, use the <code>Qualifier</code> parameter to apply
         * permissions to that ARN. For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:AddPermission</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddPermissionOutcomeCallable AddPermissionCallable(const Model::AddPermissionRequest& request) const;

        /**
         * <p>Adds a permission to the resource policy associated with the specified AWS
         * Lambda function. You use resource policies to grant permissions to event sources
         * that use the <i>push</i> model. In a <i>push</i> model, event sources (such as
         * Amazon S3 and custom applications) invoke your Lambda function. Each permission
         * you add to the resource policy allows an event source permission to invoke the
         * Lambda function. </p> <p>Permissions apply to the Amazon Resource Name (ARN)
         * used to invoke the function, which can be unqualified (the unpublished version
         * of the function), or include a version or alias. If a client uses a version or
         * alias to invoke a function, use the <code>Qualifier</code> parameter to apply
         * permissions to that ARN. For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:AddPermission</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/AddPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddPermissionAsync(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alias that points to the specified Lambda function version. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>Alias names are unique for a given function.
         * This requires permission for the lambda:CreateAlias action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias that points to the specified Lambda function version. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>Alias names are unique for a given function.
         * This requires permission for the lambda:CreateAlias action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias that points to the specified Lambda function version. For
         * more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>Alias names are unique for a given function.
         * This requires permission for the lambda:CreateAlias action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a mapping between an event source and an AWS Lambda function. Lambda
         * reads items from the event source and triggers the function.</p> <p>For details
         * about each event source type, see the following topics.</p> <ul> <li> <p> <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS
         * Lambda with Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS
         * Lambda with Amazon SQS</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS
         * Lambda with Amazon DynamoDB</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSourceMappingOutcome CreateEventSourceMapping(const Model::CreateEventSourceMappingRequest& request) const;

        /**
         * <p>Creates a mapping between an event source and an AWS Lambda function. Lambda
         * reads items from the event source and triggers the function.</p> <p>For details
         * about each event source type, see the following topics.</p> <ul> <li> <p> <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS
         * Lambda with Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS
         * Lambda with Amazon SQS</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS
         * Lambda with Amazon DynamoDB</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEventSourceMappingOutcomeCallable CreateEventSourceMappingCallable(const Model::CreateEventSourceMappingRequest& request) const;

        /**
         * <p>Creates a mapping between an event source and an AWS Lambda function. Lambda
         * reads items from the event source and triggers the function.</p> <p>For details
         * about each event source type, see the following topics.</p> <ul> <li> <p> <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-kinesis.html">Using AWS
         * Lambda with Amazon Kinesis</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html">Using AWS
         * Lambda with Amazon SQS</a> </p> </li> <li> <p> <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-ddb.html">Using AWS
         * Lambda with Amazon DynamoDB</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEventSourceMappingAsync(const Model::CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Lambda function. The function configuration is created from the
         * request parameters, and the code for the function is provided by a .zip file.
         * The function name is case-sensitive.</p> <p>This operation requires permission
         * for the <code>lambda:CreateFunction</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionOutcome CreateFunction(const Model::CreateFunctionRequest& request) const;

        /**
         * <p>Creates a new Lambda function. The function configuration is created from the
         * request parameters, and the code for the function is provided by a .zip file.
         * The function name is case-sensitive.</p> <p>This operation requires permission
         * for the <code>lambda:CreateFunction</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFunctionOutcomeCallable CreateFunctionCallable(const Model::CreateFunctionRequest& request) const;

        /**
         * <p>Creates a new Lambda function. The function configuration is created from the
         * request parameters, and the code for the function is provided by a .zip file.
         * The function name is case-sensitive.</p> <p>This operation requires permission
         * for the <code>lambda:CreateFunction</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CreateFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionAsync(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified Lambda function alias. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:DeleteAlias action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes the specified Lambda function alias. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:DeleteAlias action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * <p>Deletes the specified Lambda function alias. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:DeleteAlias action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an event source mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSourceMappingOutcome DeleteEventSourceMapping(const Model::DeleteEventSourceMappingRequest& request) const;

        /**
         * <p>Deletes an event source mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEventSourceMappingOutcomeCallable DeleteEventSourceMappingCallable(const Model::DeleteEventSourceMappingRequest& request) const;

        /**
         * <p>Deletes an event source mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEventSourceMappingAsync(const Model::DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Lambda function. To delete a specific function version, use the
         * <code>Qualifier</code> parameter. Otherwise, all versions and aliases are
         * deleted. Event source mappings are not deleted.</p> <p>This operation requires
         * permission for the <code>lambda:DeleteFunction</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionOutcome DeleteFunction(const Model::DeleteFunctionRequest& request) const;

        /**
         * <p>Deletes a Lambda function. To delete a specific function version, use the
         * <code>Qualifier</code> parameter. Otherwise, all versions and aliases are
         * deleted. Event source mappings are not deleted.</p> <p>This operation requires
         * permission for the <code>lambda:DeleteFunction</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionOutcomeCallable DeleteFunctionCallable(const Model::DeleteFunctionRequest& request) const;

        /**
         * <p>Deletes a Lambda function. To delete a specific function version, use the
         * <code>Qualifier</code> parameter. Otherwise, all versions and aliases are
         * deleted. Event source mappings are not deleted.</p> <p>This operation requires
         * permission for the <code>lambda:DeleteFunction</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionAsync(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes concurrent execution limits from this function. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
         * Concurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionConcurrencyOutcome DeleteFunctionConcurrency(const Model::DeleteFunctionConcurrencyRequest& request) const;

        /**
         * <p>Removes concurrent execution limits from this function. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
         * Concurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionConcurrency">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionConcurrencyOutcomeCallable DeleteFunctionConcurrencyCallable(const Model::DeleteFunctionConcurrencyRequest& request) const;

        /**
         * <p>Removes concurrent execution limits from this function. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
         * Concurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeleteFunctionConcurrency">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionConcurrencyAsync(const Model::DeleteFunctionConcurrencyRequest& request, const DeleteFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves details about your account's <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/limits.html">limits</a> and
         * usage in a region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Retrieves details about your account's <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/limits.html">limits</a> and
         * usage in a region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAccountSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Retrieves details about your account's <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/limits.html">limits</a> and
         * usage in a region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAccountSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the specified alias information such as the alias ARN, description,
         * and function version it is pointing to. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * <code>lambda:GetAlias</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAlias">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAliasOutcome GetAlias(const Model::GetAliasRequest& request) const;

        /**
         * <p>Returns the specified alias information such as the alias ARN, description,
         * and function version it is pointing to. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * <code>lambda:GetAlias</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAlias">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAliasOutcomeCallable GetAliasCallable(const Model::GetAliasRequest& request) const;

        /**
         * <p>Returns the specified alias information such as the alias ARN, description,
         * and function version it is pointing to. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * <code>lambda:GetAlias</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetAlias">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAliasAsync(const Model::GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns details about an event source mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventSourceMappingOutcome GetEventSourceMapping(const Model::GetEventSourceMappingRequest& request) const;

        /**
         * <p>Returns details about an event source mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEventSourceMappingOutcomeCallable GetEventSourceMappingCallable(const Model::GetEventSourceMappingRequest& request) const;

        /**
         * <p>Returns details about an event source mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEventSourceMappingAsync(const Model::GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the configuration information of the Lambda function and a presigned
         * URL link to the .zip file you uploaded with <a>CreateFunction</a> so you can
         * download the .zip file. Note that the URL is valid for up to 10 minutes. The
         * configuration information is the same information you provided as parameters
         * when uploading the function.</p> <p>Use the <code>Qualifier</code> parameter to
         * retrieve a published version of the function. Otherwise, returns the unpublished
         * version (<code>$LATEST</code>). For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunction</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionOutcome GetFunction(const Model::GetFunctionRequest& request) const;

        /**
         * <p>Returns the configuration information of the Lambda function and a presigned
         * URL link to the .zip file you uploaded with <a>CreateFunction</a> so you can
         * download the .zip file. Note that the URL is valid for up to 10 minutes. The
         * configuration information is the same information you provided as parameters
         * when uploading the function.</p> <p>Use the <code>Qualifier</code> parameter to
         * retrieve a published version of the function. Otherwise, returns the unpublished
         * version (<code>$LATEST</code>). For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunction</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionOutcomeCallable GetFunctionCallable(const Model::GetFunctionRequest& request) const;

        /**
         * <p>Returns the configuration information of the Lambda function and a presigned
         * URL link to the .zip file you uploaded with <a>CreateFunction</a> so you can
         * download the .zip file. Note that the URL is valid for up to 10 minutes. The
         * configuration information is the same information you provided as parameters
         * when uploading the function.</p> <p>Use the <code>Qualifier</code> parameter to
         * retrieve a published version of the function. Otherwise, returns the unpublished
         * version (<code>$LATEST</code>). For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunction</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionAsync(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the configuration information of the Lambda function. This the same
         * information you provided as parameters when uploading the function by using
         * <a>CreateFunction</a>.</p> <p>If you are using the versioning feature, you can
         * retrieve this information for a specific function version by using the optional
         * <code>Qualifier</code> parameter and specifying the function version or alias
         * that points to it. If you don't provide it, the API returns information about
         * the $LATEST version of the function. For more information about versioning, see
         * <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunctionConfiguration</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionConfigurationOutcome GetFunctionConfiguration(const Model::GetFunctionConfigurationRequest& request) const;

        /**
         * <p>Returns the configuration information of the Lambda function. This the same
         * information you provided as parameters when uploading the function by using
         * <a>CreateFunction</a>.</p> <p>If you are using the versioning feature, you can
         * retrieve this information for a specific function version by using the optional
         * <code>Qualifier</code> parameter and specifying the function version or alias
         * that points to it. If you don't provide it, the API returns information about
         * the $LATEST version of the function. For more information about versioning, see
         * <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunctionConfiguration</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionConfigurationOutcomeCallable GetFunctionConfigurationCallable(const Model::GetFunctionConfigurationRequest& request) const;

        /**
         * <p>Returns the configuration information of the Lambda function. This the same
         * information you provided as parameters when uploading the function by using
         * <a>CreateFunction</a>.</p> <p>If you are using the versioning feature, you can
         * retrieve this information for a specific function version by using the optional
         * <code>Qualifier</code> parameter and specifying the function version or alias
         * that points to it. If you don't provide it, the API returns information about
         * the $LATEST version of the function. For more information about versioning, see
         * <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>.</p> <p>This operation requires
         * permission for the <code>lambda:GetFunctionConfiguration</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetFunctionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionConfigurationAsync(const Model::GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the resource policy associated with the specified Lambda
         * function.</p> <p>This action requires permission for the <code>lambda:GetPolicy
         * action.</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Returns the resource policy associated with the specified Lambda
         * function.</p> <p>This action requires permission for the <code>lambda:GetPolicy
         * action.</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * <p>Returns the resource policy associated with the specified Lambda
         * function.</p> <p>This action requires permission for the <code>lambda:GetPolicy
         * action.</code> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Invokes a Lambda function. For an example, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-dynamodb-create-function.html#with-dbb-invoke-manually">Create
         * the Lambda Function and Test It Manually</a>. </p> <p>Specify just a function
         * name to invoke the latest version of the function. To invoke a published
         * version, use the <code>Qualifier</code> parameter to specify a <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">version
         * or alias</a>.</p> <p>If you use the <code>RequestResponse</code> (synchronous)
         * invocation option, the function will be invoked only once. If you use the
         * <code>Event</code> (asynchronous) invocation option, the function will be
         * invoked at least once in response to an event and the function must be
         * idempotent to handle this.</p> <p>For functions with a long timeout, your client
         * may be disconnected during synchronous invocation while it waits for a response.
         * Configure your HTTP client, SDK, firewall, proxy, or operating system to allow
         * for long connections with timeout or keep-alive settings.</p> <p>This operation
         * requires permission for the <code>lambda:InvokeFunction</code> action.</p>
         * <p>The <code>TooManyRequestsException</code> noted below will return the
         * following: <code>ConcurrentInvocationLimitExceeded</code> will be returned if
         * you have no functions with reserved concurrency and have exceeded your account
         * concurrent limit or if a function without reserved concurrency exceeds the
         * account's unreserved concurrency limit.
         * <code>ReservedFunctionConcurrentInvocationLimitExceeded</code> will be returned
         * when a function with reserved concurrency exceeds its configured concurrency
         * limit. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Invoke">AWS API
         * Reference</a></p>
         */
        virtual Model::InvokeOutcome Invoke(const Model::InvokeRequest& request) const;

        /**
         * <p>Invokes a Lambda function. For an example, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-dynamodb-create-function.html#with-dbb-invoke-manually">Create
         * the Lambda Function and Test It Manually</a>. </p> <p>Specify just a function
         * name to invoke the latest version of the function. To invoke a published
         * version, use the <code>Qualifier</code> parameter to specify a <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">version
         * or alias</a>.</p> <p>If you use the <code>RequestResponse</code> (synchronous)
         * invocation option, the function will be invoked only once. If you use the
         * <code>Event</code> (asynchronous) invocation option, the function will be
         * invoked at least once in response to an event and the function must be
         * idempotent to handle this.</p> <p>For functions with a long timeout, your client
         * may be disconnected during synchronous invocation while it waits for a response.
         * Configure your HTTP client, SDK, firewall, proxy, or operating system to allow
         * for long connections with timeout or keep-alive settings.</p> <p>This operation
         * requires permission for the <code>lambda:InvokeFunction</code> action.</p>
         * <p>The <code>TooManyRequestsException</code> noted below will return the
         * following: <code>ConcurrentInvocationLimitExceeded</code> will be returned if
         * you have no functions with reserved concurrency and have exceeded your account
         * concurrent limit or if a function without reserved concurrency exceeds the
         * account's unreserved concurrency limit.
         * <code>ReservedFunctionConcurrentInvocationLimitExceeded</code> will be returned
         * when a function with reserved concurrency exceeds its configured concurrency
         * limit. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Invoke">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InvokeOutcomeCallable InvokeCallable(const Model::InvokeRequest& request) const;

        /**
         * <p>Invokes a Lambda function. For an example, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/with-dynamodb-create-function.html#with-dbb-invoke-manually">Create
         * the Lambda Function and Test It Manually</a>. </p> <p>Specify just a function
         * name to invoke the latest version of the function. To invoke a published
         * version, use the <code>Qualifier</code> parameter to specify a <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">version
         * or alias</a>.</p> <p>If you use the <code>RequestResponse</code> (synchronous)
         * invocation option, the function will be invoked only once. If you use the
         * <code>Event</code> (asynchronous) invocation option, the function will be
         * invoked at least once in response to an event and the function must be
         * idempotent to handle this.</p> <p>For functions with a long timeout, your client
         * may be disconnected during synchronous invocation while it waits for a response.
         * Configure your HTTP client, SDK, firewall, proxy, or operating system to allow
         * for long connections with timeout or keep-alive settings.</p> <p>This operation
         * requires permission for the <code>lambda:InvokeFunction</code> action.</p>
         * <p>The <code>TooManyRequestsException</code> noted below will return the
         * following: <code>ConcurrentInvocationLimitExceeded</code> will be returned if
         * you have no functions with reserved concurrency and have exceeded your account
         * concurrent limit or if a function without reserved concurrency exceeds the
         * account's unreserved concurrency limit.
         * <code>ReservedFunctionConcurrentInvocationLimitExceeded</code> will be returned
         * when a function with reserved concurrency exceeds its configured concurrency
         * limit. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/Invoke">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InvokeAsync(const Model::InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns list of aliases created for a Lambda function. For each alias, the
         * response includes information such as the alias ARN, description, alias name,
         * and the function version to which it points. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:ListAliases action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Returns list of aliases created for a Lambda function. For each alias, the
         * response includes information such as the alias ARN, description, alias name,
         * and the function version to which it points. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:ListAliases action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * <p>Returns list of aliases created for a Lambda function. For each alias, the
         * response includes information such as the alias ARN, description, alias name,
         * and the function version to which it points. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:ListAliases action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists event source mappings. Specify an <code>EventSourceArn</code> to only
         * show event source mappings for a single event source.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListEventSourceMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventSourceMappingsOutcome ListEventSourceMappings(const Model::ListEventSourceMappingsRequest& request) const;

        /**
         * <p>Lists event source mappings. Specify an <code>EventSourceArn</code> to only
         * show event source mappings for a single event source.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListEventSourceMappings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventSourceMappingsOutcomeCallable ListEventSourceMappingsCallable(const Model::ListEventSourceMappingsRequest& request) const;

        /**
         * <p>Lists event source mappings. Specify an <code>EventSourceArn</code> to only
         * show event source mappings for a single event source.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListEventSourceMappings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventSourceMappingsAsync(const Model::ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of your Lambda functions. For each function, the response
         * includes the function configuration information. You must use <a>GetFunction</a>
         * to retrieve the code for your function.</p> <p>This operation requires
         * permission for the <code>lambda:ListFunctions</code> action.</p> <p>If you are
         * using the versioning feature, you can list all of your functions or only
         * <code>$LATEST</code> versions. For information about the versioning feature, see
         * <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionsOutcome ListFunctions(const Model::ListFunctionsRequest& request) const;

        /**
         * <p>Returns a list of your Lambda functions. For each function, the response
         * includes the function configuration information. You must use <a>GetFunction</a>
         * to retrieve the code for your function.</p> <p>This operation requires
         * permission for the <code>lambda:ListFunctions</code> action.</p> <p>If you are
         * using the versioning feature, you can list all of your functions or only
         * <code>$LATEST</code> versions. For information about the versioning feature, see
         * <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionsOutcomeCallable ListFunctionsCallable(const Model::ListFunctionsRequest& request) const;

        /**
         * <p>Returns a list of your Lambda functions. For each function, the response
         * includes the function configuration information. You must use <a>GetFunction</a>
         * to retrieve the code for your function.</p> <p>This operation requires
         * permission for the <code>lambda:ListFunctions</code> action.</p> <p>If you are
         * using the versioning feature, you can list all of your functions or only
         * <code>$LATEST</code> versions. For information about the versioning feature, see
         * <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListFunctions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags assigned to a function when supplied the function ARN
         * (Amazon Resource Name). For more information on Tagging, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
         * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns a list of tags assigned to a function when supplied the function ARN
         * (Amazon Resource Name). For more information on Tagging, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
         * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns a list of tags assigned to a function when supplied the function ARN
         * (Amazon Resource Name). For more information on Tagging, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
         * Functions</a> in the <b>AWS Lambda Developer Guide</b>.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all versions of a function. For information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListVersionsByFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVersionsByFunctionOutcome ListVersionsByFunction(const Model::ListVersionsByFunctionRequest& request) const;

        /**
         * <p>Lists all versions of a function. For information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListVersionsByFunction">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVersionsByFunctionOutcomeCallable ListVersionsByFunctionCallable(const Model::ListVersionsByFunctionRequest& request) const;

        /**
         * <p>Lists all versions of a function. For information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ListVersionsByFunction">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVersionsByFunctionAsync(const Model::ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Publishes a version of your function from the current snapshot of $LATEST.
         * That is, AWS Lambda takes a snapshot of the function code and configuration
         * information from $LATEST and publishes a new version. The code and configuration
         * cannot be modified after publication. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishVersionOutcome PublishVersion(const Model::PublishVersionRequest& request) const;

        /**
         * <p>Publishes a version of your function from the current snapshot of $LATEST.
         * That is, AWS Lambda takes a snapshot of the function code and configuration
         * information from $LATEST and publishes a new version. The code and configuration
         * cannot be modified after publication. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PublishVersionOutcomeCallable PublishVersionCallable(const Model::PublishVersionRequest& request) const;

        /**
         * <p>Publishes a version of your function from the current snapshot of $LATEST.
         * That is, AWS Lambda takes a snapshot of the function code and configuration
         * information from $LATEST and publishes a new version. The code and configuration
         * cannot be modified after publication. For information about the versioning
         * feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PublishVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PublishVersionAsync(const Model::PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets a limit on the number of concurrent executions available to this
         * function. It is a subset of your account's total concurrent execution limit per
         * region. Note that Lambda automatically reserves a buffer of 100 concurrent
         * executions for functions without any reserved concurrency limit. This means if
         * your account limit is 1000, you have a total of 900 available to allocate to
         * individual functions. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
         * Concurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionConcurrency">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFunctionConcurrencyOutcome PutFunctionConcurrency(const Model::PutFunctionConcurrencyRequest& request) const;

        /**
         * <p>Sets a limit on the number of concurrent executions available to this
         * function. It is a subset of your account's total concurrent execution limit per
         * region. Note that Lambda automatically reserves a buffer of 100 concurrent
         * executions for functions without any reserved concurrency limit. This means if
         * your account limit is 1000, you have a total of 900 available to allocate to
         * individual functions. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
         * Concurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionConcurrency">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFunctionConcurrencyOutcomeCallable PutFunctionConcurrencyCallable(const Model::PutFunctionConcurrencyRequest& request) const;

        /**
         * <p>Sets a limit on the number of concurrent executions available to this
         * function. It is a subset of your account's total concurrent execution limit per
         * region. Note that Lambda automatically reserves a buffer of 100 concurrent
         * executions for functions without any reserved concurrency limit. This means if
         * your account limit is 1000, you have a total of 900 available to allocate to
         * individual functions. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">Managing
         * Concurrency</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/PutFunctionConcurrency">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFunctionConcurrencyAsync(const Model::PutFunctionConcurrencyRequest& request, const PutFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes permissions from a function. You can remove individual permissions
         * from an resource policy associated with a Lambda function by providing a
         * statement ID that you provided when you added the permission. When you remove
         * permissions, disable the event source mapping or trigger configuration first to
         * avoid errors.</p> <p>Permissions apply to the Amazon Resource Name (ARN) used to
         * invoke the function, which can be unqualified (the unpublished version of the
         * function), or include a version or alias. If a client uses a version or alias to
         * invoke a function, use the <code>Qualifier</code> parameter to apply permissions
         * to that ARN. For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>You need permission for the
         * <code>lambda:RemovePermission</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemovePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::RemovePermissionOutcome RemovePermission(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Removes permissions from a function. You can remove individual permissions
         * from an resource policy associated with a Lambda function by providing a
         * statement ID that you provided when you added the permission. When you remove
         * permissions, disable the event source mapping or trigger configuration first to
         * avoid errors.</p> <p>Permissions apply to the Amazon Resource Name (ARN) used to
         * invoke the function, which can be unqualified (the unpublished version of the
         * function), or include a version or alias. If a client uses a version or alias to
         * invoke a function, use the <code>Qualifier</code> parameter to apply permissions
         * to that ARN. For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>You need permission for the
         * <code>lambda:RemovePermission</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemovePermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemovePermissionOutcomeCallable RemovePermissionCallable(const Model::RemovePermissionRequest& request) const;

        /**
         * <p>Removes permissions from a function. You can remove individual permissions
         * from an resource policy associated with a Lambda function by providing a
         * statement ID that you provided when you added the permission. When you remove
         * permissions, disable the event source mapping or trigger configuration first to
         * avoid errors.</p> <p>Permissions apply to the Amazon Resource Name (ARN) used to
         * invoke the function, which can be unqualified (the unpublished version of the
         * function), or include a version or alias. If a client uses a version or alias to
         * invoke a function, use the <code>Qualifier</code> parameter to apply permissions
         * to that ARN. For more information about versioning, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>You need permission for the
         * <code>lambda:RemovePermission</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/RemovePermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemovePermissionAsync(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a list of tags (key-value pairs) on the Lambda function. Requires the
         * Lambda function ARN (Amazon Resource Name). If a key is specified without a
         * value, Lambda creates a tag with the specified key and a value of null. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
         * Functions</a> in the <b>AWS Lambda Developer Guide</b>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates a list of tags (key-value pairs) on the Lambda function. Requires the
         * Lambda function ARN (Amazon Resource Name). If a key is specified without a
         * value, Lambda creates a tag with the specified key and a value of null. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
         * Functions</a> in the <b>AWS Lambda Developer Guide</b>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates a list of tags (key-value pairs) on the Lambda function. Requires the
         * Lambda function ARN (Amazon Resource Name). If a key is specified without a
         * value, Lambda creates a tag with the specified key and a value of null. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
         * Functions</a> in the <b>AWS Lambda Developer Guide</b>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a Lambda function. Requires the function ARN (Amazon
         * Resource Name). For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
         * Functions</a> in the <b>AWS Lambda Developer Guide</b>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a Lambda function. Requires the function ARN (Amazon
         * Resource Name). For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
         * Functions</a> in the <b>AWS Lambda Developer Guide</b>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a Lambda function. Requires the function ARN (Amazon
         * Resource Name). For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/tagging.html">Tagging Lambda
         * Functions</a> in the <b>AWS Lambda Developer Guide</b>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Using this API you can update the function version to which the alias points
         * and the alias description. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:UpdateAlias action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Using this API you can update the function version to which the alias points
         * and the alias description. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:UpdateAlias action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateAlias">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

        /**
         * <p>Using this API you can update the function version to which the alias points
         * and the alias description. For more information, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/aliases-intro.html">Introduction
         * to AWS Lambda Aliases</a>.</p> <p>This requires permission for the
         * lambda:UpdateAlias action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateAlias">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an event source mapping. You can change the function that AWS Lambda
         * invokes, or pause invocation and resume later from the same
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateEventSourceMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventSourceMappingOutcome UpdateEventSourceMapping(const Model::UpdateEventSourceMappingRequest& request) const;

        /**
         * <p>Updates an event source mapping. You can change the function that AWS Lambda
         * invokes, or pause invocation and resume later from the same
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventSourceMappingOutcomeCallable UpdateEventSourceMappingCallable(const Model::UpdateEventSourceMappingRequest& request) const;

        /**
         * <p>Updates an event source mapping. You can change the function that AWS Lambda
         * invokes, or pause invocation and resume later from the same
         * location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateEventSourceMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventSourceMappingAsync(const Model::UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the code for the specified Lambda function. This operation must only
         * be used on an existing Lambda function and cannot be used to update the function
         * configuration.</p> <p>If you are using the versioning feature, note this API
         * will always update the $LATEST version of your Lambda function. For information
         * about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionCode</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionCode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionCodeOutcome UpdateFunctionCode(const Model::UpdateFunctionCodeRequest& request) const;

        /**
         * <p>Updates the code for the specified Lambda function. This operation must only
         * be used on an existing Lambda function and cannot be used to update the function
         * configuration.</p> <p>If you are using the versioning feature, note this API
         * will always update the $LATEST version of your Lambda function. For information
         * about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionCode</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionCode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionCodeOutcomeCallable UpdateFunctionCodeCallable(const Model::UpdateFunctionCodeRequest& request) const;

        /**
         * <p>Updates the code for the specified Lambda function. This operation must only
         * be used on an existing Lambda function and cannot be used to update the function
         * configuration.</p> <p>If you are using the versioning feature, note this API
         * will always update the $LATEST version of your Lambda function. For information
         * about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionCode</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionCode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionCodeAsync(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration parameters for the specified Lambda function by
         * using the values provided in the request. You provide only the parameters you
         * want to change. This operation must only be used on an existing Lambda function
         * and cannot be used to update the function's code.</p> <p>If you are using the
         * versioning feature, note this API will always update the $LATEST version of your
         * Lambda function. For information about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionConfiguration</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionConfigurationOutcome UpdateFunctionConfiguration(const Model::UpdateFunctionConfigurationRequest& request) const;

        /**
         * <p>Updates the configuration parameters for the specified Lambda function by
         * using the values provided in the request. You provide only the parameters you
         * want to change. This operation must only be used on an existing Lambda function
         * and cannot be used to update the function's code.</p> <p>If you are using the
         * versioning feature, note this API will always update the $LATEST version of your
         * Lambda function. For information about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionConfiguration</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionConfigurationOutcomeCallable UpdateFunctionConfigurationCallable(const Model::UpdateFunctionConfigurationRequest& request) const;

        /**
         * <p>Updates the configuration parameters for the specified Lambda function by
         * using the values provided in the request. You provide only the parameters you
         * want to change. This operation must only be used on an existing Lambda function
         * and cannot be used to update the function's code.</p> <p>If you are using the
         * versioning feature, note this API will always update the $LATEST version of your
         * Lambda function. For information about the versioning feature, see <a
         * href="http://docs.aws.amazon.com/lambda/latest/dg/versioning-aliases.html">AWS
         * Lambda Function Versioning and Aliases</a>. </p> <p>This operation requires
         * permission for the <code>lambda:UpdateFunctionConfiguration</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/UpdateFunctionConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionConfigurationAsync(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void AddPermissionAsyncHelper(const Model::AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateEventSourceMappingAsyncHelper(const Model::CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFunctionAsyncHelper(const Model::CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAliasAsyncHelper(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteEventSourceMappingAsyncHelper(const Model::DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionAsyncHelper(const Model::DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionConcurrencyAsyncHelper(const Model::DeleteFunctionConcurrencyRequest& request, const DeleteFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountSettingsAsyncHelper(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAliasAsyncHelper(const Model::GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEventSourceMappingAsyncHelper(const Model::GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionAsyncHelper(const Model::GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionConfigurationAsyncHelper(const Model::GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPolicyAsyncHelper(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InvokeAsyncHelper(const Model::InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAliasesAsyncHelper(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventSourceMappingsAsyncHelper(const Model::ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFunctionsAsyncHelper(const Model::ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVersionsByFunctionAsyncHelper(const Model::ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PublishVersionAsyncHelper(const Model::PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFunctionConcurrencyAsyncHelper(const Model::PutFunctionConcurrencyRequest& request, const PutFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemovePermissionAsyncHelper(const Model::RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAliasAsyncHelper(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateEventSourceMappingAsyncHelper(const Model::UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionCodeAsyncHelper(const Model::UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionConfigurationAsyncHelper(const Model::UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Lambda
} // namespace Aws
