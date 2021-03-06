/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransitionController.h"

@class UIView;

@interface MPFlipTransitionController : MPTransitionController {
	UIView *_fromView;	// 52 = 0x34
	CGRect _toFrame;	// 56 = 0x38
	float _topMargin;	// 72 = 0x48
}
@property(retain, nonatomic) UIView *fromView;	// G=0x2e272569; S=0x2e272579; @synthesize=_fromView
@property(assign, nonatomic) CGRect toFrame;	// G=0x2e2725a1; S=0x2e2725b9; @synthesize=_toFrame
@property(assign, nonatomic) float topMargin;	// G=0x2e2725dd; S=0x2e2725ed; @synthesize=_topMargin
- (id)init;	// 0x2e271ef9
- (void).cxx_destruct;	// 0x2e2725fd
- (id)_subtypeForTransitionType:(unsigned)transitionType;	// 0x2e272535
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2e2724d9
// declared property getter: - (id)fromView;	// 0x2e272569
- (void)performTransition:(unsigned)transition;	// 0x2e271f59
// declared property setter: - (void)setFromView:(id)view;	// 0x2e272579
// declared property setter: - (void)setToFrame:(CGRect)frame;	// 0x2e2725b9
// declared property setter: - (void)setTopMargin:(float)margin;	// 0x2e2725ed
// declared property getter: - (CGRect)toFrame;	// 0x2e2725a1
// declared property getter: - (float)topMargin;	// 0x2e2725dd
@end

