/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import "BKSAccelerometerDelegate.h"
#import <NSObject.h> // Unknown library

@class BKSAccelerometer;
@protocol SBSAccelerometerDelegate;

@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate> {
	id<SBSAccelerometerDelegate> _delegate;	// 4 = 0x4
	BKSAccelerometer *_bksMirror;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL accelerometerEventsEnabled;	// G=0x364abf99; S=0x364abfbd; 
@property(assign, nonatomic) id<SBSAccelerometerDelegate> delegate;	// G=0x364ac1f1; S=0x364ac201; @synthesize=_delegate
@property(assign, nonatomic) BOOL orientationEventsEnabled;	// G=0x364ac0fd; S=0x364ac0dd; 
@property(assign, nonatomic) double updateInterval;	// G=0x364abfdd; S=0x364abffd; 
@property(assign, nonatomic) float xThreshold;	// G=0x364ac01d; S=0x364ac03d; 
@property(assign, nonatomic) float yThreshold;	// G=0x364ac05d; S=0x364ac07d; 
@property(assign, nonatomic) float zThreshold;	// G=0x364ac09d; S=0x364ac0bd; 
- (id)init;	// 0x364abec1
- (void)accelerometer:(id)accelerometer didAccelerateWithTimeStamp:(double)timeStamp x:(float)x y:(float)y z:(float)z eventType:(int)type;	// 0x364ac141
- (void)accelerometer:(id)accelerometer didChangeDeviceOrientation:(int)orientation;	// 0x364ac199
// declared property getter: - (BOOL)accelerometerEventsEnabled;	// 0x364abf99
- (int)currentDeviceOrientation;	// 0x364ac121
- (void)dealloc;	// 0x364abf39
// declared property getter: - (id)delegate;	// 0x364ac1f1
// declared property getter: - (BOOL)orientationEventsEnabled;	// 0x364ac0fd
// declared property setter: - (void)setAccelerometerEventsEnabled:(BOOL)enabled;	// 0x364abfbd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x364ac201
// declared property setter: - (void)setOrientationEventsEnabled:(BOOL)enabled;	// 0x364ac0dd
// declared property setter: - (void)setUpdateInterval:(double)interval;	// 0x364abffd
// declared property setter: - (void)setXThreshold:(float)threshold;	// 0x364ac03d
// declared property setter: - (void)setYThreshold:(float)threshold;	// 0x364ac07d
// declared property setter: - (void)setZThreshold:(float)threshold;	// 0x364ac0bd
// declared property getter: - (double)updateInterval;	// 0x364abfdd
// declared property getter: - (float)xThreshold;	// 0x364ac01d
// declared property getter: - (float)yThreshold;	// 0x364ac05d
// declared property getter: - (float)zThreshold;	// 0x364ac09d
@end

