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
@property(retain, nonatomic) UIView *fromView;	// G=0x341647bd; S=0x341647cd; @synthesize=_fromView
@property(assign, nonatomic) CGRect toFrame;	// G=0x341647dd; S=0x34164801; @synthesize=_toFrame
@property(assign, nonatomic) float topMargin;	// G=0x3416481d; S=0x3416482d; @synthesize=_topMargin
- (id)init;	// 0x34164295
- (id)_subtypeForTransitionType:(unsigned)transitionType;	// 0x34164795
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x34164749
- (void)dealloc;	// 0x341642f5
// declared property getter: - (id)fromView;	// 0x341647bd
- (void)performTransition:(unsigned)transition;	// 0x34164339
// declared property setter: - (void)setFromView:(id)view;	// 0x341647cd
// declared property setter: - (void)setToFrame:(CGRect)frame;	// 0x34164801
// declared property setter: - (void)setTopMargin:(float)margin;	// 0x3416482d
// declared property getter: - (CGRect)toFrame;	// 0x341647dd
// declared property getter: - (float)topMargin;	// 0x3416481d
@end
