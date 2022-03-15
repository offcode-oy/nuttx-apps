#############################################################################
# apps/netutils/libzmq/Makefile
#
# Licensed to the Apache Software Foundation (ASF) under one or more
# contributor license agreements.  See the NOTICE file distributed with
# this work for additional information regarding copyright ownership.  The
# ASF licenses this file to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance with the
# License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
# License for the specific language governing permissions and limitations
# under the License.
#
#############################################################################

# Standard includes

include $(APPDIR)/Make.defs

# Set up build configuration and environment

WD := ${shell echo $(CURDIR) | sed -e 's/ /\\ /g'}

CONFIG_NETUTILS_LIBZMQ_URL ?= "https://github.com/zeromq/libzmq/archive"
CONFIG_NETUTILS_LIBZMQ_VERSION ?= "4.3.4"
LIBZMQ_VERSION = $(patsubst "%",%,$(strip $(CONFIG_NETUTILS_LIBZMQ_VERSION)))

LIBZMQ_TARBALL = v$(LIBZMQ_VERSION).tar.gz

LIBZMQ_UNPACKNAME = libzmq-$(LIBZMQ_VERSION)
UNPACK ?= tar -zxf

LIBZMQ_UNPACKDIR =  $(WD)/$(LIBZMQ_UNPACKNAME)
LIBZMQ_SRCDIR = $(LIBZMQ_UNPACKNAME)

APPS_INCDIR = $(APPDIR)$(DELIM)include$(DELIM)netutils

#XX = ${shell $(INCDIR) "$(CC)" $(APPS_INCDIR)}

CFLAGS += -I$(APPS_INCDIR) -I$(APPDIR)$(DELIM)netutils$(DELIM)libzmq
#CFLAGS += -D ZMQ_IOTHREAD_POLLER_USE_POLL -D ZMQ_POLL_BASED_ON_POLL
CXXFLAGS += -std=gnu++11 -I$(APPDIR)$(DELIM)netutils$(DELIM)libzmq
CXXEXT = .cpp

ifeq ($(CONFIG_CXX_EXCEPTION), y)
CXXFLAGS += -fexceptions
endif

CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)address.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)channel.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)client.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)clock.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ctx.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)curve_mechanism_base.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)curve_client.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)curve_server.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)dealer.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)decoder_allocators.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)devpoll.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)dgram.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)dist.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)dish.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)endpoint.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)epoll.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)err.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)fq.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)gather.cpp
#CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)gssapi_client.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)io_object.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)io_thread.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ip_resolver.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ip.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ipc_address.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ipc_connecter.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ipc_listener.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)kqueue.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)lb.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)mailbox.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)mailbox_safe.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)mechanism.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)mechanism_base.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)metadata.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)msg.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)mtrie.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)norm_engine.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)null_mechanism.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)object.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)options.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)own.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)pair.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)peer.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)pgm_receiver.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)pgm_sender.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)pgm_socket.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)pipe.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)plain_client.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)plain_server.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)poll.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)poller_base.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)polling_util.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)pollset.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)precompiled.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)proxy.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)pub.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)pull.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)push.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)radio.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)radix_tree.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)random.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)raw_decoder.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)raw_encoder.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)raw_engine.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)reaper.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)rep.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)req.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)router.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)scatter.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)select.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)server.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)session_base.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)signaler.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)socket_base.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)socket_poller.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)socks_connecter.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)socks.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)stream_connecter_base.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)stream_engine_base.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)stream_listener_base.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)stream.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)sub.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)tcp_address.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)tcp_connecter.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)tcp_listener.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)tcp.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)thread.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)timers.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)tipc_address.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)tipc_connecter.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)tipc_listener.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)trie.cpp
  CSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)tweetnacl.c
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)udp_address.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)udp_engine.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)v1_decoder.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)v1_encoder.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)v2_decoder.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)v2_encoder.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)v3_1_encoder.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)vmci_address.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)vmci_connecter.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)vmci_listener.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)vmci.cpp
# Needs SHA-1
#CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ws_address.cpp
#CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ws_conncter.cpp
#CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ws_decoder.cpp
#CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ws_encoder.cpp
#CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ws_engine.cpp
#CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)ws_listener.cpp
# Needs GNU-TLS
#CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)wss_address.cpp
#CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)wss_engine.cpp

CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)xpub.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)xsub.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)zap_client.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)zmq_utils.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)zmq.cpp
CXXSRCS += $(LIBZMQ_SRCDIR)$(DELIM)src$(DELIM)zmtp_engine.cpp



$(LIBZMQ_TARBALL):
	@echo "Downloading: $(LIBZMQ_TARBALL)"
	$(Q) curl -O -L $(CONFIG_NETUTILS_LIBZMQ_URL)/$(LIBZMQ_TARBALL)

$(LIBZMQ_UNPACKNAME): $(LIBZMQ_TARBALL)
	@echo "Unpacking: $(LIBZMQ_TARBALL) -> $(LIBZMQ_UNPACKNAME)"
	$(Q) $(UNPACK) $(LIBZMQ_TARBALL)
	$(Q) touch $(LIBZMQ_UNPACKNAME)


$(LIBZMQ_SRCDIR)$(DELIM)include$(DELIM)zmq.h: $(LIBZMQ_UNPACKNAME)

$(LIBZMQ_SRCDIR)$(DELIM)include$(DELIM)zmq_utils.h: $(LIBZMQ_UNPACKNAME)

$(APPS_INCDIR)$(DELIM)zmq.h: $(LIBZMQ_SRCDIR)$(DELIM)include$(DELIM)zmq.h
	$(Q) cp $< $@

$(APPS_INCDIR)$(DELIM)zmq_utils.h: $(LIBZMQ_SRCDIR)$(DELIM)include$(DELIM)zmq_utils.h
	$(Q) cp $< $@

context:: $(APPS_INCDIR)$(DELIM)zmq.h $(APPS_INCDIR)$(DELIM)zmq_utils.h

distclean::
	$(call DELDIR, $(LIBZMQ_UNPACKNAME))
	$(call DELFILE, $(LIBZMQ_TARBALL))
	$(call DELFILE, $(APPDIR)/include/netutils/zmq.h)
	$(call DELFILE, $(APPDIR)/include/netutils/zmq_utils.h)

include $(APPDIR)/Application.mk
