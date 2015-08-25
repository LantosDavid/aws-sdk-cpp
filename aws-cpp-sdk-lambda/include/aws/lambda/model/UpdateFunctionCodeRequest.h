/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /*
  */
  class AWS_LAMBDA_API UpdateFunctionCodeRequest : public LambdaRequest
  {
  public:
    UpdateFunctionCodeRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The existing Lambda function name whose code you want to replace.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    /*
     <p>The existing Lambda function name whose code you want to replace.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /*
     <p>The existing Lambda function name whose code you want to replace.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /*
     <p>The existing Lambda function name whose code you want to replace.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline UpdateFunctionCodeRequest&  WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /*
     <p>The existing Lambda function name whose code you want to replace.</p> <p> You can specify an unqualified function name (for example, "Thumbnail") or you can specify Amazon Resource Name (ARN) of the function (for example, "arn:aws:lambda:us-west-2:account-id:function:ThumbNail"). AWS Lambda also allows you to specify only the account ID qualifier (for example, "account-id:Thumbnail"). Note that the length constraint applies only to the ARN. If you specify only the function name, it is limited to 64 character in length. </p>
    */
    inline UpdateFunctionCodeRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /*
     <p>Based64-encoded .zip file containing your packaged source code.</p>
    */
    inline const Aws::Utils::ByteBuffer& GetZipFile() const{ return m_zipFile; }
    /*
     <p>Based64-encoded .zip file containing your packaged source code.</p>
    */
    inline void SetZipFile(const Aws::Utils::ByteBuffer& value) { m_zipFileHasBeenSet = true; m_zipFile = value; }

    /*
     <p>Based64-encoded .zip file containing your packaged source code.</p>
    */
    inline UpdateFunctionCodeRequest&  WithZipFile(const Aws::Utils::ByteBuffer& value) { SetZipFile(value); return *this;}

    /*
     <p>Amazon S3 bucket name where the .zip file containing your deployment package is stored. This bucket must reside in the same AWS region where you are creating the Lambda function.</p>
    */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    /*
     <p>Amazon S3 bucket name where the .zip file containing your deployment package is stored. This bucket must reside in the same AWS region where you are creating the Lambda function.</p>
    */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /*
     <p>Amazon S3 bucket name where the .zip file containing your deployment package is stored. This bucket must reside in the same AWS region where you are creating the Lambda function.</p>
    */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /*
     <p>Amazon S3 bucket name where the .zip file containing your deployment package is stored. This bucket must reside in the same AWS region where you are creating the Lambda function.</p>
    */
    inline UpdateFunctionCodeRequest&  WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /*
     <p>Amazon S3 bucket name where the .zip file containing your deployment package is stored. This bucket must reside in the same AWS region where you are creating the Lambda function.</p>
    */
    inline UpdateFunctionCodeRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

    /*
     <p>The Amazon S3 object (the deployment package) key name you want to upload. </p>
    */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }
    /*
     <p>The Amazon S3 object (the deployment package) key name you want to upload. </p>
    */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /*
     <p>The Amazon S3 object (the deployment package) key name you want to upload. </p>
    */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /*
     <p>The Amazon S3 object (the deployment package) key name you want to upload. </p>
    */
    inline UpdateFunctionCodeRequest&  WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /*
     <p>The Amazon S3 object (the deployment package) key name you want to upload. </p>
    */
    inline UpdateFunctionCodeRequest& WithS3Key(const char* value) { SetS3Key(value); return *this;}

    /*
     <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
    */
    inline const Aws::String& GetS3ObjectVersion() const{ return m_s3ObjectVersion; }
    /*
     <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
    */
    inline void SetS3ObjectVersion(const Aws::String& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = value; }

    /*
     <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
    */
    inline void SetS3ObjectVersion(const char* value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion.assign(value); }

    /*
     <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
    */
    inline UpdateFunctionCodeRequest&  WithS3ObjectVersion(const Aws::String& value) { SetS3ObjectVersion(value); return *this;}

    /*
     <p>The Amazon S3 object (the deployment package) version you want to upload.</p>
    */
    inline UpdateFunctionCodeRequest& WithS3ObjectVersion(const char* value) { SetS3ObjectVersion(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::Utils::ByteBuffer m_zipFile;
    bool m_zipFileHasBeenSet;
    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;
    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet;
    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws