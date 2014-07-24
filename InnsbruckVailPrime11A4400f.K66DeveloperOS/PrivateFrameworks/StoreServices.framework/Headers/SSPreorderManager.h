/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import </libobjc.A.h>

@class NSArray, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSPreorderManager : NSObject {
	SSXPCConnection *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSArray *_itemKinds;	// 12 = 0xc
	SSXPCConnection *_observerConnection;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_observerQueue;	// 20 = 0x14
	CFArrayRef _observers;	// 24 = 0x18
	NSArray *_preorders;	// 28 = 0x1c
}
@property(readonly, assign) NSArray *itemKinds;	// G=0x32830ca9; 
@property(readonly, assign) NSArray *preorders;	// G=0x32830ce1; 
+ (id)bookStoreItemKinds;	// 0x32830855
+ (id)musicStoreItemKinds;	// 0x32830889
- (id)init;	// 0x3283061d
- (id)initWithItemKinds:(id)itemKinds;	// 0x32830631
- (void)_connectAsObserver;	// 0x328311f5
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x328314d1
- (void)_registerAsObserver;	// 0x3283156d
- (void)_sendMessageToObservers:(SEL)observers;	// 0x32831619
- (void)addObserver:(id)observer;	// 0x32830999
- (void)cancelPreorders:(id)preorders withCompletionBlock:(id)completionBlock;	// 0x32830a49
- (void)dealloc;	// 0x32830779
// declared property getter: - (id)itemKinds;	// 0x32830ca9
// declared property getter: - (id)preorders;	// 0x32830ce1
- (void)reloadFromServer;	// 0x328310cd
- (void)removeObserver:(id)observer;	// 0x3283111d
@end
