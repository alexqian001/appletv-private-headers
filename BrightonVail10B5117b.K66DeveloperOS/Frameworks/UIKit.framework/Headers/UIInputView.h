/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class _UIInputViewContent;

@interface UIInputView : UIView {
	_UIInputViewContent *_leftContentView;	// 84 = 0x54
	_UIInputViewContent *_rightContentView;	// 88 = 0x58
	float _contentRatio;	// 92 = 0x5c
	CGSize _leftContentSize;	// 96 = 0x60
	CGSize _rightContentSize;	// 104 = 0x68
	CGSize _defaultSize;	// 112 = 0x70
	float _gapWidth;	// 120 = 0x78
	float _leftOffset;	// 124 = 0x7c
	BOOL _isTransitioning;	// 128 = 0x80
	float _transitionGap;	// 132 = 0x84
	float _transitionLeftOffset;	// 136 = 0x88
	float _transitionRatio;	// 140 = 0x8c
}
@property(assign, nonatomic) float contentRatio;	// G=0x330d6ca9; S=0x330d6cb9; @synthesize=_contentRatio
@property(readonly, assign, nonatomic) UIView *leftContentView;	// G=0x330d6c89; @synthesize=_leftContentView
@property(assign, nonatomic) CGSize leftContentViewSize;	// G=0x330d6b69; S=0x330d6cc9; @synthesize=_leftContentSize
@property(readonly, assign, nonatomic) UIView *rightContentView;	// G=0x330d6c99; @synthesize=_rightContentView
@property(assign, nonatomic) CGSize rightContentViewSize;	// G=0x330d6bf5; S=0x330d6cdd; @synthesize=_rightContentSize
- (id)initWithFrame:(CGRect)frame;	// 0x330d5ffd
- (float)_additionalClipHeight;	// 0x330d6b4d
- (void)_beginSplitTransitionIfNeeded:(float)needed gapWidth:(float)width;	// 0x330d67f1
- (int)_clipCornersOfView:(id)view;	// 0x330d6b01
- (CGSize)_defaultSize;	// 0x330d6b51
- (void)_endSplitTransitionIfNeeded:(BOOL)needed;	// 0x330d6869
- (BOOL)_isToolbars;	// 0x330d6171
- (BOOL)_isTransitioning;	// 0x330d67e1
- (void)_setLeftOffset:(float)offset gapWidth:(float)width;	// 0x330d6375
- (void)_setNeedsContentSizeUpdate;	// 0x330d6229
- (void)_setProgress:(float)progress boundedBy:(float)by;	// 0x330d664d
- (BOOL)_supportsSplit;	// 0x330d630d
- (void)_updateClipCorners;	// 0x330d69f5
// declared property getter: - (float)contentRatio;	// 0x330d6ca9
- (void)dealloc;	// 0x330d5f99
- (void)didEndSplitTransition;	// 0x330d6c85
// declared property getter: - (id)leftContentView;	// 0x330d6c89
// declared property getter: - (CGSize)leftContentViewSize;	// 0x330d6b69
// declared property getter: - (id)rightContentView;	// 0x330d6c99
// declared property getter: - (CGSize)rightContentViewSize;	// 0x330d6bf5
// declared property setter: - (void)setContentRatio:(float)ratio;	// 0x330d6cb9
- (void)setFrame:(CGRect)frame;	// 0x330d6935
// declared property setter: - (void)setLeftContentViewSize:(CGSize)size;	// 0x330d6cc9
// declared property setter: - (void)setRightContentViewSize:(CGSize)size;	// 0x330d6cdd
- (void)willBeginSplitTransition;	// 0x330d6c81
@end
