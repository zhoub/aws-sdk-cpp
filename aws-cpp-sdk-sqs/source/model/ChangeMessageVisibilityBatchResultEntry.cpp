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
#include <aws/sqs/model/ChangeMessageVisibilityBatchResultEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ChangeMessageVisibilityBatchResultEntry::ChangeMessageVisibilityBatchResultEntry()
{
}

ChangeMessageVisibilityBatchResultEntry::ChangeMessageVisibilityBatchResultEntry(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ChangeMessageVisibilityBatchResultEntry& ChangeMessageVisibilityBatchResultEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    m_id = StringUtils::Trim(idNode.GetText().c_str());
  }

  return *this;
}

void ChangeMessageVisibilityBatchResultEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
}

void ChangeMessageVisibilityBatchResultEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
}