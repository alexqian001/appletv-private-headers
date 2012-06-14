/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <NSObject.h> // Unknown library
#import "AccountsDaemon-Structs.h"

@class NSSet, ACDAuthenticationHandlerQueueManager;

@interface ACDAuthenticationManager : NSObject {
@private
	ACDAuthenticationHandlerQueueManager *_handlerManager;	// 4 = 0x4
	NSSet *_pluginBundles;	// 8 = 0x8
	dispatch_queue_s *_authenticationPluginQueue;	// 12 = 0xc
	dispatch_semaphore_s *_authPluginSemaphore;	// 16 = 0x10
}
@property(readonly, assign) NSSet *pluginBundles;	// G=0x324a6005; @synthesize=_pluginBundles
- (id)init;	// 0x324a3791
- (void).cxx_destruct;	// 0x324a6019
- (void)dealloc;	// 0x324a3845
// declared property getter: - (id)pluginBundles;	// 0x324a6005
- (id)pluginForAccountType:(id)accountType;	// 0x324a3899
- (void)promptUserForCredentialsWithAccount:(id)account handler:(id)handler;	// 0x324a5a21
- (void)renewCredentialsForAccount:(id)account bundleID:(id)anId withAccessInfo:(id)accessInfo handler:(id)handler;	// 0x324a50e9
- (void)verifyCredentialsForAccount:(id)account client:(id)client handler:(id)handler;	// 0x324a4639
- (void)verifyCredentialsForAccount:(id)account client:(id)client saveWhenAuthorized:(BOOL)authorized handler:(id)handler;	// 0x324a3b19
@end
