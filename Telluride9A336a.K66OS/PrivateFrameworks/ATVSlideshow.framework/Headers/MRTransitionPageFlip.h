/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MRTransition.h"
#import "ATVSlideshow-Structs.h"


@interface MRTransitionPageFlip : MRTransition {
	XXStruct_mi4pgC *mMesh;	// 60 = 0x3c
}
- (id)initWithTransitionID:(id)transitionID;	// 0x3439df15
- (void)buildMesh;	// 0x3439dfe9
- (void)cleaup;	// 0x3439df55
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3439e125
- (void)releaseByTransitioner:(id)transitioner;	// 0x3439df9d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3439e181
- (void)setAttributes:(id)attributes;	// 0x3439e0c5
@end
