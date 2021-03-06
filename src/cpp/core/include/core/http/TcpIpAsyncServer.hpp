/*
 * TcpIpAsyncServer.hpp
 *
 * Copyright (C) 2009-11 by RStudio, Inc.
 *
 * This program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#ifndef CORE_HTTP_TCP_IP_ASYNC_SERVER_HPP
#define CORE_HTTP_TCP_IP_ASYNC_SERVER_HPP
   
#include <boost/asio/ip/tcp.hpp>

#include <core/http/AsyncServer.hpp>
#include <core/http/TcpIpSocketUtils.hpp>

namespace core {
namespace http {

class TcpIpAsyncServer : public AsyncServer<boost::asio::ip::tcp>
{
public:
   TcpIpAsyncServer(const std::string& serverName,
                    const std::string& baseUri = std::string())
      : AsyncServer<boost::asio::ip::tcp>(serverName, baseUri)
   {
   }
   
public:
   Error init(const std::string& address, const std::string& port)
   {
      return initTcpIpAcceptor(acceptorService(), address, port);
   }
};

} // namespace http
} // namespace core

#endif // CORE_HTTP_TCP_IP_ASYNC_SERVER_HPP


