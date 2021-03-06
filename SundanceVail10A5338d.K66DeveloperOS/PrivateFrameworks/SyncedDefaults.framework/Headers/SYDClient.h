/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import "SyncedDefaults-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface SYDClient : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
	NSString *_bundleIdentifier;	// 12 = 0xc
	NSString *_storeIdentifier;	// 16 = 0x10
	BOOL _additionalSource;	// 20 = 0x14
}
- (id)initWithQueue:(id)queue bundleIdentifier:(CFStringRef)identifier storeIdentifier:(CFStringRef)identifier3;	// 0x33068325
- (id)initWithQueue:(id)queue bundleIdentifier:(CFStringRef)identifier storeIdentifier:(CFStringRef)identifier3 additionalSource:(BOOL)source;	// 0x3306825d
- (void)_createConnectionIfNecessary;	// 0x33068405
- (id)_newMessageWithName:(id)name userInfo:(id)info;	// 0x330685f9
- (void)_resetConnection;	// 0x33068551
- (void)_sendMessage:(id)message replyHandler:(id)handler;	// 0x33068c29
- (void)_sendMessageNoReply:(id)reply;	// 0x33068a5d
- (id)_sendMessageWithReplySync:(id)replySync;	// 0x33068725
- (void)dealloc;	// 0x33068349
- (void)finalize;	// 0x330683c1
- (void)sendMessageWithName:(id)name;	// 0x33068ec1
- (void)sendMessageWithName:(id)name replyHandler:(id)handler;	// 0x33068f99
- (id)sendMessageWithName:(id)name userInfo:(id)info;	// 0x33068f09
- (void)shutdown;	// 0x3306857d
@end

