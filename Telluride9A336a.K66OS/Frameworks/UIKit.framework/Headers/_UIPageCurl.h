/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class _UIPageCurlState, UIView, NSMutableArray, NSNumber;

@interface _UIPageCurl : NSObject {
	int _spineLocation;	// 4 = 0x4
	CGRect _contentRect;	// 8 = 0x8
	UIView *_contentView;	// 24 = 0x18
	_UIPageCurlState *_manualPageCurlState;	// 28 = 0x1c
	NSMutableArray *_pendingStateQueue;	// 32 = 0x20
	NSMutableArray *_activeStateQueue;	// 36 = 0x24
	NSMutableArray *_orderedCompletedStates;	// 40 = 0x28
	double _delayBetweenSuccessiveAnimations;	// 44 = 0x2c
	float _pageDiagonalAngle;	// 52 = 0x34
	float _pageDiagonalLength;	// 56 = 0x38
	float _manualPageCurlMaxDAngle;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic, getter=_isManualPageCurlInProgress) BOOL _manualPageCurlInProgress;	// G=0x3543c38d; 
@property(assign, nonatomic, setter=_setManualPageCurlMaxDAngle:) float _manualPageCurlMaxDAngle;	// G=0x3543ff81; S=0x3543ff91; @synthesize
@property(readonly, assign, nonatomic) int _spineLocation;	// G=0x3543ff71; @synthesize
@property(readonly, assign, nonatomic) NSNumber *_wrappedManualPageCurlDirection;	// G=0x3543c3a5; 
- (id)initWithSpineLocation:(int)spineLocation andContentRect:(CGRect)rect inContentView:(id)contentView;	// 0x3543c079
- (id)_animationKeyPaths;	// 0x3543e3ad
- (float)_baseAngleOffsetForState:(id)state;	// 0x3543c81d
- (void)_beginCurlWithState:(id)state;	// 0x3543ee61
- (void)_cancelManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity;	// 0x3543f935
- (void)_cleanupState:(id)state;	// 0x3543edc9
- (void)_completeManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity;	// 0x3543f905
- (float)_distanceToTravelWithCurrentSpineLocation;	// 0x3543d721
- (float)_durationForManualCurlEndAnimationWithSuggestedVelocity:(float)suggestedVelocity shouldComplete:(BOOL)complete;	// 0x3543f481
- (void)_endManualCurlAtLocation:(CGPoint)location withSuggestedVelocity:(float)suggestedVelocity shouldComplete:(BOOL)complete;	// 0x3543f5bd
- (void)_enqueueCurlOfType:(int)type fromLocation:(CGPoint)location inDirection:(int)direction withView:(id)view revealingView:(id)view5 completion:(id)completion;	// 0x3543ea2d
- (void)_ensureCurlFilterOnLayer:(id)layer;	// 0x3543cd91
- (void)_forceCleanupState:(id)state finished:(BOOL)finished completed:(BOOL)completed;	// 0x3543ee11
- (void)_fromValue:(float *)value toValue:(float *)value2 fromState:(id)state forAnimationWithKeyPath:(id)keyPath;	// 0x3543cd81
- (float)_inputTimeForProgress:(float)progress distanceToTravel:(float)travel radius:(float *)radius minRadius:(float)radius4 angle:(float)angle dAngle:(float)angle6 touchLocation:(CGPoint)location state:(id)state;	// 0x3543ce3d
// declared property getter: - (BOOL)_isManualPageCurlInProgress;	// 0x3543c38d
- (BOOL)_isPreviousCurlCompatibleWithCurlOfType:(int)type inDirection:(int)direction;	// 0x3543e999
// declared property getter: - (float)_manualPageCurlMaxDAngle;	// 0x3543ff81
- (id)_newAnimationForState:(id)state withKeyPath:(id)keyPath duration:(float)duration fromValue:(id)value;	// 0x3543c639
- (id)_newCurlFilter;	// 0x3543c4c9
- (void)_pageCurlAnimationDidStop:(id)_pageCurlAnimation withState:(id)state;	// 0x3543f965
- (CGRect)_pageViewFrame:(BOOL)frame;	// 0x3543c409
- (BOOL)_populateFromValue:(float *)value toValue:(float *)value2 fromState:(id)state forAnimationWithKeyPath:(id)keyPath;	// 0x3543c961
- (CGPoint)_referenceLocationForInitialLocation:(CGPoint)initialLocation direction:(int)direction;	// 0x3543e78d
// declared property setter: - (void)_setManualPageCurlMaxDAngle:(float)angle;	// 0x3543ff91
// declared property getter: - (int)_spineLocation;	// 0x3543ff71
- (void)_updateCurlFromState:(id)state withTime:(float)time radius:(float)radius angle:(float)angle addingAnimations:(id)animations;	// 0x3543e3f9
- (void)_updateManualCurlToLocation:(CGPoint)location;	// 0x3543f3e9
- (void)_updatedInputsFromState:(id)state forLocation:(CGPoint)location time:(float *)time radius:(float *)radius angle:(float *)angle;	// 0x3543d821
- (int)_validatedPageCurlTypeForPageCurlType:(int)pageCurlType inDirection:(int)direction;	// 0x3543e951
// declared property getter: - (id)_wrappedManualPageCurlDirection;	// 0x3543c3a5
- (void)dealloc;	// 0x3543c2f1
@end
