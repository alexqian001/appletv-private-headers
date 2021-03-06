/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue, NSXPCListenerDelegate;

@interface NSXPCListener : NSObject {
	void *_xconnection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_userQueue;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_internalQueue;	// 12 = 0xc
	id<NSXPCListenerDelegate> _delegate;	// 16 = 0x10
	NSString *_serviceName;	// 20 = 0x14
	unsigned long long _state;	// 24 = 0x18
	id _reserved1;	// 32 = 0x20
	id _reserved2;	// 36 = 0x24
}
@property(assign) id<NSXPCListenerDelegate> delegate;	// G=0x31a0a3b1; S=0x31a0a3c5; @synthesize=_delegate
@property(readonly, retain) NSString *serviceName;	// G=0x31a09f45; converted property
+ (id)_UUID;	// 0x31a0a331
+ (id)anonymousListener;	// 0x31a09705
+ (void)enableTransactions;	// 0x31a0a309
+ (id)serviceListener;	// 0x31a0965d
- (id)initWithMachServiceName:(id)machServiceName;	// 0x31a098ed
- (id)initWithServiceName:(id)serviceName;	// 0x31a09755
- (id)_initShared;	// 0x31a095ed
- (void)dealloc;	// 0x31a09a65
// declared property getter: - (id)delegate;	// 0x31a0a3b1
- (id)endpoint;	// 0x31a09f7d
- (void)finalize;	// 0x31a09ac1
- (void)invalidate;	// 0x31a09df9
- (void)resume;	// 0x31a09ba9
// converted property getter: - (id)serviceName;	// 0x31a09f45
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31a0a3c5
- (void)setOptions:(unsigned)options;	// 0x31a0a211
- (void)stop;	// 0x31a09dc9
- (void)suspend;	// 0x31a09b1d
@end

