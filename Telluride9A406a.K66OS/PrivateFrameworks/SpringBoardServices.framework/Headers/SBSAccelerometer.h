/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import "SpringBoardServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSThread;
@protocol SBSAccelerometerDelegate;

@interface SBSAccelerometer : NSObject {
	id<SBSAccelerometerDelegate> _delegate;	// 4 = 0x4
	CFRunLoopSourceRef _accelerometerEventsSource;	// 8 = 0x8
	CFRunLoopRef _accelerometerEventsRunLoop;	// 12 = 0xc
	double _interval;	// 16 = 0x10
	NSLock *_lock;	// 24 = 0x18
	BOOL _orientationEventsEnabled;	// 28 = 0x1c
	int _orientationEventsToken;	// 32 = 0x20
	NSThread *_orientationEventsThread;	// 36 = 0x24
	float _xThreshold;	// 40 = 0x28
	float _yThreshold;	// 44 = 0x2c
	float _zThreshold;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL accelerometerEventsEnabled;	// G=0x31728435; S=0x317284d5; 
@property(assign, nonatomic) id<SBSAccelerometerDelegate> delegate;	// G=0x317284b5; S=0x317284c5; @synthesize=_delegate
@property(assign, nonatomic) BOOL orientationEventsEnabled;	// G=0x31728495; S=0x317289f9; 
@property(assign, nonatomic) double updateInterval;	// G=0x3172844d; S=0x31728551; 
@property(assign, nonatomic) float xThreshold;	// G=0x31728465; S=0x317285d5; 
@property(assign, nonatomic) float yThreshold;	// G=0x31728475; S=0x31728659; 
@property(assign, nonatomic) float zThreshold;	// G=0x31728485; S=0x317286dd; 
- (id)init;	// 0x31728925
- (void)_checkIn;	// 0x31728b7d
- (void)_checkOut;	// 0x31728ac5
- (void)_orientationDidChange;	// 0x317288c5
- (id)_orientationEventsThread;	// 0x317284a5
- (void)_serverWasRestarted;	// 0x317287bd
// declared property getter: - (BOOL)accelerometerEventsEnabled;	// 0x31728435
- (int)currentDeviceOrientation;	// 0x317289c9
- (void)dealloc;	// 0x31728eb5
// declared property getter: - (id)delegate;	// 0x317284b5
// declared property getter: - (BOOL)orientationEventsEnabled;	// 0x31728495
// declared property setter: - (void)setAccelerometerEventsEnabled:(BOOL)enabled;	// 0x317284d5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x317284c5
// declared property setter: - (void)setOrientationEventsEnabled:(BOOL)enabled;	// 0x317289f9
// declared property setter: - (void)setUpdateInterval:(double)interval;	// 0x31728551
// declared property setter: - (void)setXThreshold:(float)threshold;	// 0x317285d5
// declared property setter: - (void)setYThreshold:(float)threshold;	// 0x31728659
// declared property setter: - (void)setZThreshold:(float)threshold;	// 0x317286dd
// declared property getter: - (double)updateInterval;	// 0x3172844d
// declared property getter: - (float)xThreshold;	// 0x31728465
// declared property getter: - (float)yThreshold;	// 0x31728475
// declared property getter: - (float)zThreshold;	// 0x31728485
@end
