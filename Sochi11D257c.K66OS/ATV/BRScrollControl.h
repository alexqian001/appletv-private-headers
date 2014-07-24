/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ScrollAnimationDelegate, BRFadeMaskLayer;

__attribute__((visibility("hidden")))
@interface BRScrollControl : BRControl {
	BRControl *_content;	// 84 = 0x54
	BRControl *_topFade;	// 88 = 0x58
	BRControl *_bottomFade;	// 92 = 0x5c
	BRControl *_leftFade;	// 96 = 0x60
	BRControl *_rightFade;	// 100 = 0x64
	BRFadeMaskLayer *_mask;	// 104 = 0x68
	ScrollAnimationDelegate *_animationDelegate;	// 108 = 0x6c
	int _scrollDirection;	// 112 = 0x70
	int _mode;	// 116 = 0x74
	float _edgeFadePercent;	// 120 = 0x78
	float _extraBottomSpace;	// 124 = 0x7c
	float _extraTopSpace;	// 128 = 0x80
	float _extraLeftSpace;	// 132 = 0x84
	float _extraRightSpace;	// 136 = 0x88
	BOOL _scrollPointSet;	// 140 = 0x8c
	BOOL _constrainAllContentToEdges;	// 141 = 0x8d
	BOOL _useRealMasks;	// 142 = 0x8e
	BOOL _followsFocus;	// 143 = 0x8f
	BOOL _contentLayoutDone;	// 144 = 0x90
	BOOL _repeatActive;	// 145 = 0x91
	BOOL _autoChangeAnimationModes;	// 146 = 0x92
	id _scrollPointAdjuster;	// 148 = 0x94
}
@property(assign) int animationMode;	// G=0x3a71e1; S=0x3a6ff9; converted property
@property(assign, nonatomic) BOOL autoChangeAnimationModes;	// G=0x3a764d; S=0x3a765d; @synthesize=_autoChangeAnimationModes
@property(assign) BOOL constrainAllContentToEdges;	// G=0x3a6fe5; S=0x3a6fc9; converted property
@property(retain) BRControl *content;	// G=0x3a6b79; S=0x3a6a55; converted property
@property(assign) float edgeFadePercentage;	// G=0x3a6fb9; S=0x3a6f61; converted property
@property(assign) BOOL followsFocus;	// G=0x3a6dc1; S=0x3a6d85; converted property
@property(assign) int scrollDirection;	// G=0x3a720d; S=0x3a71f1; converted property
@property(copy, nonatomic) id scrollPointAdjuster;	// G=0x3a766d; S=0x3a7681; @synthesize=_scrollPointAdjuster
@property(assign) BOOL useRealMasks;	// G=0x3a6f51; S=0x3a6f25; converted property
- (id)init;	// 0x3a6821
- (BOOL)_animatingPositionChange;	// 0x3a78e1
- (void)_attemptToRemoveFadeMask;	// 0x3a9339
- (float)_calculateXPositionForPlane:(CGPoint)plane halfScrollerWidth:(float)width halfPlaneWidth:(float)width3;	// 0x3a7d21
- (float)_calculateYPositionForPlane:(CGPoint)plane halfScrollerHeight:(float)height halfPlaneHeight:(float)height3;	// 0x3a7dc1
- (void)_enlargeScrollPlaneHeight:(CGPoint)height oldPosition:(CGPoint)position;	// 0x3a7e61
- (void)_enlargeScrollPlaneWidth:(CGPoint)width oldPosition:(CGPoint)position;	// 0x3a7f19
- (id)_fadeMaskForBounds:(CGSize)bounds;	// 0x3a9281
- (void)_focusChanged:(id)changed;	// 0x3a8631
- (void)_minimizeVisiblePlaneArea;	// 0x3a7fd1
- (id)_parentScrollControl;	// 0x3a8071
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x3a82dd
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x3a8335
- (BOOL)_setPlanePosition:(CGPoint)position;	// 0x3a7941
- (void)_transitionFade:(id)fade toPresent:(BOOL)present;	// 0x3a8f61
- (void)_updateEdgeFading;	// 0x3a8709
- (void)_updateFocusNotifications;	// 0x3a8589
- (void)_updateHorizontalEdgeFading;	// 0x3a8b75
- (BOOL)_updateScrollPositionForFocus;	// 0x3a83b9
- (void)_updateVerticalEdgeFading;	// 0x3a8759
- (CGRect)_visibleRectOfControl:(id)control;	// 0x3a8075
// converted property getter: - (int)animationMode;	// 0x3a71e1
// declared property getter: - (BOOL)autoChangeAnimationModes;	// 0x3a764d
- (BOOL)autoScrolling;	// 0x3a6d31
- (BOOL)brEventAction:(id)action;	// 0x3a6b89
// converted property getter: - (BOOL)constrainAllContentToEdges;	// 0x3a6fe5
// converted property getter: - (id)content;	// 0x3a6b79
- (void)controlWasActivated;	// 0x3a721d
- (void)controlWasDeactivated;	// 0x3a725d
- (void)dealloc;	// 0x3a6909
// converted property getter: - (float)edgeFadePercentage;	// 0x3a6fb9
// converted property getter: - (BOOL)followsFocus;	// 0x3a6dc1
- (void)layoutSubcontrols;	// 0x3a729d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3a75cd
// converted property getter: - (int)scrollDirection;	// 0x3a720d
// declared property getter: - (id)scrollPointAdjuster;	// 0x3a766d
- (void)scrollToControl:(id)control;	// 0x3a6e41
- (void)scrollToPoint:(CGPoint)point;	// 0x3a6dd1
- (void)scrollToRect:(CGRect)rect;	// 0x3a6e05
- (BOOL)scrolling;	// 0x3a6d0d
- (void)scrollingCompleted;	// 0x3a7611
// converted property setter: - (void)setAnimationMode:(int)mode;	// 0x3a6ff9
// declared property setter: - (void)setAutoChangeAnimationModes:(BOOL)modes;	// 0x3a765d
// converted property setter: - (void)setConstrainAllContentToEdges:(BOOL)edges;	// 0x3a6fc9
// converted property setter: - (void)setContent:(id)content;	// 0x3a6a55
// converted property setter: - (void)setEdgeFadePercentage:(float)percentage;	// 0x3a6f61
// converted property setter: - (void)setFollowsFocus:(BOOL)focus;	// 0x3a6d85
// converted property setter: - (void)setScrollDirection:(int)direction;	// 0x3a71f1
// declared property setter: - (void)setScrollPointAdjuster:(id)adjuster;	// 0x3a7681
// converted property setter: - (void)setUseRealMasks:(BOOL)masks;	// 0x3a6f25
// converted property getter: - (BOOL)useRealMasks;	// 0x3a6f51
@end
