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
@property(assign, nonatomic) BOOL accelerometerEventsEnabled;	// G=0x32d89bbd; S=0x32d89fd5; 
@property(assign, nonatomic) id<SBSAccelerometerDelegate> delegate;	// G=0x32d89c31; S=0x32d89c41; @synthesize=_delegate
@property(assign, nonatomic) BOOL orientationEventsEnabled;	// G=0x32d89c11; S=0x32d8a429; 
@property(assign, nonatomic) double updateInterval;	// G=0x32d89bd1; S=0x32d89f59; 
@property(assign, nonatomic) float xThreshold;	// G=0x32d89be1; S=0x32d89edd; 
@property(assign, nonatomic) float yThreshold;	// G=0x32d89bf1; S=0x32d89e61; 
@property(assign, nonatomic) float zThreshold;	// G=0x32d89c01; S=0x32d89de5; 
- (id)init;	// 0x32d8a045
- (void)_checkIn;	// 0x32d8a155
- (void)_checkOut;	// 0x32d8a4d9
- (void)_orientationDidChange;	// 0x32d89c51
- (id)_orientationEventsThread;	// 0x32d89c21
- (void)_serverWasRestarted;	// 0x32d89d39
// declared property getter: - (BOOL)accelerometerEventsEnabled;	// 0x32d89bbd
- (int)currentDeviceOrientation;	// 0x32d8a585
- (void)dealloc;	// 0x32d8a0dd
// declared property getter: - (id)delegate;	// 0x32d89c31
// declared property getter: - (BOOL)orientationEventsEnabled;	// 0x32d89c11
// declared property setter: - (void)setAccelerometerEventsEnabled:(BOOL)enabled;	// 0x32d89fd5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32d89c41
// declared property setter: - (void)setOrientationEventsEnabled:(BOOL)enabled;	// 0x32d8a429
// declared property setter: - (void)setUpdateInterval:(double)interval;	// 0x32d89f59
// declared property setter: - (void)setXThreshold:(float)threshold;	// 0x32d89edd
// declared property setter: - (void)setYThreshold:(float)threshold;	// 0x32d89e61
// declared property setter: - (void)setZThreshold:(float)threshold;	// 0x32d89de5
// declared property getter: - (double)updateInterval;	// 0x32d89bd1
// declared property getter: - (float)xThreshold;	// 0x32d89be1
// declared property getter: - (float)yThreshold;	// 0x32d89bf1
// declared property getter: - (float)zThreshold;	// 0x32d89c01
@end
