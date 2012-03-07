/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface MCAnimationTrigger : MCAction {
	NSString *mAnimationKey;	// 16 = 0x10
	NSMutableDictionary *mAnimationAttributes;	// 20 = 0x14
}
@property(copy) NSDictionary *animationAttributes;	// G=0x335bbc7d; S=0x335bbd65; @synthesize=mAnimationAttributes
@property(copy) NSString *animationKey;	// G=0x335bbf8d; S=0x335bbfa1; @synthesize=mAnimationKey
+ (id)animationTriggerForTargetPlugObjectID:(id)targetPlugObjectID withAnimationKey:(id)animationKey;	// 0x335bb795
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x335bb80d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x335bbe79
- (id)animationAttributeForKey:(id)key;	// 0x335bb9e1
// declared property getter: - (id)animationAttributes;	// 0x335bbc7d
// declared property getter: - (id)animationKey;	// 0x335bbf8d
- (void)demolish;	// 0x335bb8dd
- (id)imprint;	// 0x335bb955
- (void)setAnimationAttribute:(id)attribute forKey:(id)key;	// 0x335bbb09
// declared property setter: - (void)setAnimationAttributes:(id)attributes;	// 0x335bbd65
// declared property setter: - (void)setAnimationKey:(id)key;	// 0x335bbfa1
@end
