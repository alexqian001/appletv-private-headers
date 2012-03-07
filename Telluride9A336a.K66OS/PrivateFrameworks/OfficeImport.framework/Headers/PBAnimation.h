/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PBAnimation : NSObject {
}
+ (id)createChartBuild:(id)build;	// 0x34d9e68d
+ (id)createColorFromBehaviorColor:(PptAnimColorBehavior_Color_Struct *)behaviorColor;	// 0x34d9e941
+ (id)createParaBuild:(id)build;	// 0x34d9e5b5
+ (void)generatePpt10AnimationFromState:(id)state timings:(id)timings;	// 0x34d9d08d
+ (BOOL)hasPpt10Animations:(id)animations;	// 0x34d9cdb1
+ (void)mapAnimationsFromSlide:(id)slide tgtSlide:(id)slide2 state:(id)state;	// 0x34d9cd15
+ (void)parseAnimateBehaviorContainer:(id)container animBehavior:(id)behavior timeNode:(id)node;	// 0x34d9e271
+ (id)parseBehaviorContainer:(id)container timeNode:(id)node state:(id)state;	// 0x34d9d399
+ (void)parseBuildList:(id)list buildMap:(id)map state:(id)state;	// 0x34d9e719
+ (void)parseCmdBehaviorContainer:(id)container cmdBehavior:(id)behavior timeNode:(id)node;	// 0x34d9eb79
+ (void)parseColorBehaviorContainer:(id)container colorBehavior:(id)behavior timeNode:(id)node;	// 0x34d9f415
+ (void)parseEffectBehaviorContainer:(id)container effectBehavior:(id)behavior timeNode:(id)node;	// 0x34d9ea49
+ (id)parseMediaContainer:(id)container timeNode:(id)node state:(id)state;	// 0x34d9f229
+ (void)parseMotionBehaviorContainer:(id)container motionBehavior:(id)behavior timeNode:(id)node;	// 0x34d9eca9
+ (void)parsePpt10Animation:(id)animation timings:(id)timings state:(id)state;	// 0x34d9cded
+ (void)parseRotationBehaviorContainer:(id)container rotationBehavior:(id)behavior timeNode:(id)node;	// 0x34d9e4d1
+ (void)parseTargetContainerHolder:(id)holder setTargetObj:(id)obj state:(id)state;	// 0x34d9ddb5
+ (void)parseTimeConditionsHolder:(id)holder commonData:(id)data;	// 0x34d9e0bd
+ (void)parseTimeNodeContainer:(id)container siblings:(id)siblings state:(id)state;	// 0x34d9da09
+ (void)parseTimeNodeVariants:(id)variants commonData:(id)data;	// 0x34d9f005
@end
