/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudhsm/model/CreateHsmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHsmRequest::CreateHsmRequest() : 
    m_subnetIdHasBeenSet(false),
    m_sshKeyHasBeenSet(false),
    m_eniIpHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_subscriptionTypeHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_syslogIpHasBeenSet(false)
{
}

Aws::String CreateHsmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_sshKeyHasBeenSet)
  {
   payload.WithString("SshKey", m_sshKey);

  }

  if(m_eniIpHasBeenSet)
  {
   payload.WithString("EniIp", m_eniIp);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  if(m_subscriptionTypeHasBeenSet)
  {
   payload.WithString("SubscriptionType", SubscriptionTypeMapper::GetNameForSubscriptionType(m_subscriptionType));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_syslogIpHasBeenSet)
  {
   payload.WithString("SyslogIp", m_syslogIp);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateHsmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.CreateHsm"));
  return headers;

}



