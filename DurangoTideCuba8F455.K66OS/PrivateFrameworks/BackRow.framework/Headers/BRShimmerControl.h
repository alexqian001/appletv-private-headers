/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRShimmerControl : BRControl {
@private
	BRControl *_base;	// 44 = 0x2c
	BRImageControl *_shimmer;	// 48 = 0x30
	float _offset;	// 52 = 0x34
}
@property(assign) float offset;	// G=0x32fe5f59; S=0x32fe6065; converted property
+ (id)shimmerWithOffset:(float)offset;	// 0x32fe60c9
- (id)init;	// 0x32fe60b1
- (id)initWithOffset:(float)offset;	// 0x32fe6121
- (id)_calculateKeyTimes;	// 0x32fe5f69
- (id)_calculatePositionValues;	// 0x32fe627d
- (void)dealloc;	// 0x32fe6009
- (void)layoutSubcontrols;	// 0x32fe6345
// converted property getter: - (float)offset;	// 0x32fe5f59
// converted property setter: - (void)setOffset:(float)offset;	// 0x32fe6065
@end
