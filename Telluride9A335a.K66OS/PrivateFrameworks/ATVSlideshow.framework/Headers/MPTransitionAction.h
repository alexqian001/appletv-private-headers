/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol MPActionableSupport;

@interface MPTransitionAction : MPAction {
	NSString *_transitionID;	// 20 = 0x14
	double _transitionDuration;	// 24 = 0x18
	NSMutableDictionary *_transitionAttributes;	// 32 = 0x20
	NSObject<MPActionableSupport> *_transitionDestination;	// 36 = 0x24
}
@property(copy, nonatomic) NSDictionary *transitionAttributes;	// G=0x31a3e2c1; S=0x31a3dac9; @synthesize=_transitionAttributes
@property(retain, nonatomic) NSObject<MPActionableSupport> *transitionDestination;	// G=0x31a3e2f9; S=0x31a3ded5; @synthesize=_transitionDestination
@property(assign, nonatomic) double transitionDuration;	// G=0x31a3e2e1; S=0x31a3de25; @synthesize=_transitionDuration
@property(copy, nonatomic) NSString *transitionID;	// G=0x31a3e2d1; S=0x31a3dd59; @synthesize=_transitionID
+ (id)transitionAction;	// 0x31a3d619
- (id)init;	// 0x31a3d65d
- (id)initWithCoder:(id)coder;	// 0x31a3d6c9
- (void)configureTarget;	// 0x31a3e17d
- (id)copyWithZone:(NSZone *)zone;	// 0x31a3d9ed
- (void)dealloc;	// 0x31a3d81d
- (void)encodeWithCoder:(id)coder;	// 0x31a3d891
- (void)removeTransitionAttributeForKey:(id)key;	// 0x31a3dca5
- (void)setAction:(id)action;	// 0x31a3dfb9
- (void)setTransitionAttribute:(id)attribute forKey:(id)key;	// 0x31a3db95
// declared property setter: - (void)setTransitionAttributes:(id)attributes;	// 0x31a3dac9
// declared property setter: - (void)setTransitionDestination:(id)destination;	// 0x31a3ded5
// declared property setter: - (void)setTransitionDuration:(double)duration;	// 0x31a3de25
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x31a3dd59
- (id)transitionAttributeForKey:(id)key;	// 0x31a3daa9
// declared property getter: - (id)transitionAttributes;	// 0x31a3e2c1
// declared property getter: - (id)transitionDestination;	// 0x31a3e2f9
// declared property getter: - (double)transitionDuration;	// 0x31a3e2e1
// declared property getter: - (id)transitionID;	// 0x31a3e2d1
@end
