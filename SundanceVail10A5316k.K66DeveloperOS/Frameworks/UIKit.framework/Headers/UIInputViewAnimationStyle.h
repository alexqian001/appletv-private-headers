/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : NSObject {
@private
	BOOL animated;	// 4 = 0x4
	double duration;	// 8 = 0x8
	int outDirection;	// 16 = 0x10
	BOOL force;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL animated;	// G=0x30105db9; S=0x300977a9; @synthesize
@property(assign, nonatomic) double duration;	// G=0x30106f71; S=0x300977b9; @synthesize
@property(assign, nonatomic) BOOL force;	// G=0x301ef945; S=0x3014f1fd; @synthesize
@property(assign, nonatomic) int outDirection;	// G=0x30105945; S=0x300977cd; @synthesize
+ (id)animationStyleAnimated:(BOOL)animated duration:(double)duration outDirection:(int)direction;	// 0x30097721
+ (id)animationStyleDefault;	// 0x300976e9
+ (id)animationStyleImmediate;	// 0x30150a89
// declared property getter: - (BOOL)animated;	// 0x30105db9
- (id)description;	// 0x30396721
// declared property getter: - (double)duration;	// 0x30106f71
// declared property getter: - (BOOL)force;	// 0x301ef945
- (BOOL)isEqual:(id)equal;	// 0x301d0d69
// declared property getter: - (int)outDirection;	// 0x30105945
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x300977a9
// declared property setter: - (void)setDuration:(double)duration;	// 0x300977b9
// declared property setter: - (void)setForce:(BOOL)force;	// 0x3014f1fd
// declared property setter: - (void)setOutDirection:(int)direction;	// 0x300977cd
@end
