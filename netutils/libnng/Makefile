#############################################################################
# apps/netutils/libnng/Makefile
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

CONFIG_NETUTILS_LIBNNG_URL ?= "https://github.com/nanomsg/nng/archive"
CONFIG_NETUTILS_LIBNNG_VERSION ?= "1.5.2"
LIBNNG_VERSION = $(patsubst "%",%,$(strip $(CONFIG_NETUTILS_LIBNNG_VERSION)))

LIBNNG_TARBALL = v$(LIBNNG_VERSION).tar.gz

LIBNNG_UNPACKNAME = nng-$(LIBNNG_VERSION)
UNPACK ?= tar -zxf

LIBNNG_UNPACKDIR = $(WD)/$(LIBNNG_UNPACKNAME)
LIBNNG_SRCDIR = $(LIBNNG_UNPACKNAME)

#APPS_INCDIR = $(APPDIR)$(DELIM)include$(DELIM)netutils
#XX = ${shell $(INCDIR) "$(CC)" $(APPS_INCDIR)}

#CFLAGS += -I$(APPS_INCDIR) -I$(APPDIR)$(DELIM)netutils$(DELIM)libnng
#CFLAGS += -D ZMQ_IOTHREAD_POLLER_USE_POLL -D ZMQ_POLL_BASED_ON_POLL

#CFLAGS += -I$(LIBNNG_SRCDIR)$(DELIM)include
CFLAGS += -I$(LIBNNG_SRCDIR)$(DELIM)src
CFLAGS += -DNNG_PLATFORM_POSIX -DNNG_HAVE_ARC4RANDOM -DNNG_USE_ARC4RANDOM
CFLAGS += -DNNG_TEST_LIB=0
#CFLAGS += -DNNG_ENABLE_STATS=0
#CFLAGS += -DNNG_ELIDE_DEPRECATED
CFLAGS += -DNNG_HAVE_PTHREAD_SETNAME_NP
CFLAGS += -DNNG_TRANSPORT_TCP
CFLAGS += -DNNG_TRANSPORT_INPROC
CFLAGS += -DNNG_TRANSPORT_IPC

CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)nng.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)nng_legacy.c

# Core
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)aio.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)device.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)dialer.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)file.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)idhash.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)init.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)list.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)listener.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)lmq.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)message.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)msgqueue.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)options.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)pollable.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)panic.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)pipe.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)protocol.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)reap.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)socket.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)stats.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)stream.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)strs.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)taskq.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)tcp.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)thread.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)timer.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)core$(DELIM)url.c

# Posix platform
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_alloc.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_atomic.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_clock.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_debug.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_file.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_ipcconn.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_ipcdial.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_ipclisten.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_pipe.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_resolv_gai.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_sockaddr.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_tcpconn.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_tcpdial.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_tcplisten.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_thread.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_udp.c

# PORT_CREATE
#CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_pollq_port.c

#CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_pollq_epoll.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_pollq_poll.c

# RANDOM
#CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_rand_arc4random.c
#CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_rand_getrandom.c
#CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)platform$(DELIM)posix$(DELIM)posix_rand_urandom.c

CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)bus0$(DELIM)bus.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)pair0$(DELIM)pair.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)pair1$(DELIM)pair.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)pair1$(DELIM)pair1_poly.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)pipeline0$(DELIM)pull.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)pipeline0$(DELIM)push.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)pubsub0$(DELIM)pub.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)pubsub0$(DELIM)sub.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)pubsub0$(DELIM)xsub.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)reqrep0$(DELIM)rep.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)reqrep0$(DELIM)req.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)reqrep0$(DELIM)xrep.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)reqrep0$(DELIM)xreq.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)survey0$(DELIM)respond.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)survey0$(DELIM)survey.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)survey0$(DELIM)xrespond.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)protocol$(DELIM)survey0$(DELIM)xsurvey.c

CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)transport.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)transport$(DELIM)inproc$(DELIM)inproc.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)transport$(DELIM)ipc$(DELIM)ipc.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)transport$(DELIM)tcp$(DELIM)tcp.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)transport$(DELIM)tls$(DELIM)tls.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)transport$(DELIM)ws$(DELIM)websocket.c
#CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)transport$(DELIM)zerotier$(DELIM)zerotier.c
#CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)sp$(DELIM)transport$(DELIM)zerotier$(DELIM)zthash.c

CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)supplemental$(DELIM)tls$(DELIM)tls_common.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)supplemental$(DELIM)websocket$(DELIM)stub.c

#CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)supplemental$(DELIM)util$(DELIM)options.c
CSRCS += $(LIBNNG_SRCDIR)$(DELIM)src$(DELIM)supplemental$(DELIM)util$(DELIM)platform.c

# use nuttx-specific random
CSRCS += nuttx_rand_arc4random.c

$(LIBNNG_TARBALL):
	@echo "Downloading: $(LIBNNG_TARBALL)"
	$(Q) curl -O -L $(CONFIG_NETUTILS_LIBNNG_URL)/$(LIBNNG_TARBALL)

$(LIBNNG_UNPACKNAME): $(LIBNNG_TARBALL)
	@echo "Unpacking: $(LIBNNG_TARBALL) -> $(LIBNNG_UNPACKNAME)"
	$(Q) $(UNPACK) $(LIBNNG_TARBALL)
	$(Q) touch $(LIBNNG_UNPACKNAME)

$(LIBNNG_SRCDIR)$(DELIM)include$(DELIM)nng$(DELIM)nng.h: $(LIBNNG_UNPACKNAME)

$(APPDIR)$(DELIM)nng$(DELIM)nng.h: $(LIBNNG_SRCDIR)$(DELIM)include$(DELIM)nng$(DELIM)nng.h
	$(Q) cp -r $(LIBNNG_SRCDIR)$(DELIM)include$(DELIM)nng $(APPDIR)$(DELIM)include

context:: $(APPDIR)$(DELIM)nng$(DELIM)nng.h

distclean::
	$(call DELDIR, $(LIBNNG_UNPACKNAME))
	$(call DELFILE, $(LIBNNG_TARBALL))
	${shell "rm -rf $(APPDIR)/include/nng"}

include $(APPDIR)/Application.mk
