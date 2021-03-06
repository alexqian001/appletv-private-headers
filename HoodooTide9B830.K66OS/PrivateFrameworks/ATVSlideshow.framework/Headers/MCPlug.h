/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"
#import "MCAnimationPathSupport.h"
#import "MCActionSupport.h"

@class NSMutableSet, NSSet, NSMutableDictionary, NSDictionary, MCContainer;

@interface MCPlug : MCObject <MCActionSupport, MCAnimationPathSupport> {
	MCContainer *mContainer;	// 12 = 0xc
	NSMutableSet *mAnimationPaths;	// 16 = 0x10
	NSMutableDictionary *mActions;	// 20 = 0x14
	double mPhaseInDuration;	// 24 = 0x18
	double mLoopDuration;	// 32 = 0x20
	double mPhaseOutDuration;	// 40 = 0x28
	double mNumberOfLoops;	// 48 = 0x30
	unsigned char mFlags;	// 56 = 0x38
}
@property(readonly, assign) NSDictionary *actions;	// G=0x3218fded; 
@property(readonly, assign) NSSet *animationPaths;	// G=0x3218ec1d; 
@property(retain) MCContainer *container;	// G=0x3218de19; S=0x3218df0d; 
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x3218ff3d; 
@property(readonly, assign) unsigned countOfAnimationPaths;	// G=0x3218ed6d; 
@property(readonly, assign, nonatomic) double fullDuration;	// G=0x3218e0d9; 
@property(assign, nonatomic) double loopDuration;	// G=0x3218e655; S=0x3218e071; @synthesize=mLoopDuration
@property(assign, nonatomic) double numberOfLoops;	// G=0x3218e685; S=0x3218e135; @synthesize=mNumberOfLoops
@property(assign, nonatomic) double phaseInDuration;	// G=0x3218e63d; S=0x3218e03d; @synthesize=mPhaseInDuration
@property(assign, nonatomic) double phaseOutDuration;	// G=0x3218e66d; S=0x3218e0a5; @synthesize=mPhaseOutDuration
@property(assign, nonatomic) BOOL startsPaused;	// G=0x3218e161; S=0x3218e175; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3218d6fd
- (id)init;	// 0x3218d7d5
- (void)initActionsWithImprints:(id)imprints;	// 0x3218f9f5
- (void)initAnimationPathsWithImprints:(id)imprints;	// 0x3218e69d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3218d81d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3218e199
- (id)actionForKey:(id)key;	// 0x32190041
// declared property getter: - (id)actions;	// 0x3218fded
- (void)addAnimationPath:(id)path;	// 0x3218f0f9
- (id)animationPathForKey:(id)key;	// 0x3218ee71
// declared property getter: - (id)animationPaths;	// 0x3218ec1d
// declared property getter: - (id)container;	// 0x3218de19
// declared property getter: - (unsigned)countOfActions;	// 0x3218ff3d
// declared property getter: - (unsigned)countOfAnimationPaths;	// 0x3218ed6d
- (void)demolish;	// 0x3218da79
- (void)demolishActions;	// 0x3218fb31
- (void)demolishAnimationPaths;	// 0x3218e8a9
// declared property getter: - (double)fullDuration;	// 0x3218e0d9
- (id)imprint;	// 0x3218dae1
- (id)imprintsForActions;	// 0x3218fcf9
- (id)imprintsForAnimationPaths;	// 0x3218eb3d
// declared property getter: - (double)loopDuration;	// 0x3218e655
// declared property getter: - (double)numberOfLoops;	// 0x3218e685
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3218dd9d
// declared property getter: - (double)phaseInDuration;	// 0x3218e63d
// declared property getter: - (double)phaseOutDuration;	// 0x3218e66d
- (void)removeActionForKey:(id)key;	// 0x321902d9
- (void)removeAllActions;	// 0x321903e9
- (void)removeAllAnimationPaths;	// 0x3218f6e5
- (void)removeAnimationPathForKey:(id)key;	// 0x3218f3c1
- (void)setAction:(id)action forKey:(id)key;	// 0x32190175
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x3218e489
// declared property setter: - (void)setContainer:(id)container;	// 0x3218df0d
// declared property setter: - (void)setLoopDuration:(double)duration;	// 0x3218e071
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x3218e135
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x3218e03d
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x3218e0a5
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x3218e175
// declared property getter: - (BOOL)startsPaused;	// 0x3218e161
@end

