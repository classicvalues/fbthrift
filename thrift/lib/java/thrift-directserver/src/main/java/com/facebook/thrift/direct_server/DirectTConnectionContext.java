package com.facebook.thrift.direct_server;

import com.facebook.thrift.protocol.TProtocol;
import com.facebook.thrift.server.TConnectionContext;
import java.net.InetAddress;
import java.nio.channels.SocketChannel;

public class DirectTConnectionContext extends TConnectionContext {
  private InetAddress peerAddress_;

  public DirectTConnectionContext(SocketChannel chan, TProtocol proto) {
    super(proto, proto);
    peerAddress_ = chan.socket() != null ? chan.socket().getInetAddress() : null;
  }

  @Override
  public InetAddress getPeerAddress() {
    return peerAddress_;
  }
}
