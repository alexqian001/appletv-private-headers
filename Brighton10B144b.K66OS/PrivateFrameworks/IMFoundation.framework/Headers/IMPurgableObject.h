/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IMPurgableObject : NSObject {
	id _instanceObject;	// 4 = 0x4
	id _setupBlock;	// 8 = 0x8
	id _cleanupBlock;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}
- (id)initWithSetupBlock:(id)setupBlock cleanupBlock:(id)block queue:(id)queue;	// 0x341c6b61
- (void)_cleanupInstance;	// 0x341c6cc9
- (void)_receivedMemoryWarning:(id)warning;	// 0x341c6e35
- (void)_setupInstance;	// 0x341c6c85
- (void)dealloc;	// 0x341c6bf9
- (id)instance;	// 0x341c6e0d
@end
