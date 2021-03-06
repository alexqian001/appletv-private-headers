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
@property(assign, nonatomic) float contentRatio;	// G=0x3201fea9; S=0x3201feb9; @synthesize=_contentRatio
@property(readonly, assign, nonatomic) UIView *leftContentView;	// G=0x3201fe89; @synthesize=_leftContentView
@property(assign, nonatomic) CGSize leftContentViewSize;	// G=0x3201fd69; S=0x3201fec9; @synthesize=_leftContentSize
@property(readonly, assign, nonatomic) UIView *rightContentView;	// G=0x3201fe99; @synthesize=_rightContentView
@property(assign, nonatomic) CGSize rightContentViewSize;	// G=0x3201fdf5; S=0x3201fedd; @synthesize=_rightContentSize
- (id)initWithFrame:(CGRect)frame;	// 0x3201f1fd
- (float)_additionalClipHeight;	// 0x3201fd4d
- (void)_beginSplitTransitionIfNeeded:(float)needed gapWidth:(float)width;	// 0x3201f9f1
- (int)_clipCornersOfView:(id)view;	// 0x3201fd01
- (CGSize)_defaultSize;	// 0x3201fd51
- (void)_endSplitTransitionIfNeeded:(BOOL)needed;	// 0x3201fa69
- (BOOL)_isToolbars;	// 0x3201f371
- (BOOL)_isTransitioning;	// 0x3201f9e1
- (void)_setLeftOffset:(float)offset gapWidth:(float)width;	// 0x3201f575
- (void)_setNeedsContentSizeUpdate;	// 0x3201f429
- (void)_setProgress:(float)progress boundedBy:(float)by;	// 0x3201f84d
- (BOOL)_supportsSplit;	// 0x3201f50d
- (void)_updateClipCorners;	// 0x3201fbf5
// declared property getter: - (float)contentRatio;	// 0x3201fea9
- (void)dealloc;	// 0x3201f199
- (void)didEndSplitTransition;	// 0x3201fe85
// declared property getter: - (id)leftContentView;	// 0x3201fe89
// declared property getter: - (CGSize)leftContentViewSize;	// 0x3201fd69
// declared property getter: - (id)rightContentView;	// 0x3201fe99
// declared property getter: - (CGSize)rightContentViewSize;	// 0x3201fdf5
// declared property setter: - (void)setContentRatio:(float)ratio;	// 0x3201feb9
- (void)setFrame:(CGRect)frame;	// 0x3201fb35
// declared property setter: - (void)setLeftContentViewSize:(CGSize)size;	// 0x3201fec9
// declared property setter: - (void)setRightContentViewSize:(CGSize)size;	// 0x3201fedd
- (void)willBeginSplitTransition;	// 0x3201fe81
@end

