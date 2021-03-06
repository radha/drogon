/**
 *
 *  HttpUtils.h
 *  An Tao
 *  
 *  Copyright 2018, An Tao.  All rights reserved.
 *  https://github.com/an-tao/drogon
 *  Use of this source code is governed by a MIT license
 *  that can be found in the License file.
 *
 *  Drogon
 *
 */

#pragma once
#include <string>
#include <drogon/HttpTypes.h>
#include <drogon/config.h>
#include <trantor/utils/MsgBuffer.h>
#include <drogon/WebSocketConnection.h>

namespace drogon
{

const string_view &webContentTypeToString(ContentType contenttype);
const string_view &statusCodeToString(int code);
ContentType getContentType(const std::string &extName);

} // namespace drogon
