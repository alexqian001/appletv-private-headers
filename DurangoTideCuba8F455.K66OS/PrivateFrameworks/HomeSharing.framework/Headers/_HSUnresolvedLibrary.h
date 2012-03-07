/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSNetService;

@interface _HSUnresolvedLibrary : NSObject {
@private
	id _completionHandler;	// 4 = 0x4
	NSNetService *_netService;	// 8 = 0x8
	DNSServiceRef_tRef _resolvingDNSService;	// 12 = 0xc
}
- (id)initWithNSNetService:(id)nsnetService;	// 0x333783b1
- (void)_callAndInvalidateCompletionHandlerWithLibrary:(id)library;	// 0x333781d9
- (void)_netServiceDidNotResolve;	// 0x3337846d
- (void)_netServiceDidResolveAddressWithTXTRecordData:(id)_netService host:(hostent *)host port:(unsigned short)port;	// 0x33379209
- (void)_timeoutResolve;	// 0x33378315
- (void)dealloc;	// 0x33378345
- (void)resolveWithTimeout:(double)timeout completionHandler:(id)handler;	// 0x33378fdd
@end
