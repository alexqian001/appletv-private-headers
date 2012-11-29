/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSString, NSMutableDictionary, NSDictionary;

@interface MPAnimationTrigger : MPAction {
	NSString *_animationKey;	// 16 = 0x10
	NSMutableDictionary *_animationAttributes;	// 20 = 0x14
}
@property(copy, nonatomic) NSDictionary *animationAttributes;	// G=0x32395475; S=0x32395379; @synthesize=_animationAttributes
@property(copy, nonatomic) NSString *animationKey;	// G=0x32395461; S=0x3239530d; @synthesize=_animationKey
+ (id)animationTrigger;	// 0x32395059
- (id)init;	// 0x3239509d
- (id)initWithCoder:(id)coder;	// 0x323950e9
- (id)animationAttributeForKey:(id)key;	// 0x323952ed
// declared property getter: - (id)animationAttributes;	// 0x32395475
// declared property getter: - (id)animationKey;	// 0x32395461
- (id)copyWithZone:(NSZone *)zone;	// 0x32395279
- (void)dealloc;	// 0x3239518d
- (void)encodeWithCoder:(id)coder;	// 0x323951f1
- (void)setAction:(id)action;	// 0x323953e5
// declared property setter: - (void)setAnimationAttributes:(id)attributes;	// 0x32395379
// declared property setter: - (void)setAnimationKey:(id)key;	// 0x3239530d
@end
