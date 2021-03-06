/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import </libobjc.A.h>
#import "CoreMotion-Structs.h"

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CMGestureManagerInternal : NSObject {
	int fPriority;	// 4 = 0x4
	CLConnectionClient *fLocationdConnection;	// 8 = 0x8
	id fGestureHandler;	// 12 = 0xc
	NSObject<OS_dispatch_source> *fWatchDogTimer;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *fPrivateQueue;	// 20 = 0x14
}
- (id)initWithPriority:(int)priority;	// 0x2d935ea1
- (void)dealloc;	// 0x2d935f01
- (void)startGestureUpdatesWithHandlerPrivate:(id)handlerPrivate;	// 0x2d9361b9
- (void)startWatchdogCheckinsPrivate;	// 0x2d935f49
- (void)stopGestureUpdatesPrivate;	// 0x2d936779
- (void)stopWatchdogCheckinsPrivate;	// 0x2d936195
@end

