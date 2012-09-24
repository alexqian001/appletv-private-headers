/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import <NSObject.h> // Unknown library


@interface CMDeviceOrientationManager : NSObject {
	id _internal;	// 4 = 0x4
}
+ (void)dummySelector:(id)selector;	// 0x36a24cc1
+ (void)initialize;	// 0x36a23fc9
- (id)init;	// 0x36a241c1
- (id)initPrivate;	// 0x36a24351
- (void)dealloc;	// 0x36a243b5
- (void)deallocPrivate;	// 0x36a24521
- (id)deviceOrientationBlocking;	// 0x36a24be5
- (BOOL)isDeviceOrientationActive;	// 0x36a245d1
- (BOOL)isDeviceOrientationAvailable;	// 0x36a245c1
- (void)onDeviceOrientation:(const Sample *)orientation;	// 0x36a249cd
- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)queue withHandler:(id)handler;	// 0x36a247a9
- (void)startDeviceOrientationUpdatesToQueue:(id)queue withHandler:(id)handler;	// 0x36a245f5
- (void)stopDeviceOrientationUpdates;	// 0x36a246f9
- (void)stopDeviceOrientationUpdatesPrivate;	// 0x36a248e5
@end
