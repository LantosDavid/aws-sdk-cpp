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
#include <aws/s3/model/BucketLocationConstraint.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int EU_HASH = HashingUtils::HashString("EU");
static const int eu_west_1_HASH = HashingUtils::HashString("eu-west-1");
static const int us_west_1_HASH = HashingUtils::HashString("us-west-1");
static const int us_west_2_HASH = HashingUtils::HashString("us-west-2");
static const int ap_southeast_1_HASH = HashingUtils::HashString("ap-southeast-1");
static const int ap_southeast_2_HASH = HashingUtils::HashString("ap-southeast-2");
static const int ap_northeast_1_HASH = HashingUtils::HashString("ap-northeast-1");
static const int sa_east_1_HASH = HashingUtils::HashString("sa-east-1");
static const int cn_north_1_HASH = HashingUtils::HashString("cn-north-1");
static const int eu_central_1_HASH = HashingUtils::HashString("eu-central-1");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace BucketLocationConstraintMapper
{
BucketLocationConstraint GetBucketLocationConstraintForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == EU_HASH)
  {
    return BucketLocationConstraint::EU;
  }
  else if (hashCode == eu_west_1_HASH)
  {
    return BucketLocationConstraint::eu_west_1;
  }
  else if (hashCode == us_west_1_HASH)
  {
    return BucketLocationConstraint::us_west_1;
  }
  else if (hashCode == us_west_2_HASH)
  {
    return BucketLocationConstraint::us_west_2;
  }
  else if (hashCode == ap_southeast_1_HASH)
  {
    return BucketLocationConstraint::ap_southeast_1;
  }
  else if (hashCode == ap_southeast_2_HASH)
  {
    return BucketLocationConstraint::ap_southeast_2;
  }
  else if (hashCode == ap_northeast_1_HASH)
  {
    return BucketLocationConstraint::ap_northeast_1;
  }
  else if (hashCode == sa_east_1_HASH)
  {
    return BucketLocationConstraint::sa_east_1;
  }
  else if (hashCode == cn_north_1_HASH)
  {
    return BucketLocationConstraint::cn_north_1;
  }
  else if (hashCode == eu_central_1_HASH)
  {
    return BucketLocationConstraint::eu_central_1;
  }

  return BucketLocationConstraint::NOT_SET;
}

Aws::String GetNameForBucketLocationConstraint(BucketLocationConstraint value)
{
  switch(value)
  {
  case BucketLocationConstraint::EU:
    return "EU";
  case BucketLocationConstraint::eu_west_1:
    return "eu-west-1";
  case BucketLocationConstraint::us_west_1:
    return "us-west-1";
  case BucketLocationConstraint::us_west_2:
    return "us-west-2";
  case BucketLocationConstraint::ap_southeast_1:
    return "ap-southeast-1";
  case BucketLocationConstraint::ap_southeast_2:
    return "ap-southeast-2";
  case BucketLocationConstraint::ap_northeast_1:
    return "ap-northeast-1";
  case BucketLocationConstraint::sa_east_1:
    return "sa-east-1";
  case BucketLocationConstraint::cn_north_1:
    return "cn-north-1";
  case BucketLocationConstraint::eu_central_1:
    return "eu-central-1";
  default:
    return "";
  }
}

} // namespace BucketLocationConstraintMapper
} // namespace Model
} // namespace S3
} // namespace Aws