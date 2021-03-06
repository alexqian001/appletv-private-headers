/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MRMotion : NSObject {
	NSString *_key;	// 4 = 0x4
	float _startValue;	// 8 = 0x8
	float _value;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	double _duration;	// 24 = 0x18
	float _easeIn;	// 32 = 0x20
	float _easeOut;	// 36 = 0x24
}
@property(readonly, assign) double duration;	// G=0x334b0aa5; @synthesize=_duration
@property(readonly, assign) float easeIn;	// G=0x334b0ad9; @synthesize=_easeIn
@property(readonly, assign) float easeOut;	// G=0x334b0aed; @synthesize=_easeOut
@property(readonly, assign) NSString *key;	// G=0x334b0a31; @synthesize=_key
@property(assign, nonatomic) double startTime;	// G=0x334b0a79; S=0x334b0a91; @synthesize=_startTime
@property(assign, nonatomic) float startValue;	// G=0x334b0a45; S=0x334b0a55; @synthesize=_startValue
@property(readonly, assign) float value;	// G=0x334b0a65; @synthesize=_value
- (id)initWithKey:(id)key value:(float)value duration:(double)duration easeIn:(float)anIn easeOut:(float)anOut;	// 0x334b07cd
- (void)dealloc;	// 0x334b08b5
// declared property getter: - (double)duration;	// 0x334b0aa5
// declared property getter: - (float)easeIn;	// 0x334b0ad9
// declared property getter: - (float)easeOut;	// 0x334b0aed
// declared property getter: - (id)key;	// 0x334b0a31
// declared property setter: - (void)setStartTime:(double)time;	// 0x334b0a91
// declared property setter: - (void)setStartValue:(float)value;	// 0x334b0a55
// declared property getter: - (double)startTime;	// 0x334b0a79
// declared property getter: - (float)startValue;	// 0x334b0a45
// declared property getter: - (float)value;	// 0x334b0a65
- (float)valueAtTime:(double)time;	// 0x334b0909
@end

