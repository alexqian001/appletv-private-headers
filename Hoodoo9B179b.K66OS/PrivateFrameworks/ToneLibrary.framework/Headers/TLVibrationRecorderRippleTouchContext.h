/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library
#import "ToneLibrary-Structs.h"


@interface TLVibrationRecorderRippleTouchContext : NSObject {
	double _creationTimestamp;	// 4 = 0x4
	CGPoint _location;	// 12 = 0xc
	float _speed;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGPoint location;	// G=0x36e09be9; @synthesize=_location
@property(readonly, assign, nonatomic) float speed;	// G=0x36e09c05; @synthesize=_speed
- (id)init;	// 0x36e09a71
- (void)configureWithTimeIntervalSinceCreation:(double)timeIntervalSinceCreation location:(CGPoint)location;	// 0x36e09ab5
- (void)configureWithTimeIntervalSinceCreation:(double)timeIntervalSinceCreation location:(CGPoint)location speed:(float)speed;	// 0x36e09ae1
// declared property getter: - (CGPoint)location;	// 0x36e09be9
- (void)reset;	// 0x36e09b55
// declared property getter: - (float)speed;	// 0x36e09c05
- (double)timeIntervalSinceCreation;	// 0x36e09ba5
@end

