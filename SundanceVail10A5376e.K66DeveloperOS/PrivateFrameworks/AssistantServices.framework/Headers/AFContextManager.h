/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library
#import "AssistantServices-Structs.h"

@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {
	CFArrayRef _contextProviders;	// 4 = 0x4
	CPDistributedMessagingCenter *_center;	// 8 = 0x8
}
+ (id)defaultContextManager;	// 0x3461a759
- (id)init;	// 0x3461a7d9
- (void).cxx_destruct;	// 0x3461af45
- (id)_collateContexts;	// 0x3461aac9
- (void)_collateContextsIntoArray:(id)array;	// 0x3461a9e1
- (void)_shutdownServer;	// 0x3461ab5d
- (BOOL)addContextProvider:(id)provider;	// 0x3461abb5
- (void)dealloc;	// 0x3461af05
- (void)nothing;	// 0x3461a839
- (void)removeContextProvider:(id)provider;	// 0x3461ae09
- (void)startCenter:(id)center;	// 0x3461a83d
@end
