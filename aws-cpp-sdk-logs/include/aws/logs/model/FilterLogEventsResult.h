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
#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/FilteredLogEvent.h>
#include <aws/logs/model/SearchedLogStream.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{
  class AWS_CLOUDWATCHLOGS_API FilterLogEventsResult
  {
  public:
    FilterLogEventsResult();
    FilterLogEventsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    FilterLogEventsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of <code>FilteredLogEvent</code> objects representing the matched
     * events from the request.</p>
     */
    inline const Aws::Vector<FilteredLogEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>A list of <code>FilteredLogEvent</code> objects representing the matched
     * events from the request.</p>
     */
    inline void SetEvents(const Aws::Vector<FilteredLogEvent>& value) { m_events = value; }

    /**
     * <p>A list of <code>FilteredLogEvent</code> objects representing the matched
     * events from the request.</p>
     */
    inline void SetEvents(Aws::Vector<FilteredLogEvent>&& value) { m_events = value; }

    /**
     * <p>A list of <code>FilteredLogEvent</code> objects representing the matched
     * events from the request.</p>
     */
    inline FilterLogEventsResult& WithEvents(const Aws::Vector<FilteredLogEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>A list of <code>FilteredLogEvent</code> objects representing the matched
     * events from the request.</p>
     */
    inline FilterLogEventsResult& WithEvents(Aws::Vector<FilteredLogEvent>&& value) { SetEvents(value); return *this;}

    /**
     * <p>A list of <code>FilteredLogEvent</code> objects representing the matched
     * events from the request.</p>
     */
    inline FilterLogEventsResult& AddEvents(const FilteredLogEvent& value) { m_events.push_back(value); return *this; }

    /**
     * <p>A list of <code>FilteredLogEvent</code> objects representing the matched
     * events from the request.</p>
     */
    inline FilterLogEventsResult& AddEvents(FilteredLogEvent&& value) { m_events.push_back(value); return *this; }

    /**
     * <p>A list of <code>SearchedLogStream</code> objects indicating which log streams
     * have been searched in this request and whether each has been searched completely
     * or still has more to be paginated.</p>
     */
    inline const Aws::Vector<SearchedLogStream>& GetSearchedLogStreams() const{ return m_searchedLogStreams; }

    /**
     * <p>A list of <code>SearchedLogStream</code> objects indicating which log streams
     * have been searched in this request and whether each has been searched completely
     * or still has more to be paginated.</p>
     */
    inline void SetSearchedLogStreams(const Aws::Vector<SearchedLogStream>& value) { m_searchedLogStreams = value; }

    /**
     * <p>A list of <code>SearchedLogStream</code> objects indicating which log streams
     * have been searched in this request and whether each has been searched completely
     * or still has more to be paginated.</p>
     */
    inline void SetSearchedLogStreams(Aws::Vector<SearchedLogStream>&& value) { m_searchedLogStreams = value; }

    /**
     * <p>A list of <code>SearchedLogStream</code> objects indicating which log streams
     * have been searched in this request and whether each has been searched completely
     * or still has more to be paginated.</p>
     */
    inline FilterLogEventsResult& WithSearchedLogStreams(const Aws::Vector<SearchedLogStream>& value) { SetSearchedLogStreams(value); return *this;}

    /**
     * <p>A list of <code>SearchedLogStream</code> objects indicating which log streams
     * have been searched in this request and whether each has been searched completely
     * or still has more to be paginated.</p>
     */
    inline FilterLogEventsResult& WithSearchedLogStreams(Aws::Vector<SearchedLogStream>&& value) { SetSearchedLogStreams(value); return *this;}

    /**
     * <p>A list of <code>SearchedLogStream</code> objects indicating which log streams
     * have been searched in this request and whether each has been searched completely
     * or still has more to be paginated.</p>
     */
    inline FilterLogEventsResult& AddSearchedLogStreams(const SearchedLogStream& value) { m_searchedLogStreams.push_back(value); return *this; }

    /**
     * <p>A list of <code>SearchedLogStream</code> objects indicating which log streams
     * have been searched in this request and whether each has been searched completely
     * or still has more to be paginated.</p>
     */
    inline FilterLogEventsResult& AddSearchedLogStreams(SearchedLogStream&& value) { m_searchedLogStreams.push_back(value); return *this; }

    /**
     * <p>A pagination token obtained from a <code>FilterLogEvents</code> response to
     * continue paginating the FilterLogEvents results. This token is omitted from the
     * response when there are no other events to display.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token obtained from a <code>FilterLogEvents</code> response to
     * continue paginating the FilterLogEvents results. This token is omitted from the
     * response when there are no other events to display.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token obtained from a <code>FilterLogEvents</code> response to
     * continue paginating the FilterLogEvents results. This token is omitted from the
     * response when there are no other events to display.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>A pagination token obtained from a <code>FilterLogEvents</code> response to
     * continue paginating the FilterLogEvents results. This token is omitted from the
     * response when there are no other events to display.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token obtained from a <code>FilterLogEvents</code> response to
     * continue paginating the FilterLogEvents results. This token is omitted from the
     * response when there are no other events to display.</p>
     */
    inline FilterLogEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token obtained from a <code>FilterLogEvents</code> response to
     * continue paginating the FilterLogEvents results. This token is omitted from the
     * response when there are no other events to display.</p>
     */
    inline FilterLogEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token obtained from a <code>FilterLogEvents</code> response to
     * continue paginating the FilterLogEvents results. This token is omitted from the
     * response when there are no other events to display.</p>
     */
    inline FilterLogEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<FilteredLogEvent> m_events;
    Aws::Vector<SearchedLogStream> m_searchedLogStreams;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
