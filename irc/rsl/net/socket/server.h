/*
 * Copyright (c) 2007, Alberto Alonso Pinto
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without modification, are permitted
 * provided that the following conditions are met:
 * 
 *     * Redistributions of source code must retain the above copyright notice, this list of conditions
 *       and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright notice, this list of conditions
 *       and the following disclaimer in the documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Alberto Alonso Pinto nor the names of its contributors may be used to endorse or
 *       promote products derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _RSL_NET_SOCKET_SERVER_H
#define _RSL_NET_SOCKET_SERVER_H

#include <sys/types.h>
#include "client.h"
#include "ip.h"

#define RSL_INADDR_ANY "0.0.0.0"
#define RSL_IN6ADDR_ANY "::0"

namespace Rsl { namespace Net { namespace Socket {

  /*
   * Server
   *
   * Common interface for creating server sockets
   */
  class SocketServer
  {
  protected:
    SocketServer();
    SocketServer(const IPAddr& bindAddr);
    ~SocketServer();

    void Create(const IPAddr& bindAddr);
    bool HasAddr() const;

    const addrinfo* m_addr;
    
  public:
    virtual const SocketClient& Select(unsigned long timeout) = 0;

  private:
    bool m_hasAddr;
  };

}; }; };

#endif /* #ifndef _RSL_NET_SOCKET_SERVER_H */

