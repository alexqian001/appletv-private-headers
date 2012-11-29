/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIStatusBarTinting.h"

@class UIImageView, UIColor, NSMutableArray;

@interface UISnapshotView : UIView <UIStatusBarTinting> {
	CGSize _contentSize;	// 84 = 0x54
	UIEdgeInsets _contentBeyondBounds;	// 92 = 0x5c
	UIEdgeInsets _edgePadding;	// 108 = 0x6c
	UIEdgeInsets _edgeInsets;	// 124 = 0x7c
	CGPoint _contentOffset;	// 140 = 0x8c
	UIColor *_edgePaddingColor;	// 148 = 0x94
	UIView *_imageView;	// 152 = 0x98
	NSMutableArray *_edgePaddingViews;	// 156 = 0x9c
	CGRect _snapshotRect;	// 160 = 0xa0
	UIImageView *_shadowView;	// 176 = 0xb0
	unsigned _disableEdgeAntialiasing : 1;	// 180 = 0xb4
	unsigned _disableVerticalStretch : 1;	// 180 = 0xb4
	UIColor *_statusBarTintColor;	// 184 = 0xb8
}
@property(retain, nonatomic, setter=_setStatusBarTintColor:) UIColor *_statusBarTintColor;	// G=0x31f1acf1; S=0x31d5ce59; @synthesize
@property(assign, nonatomic, getter=_contentOffset, setter=_setContentOffset:) CGPoint contentOffset;	// G=0x31f1acb9; S=0x31d5e9ad; @synthesize=_contentOffset
@property(readonly, assign, nonatomic, getter=_contentSize) CGSize contentSize;	// G=0x31f1aca1; @synthesize=_contentSize
@property(assign, nonatomic, getter=isEdgeAntialiasingEnabled) BOOL edgeAntialiasingEnabled;	// G=0x31f1a9b5; S=0x31d5baa5; 
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x31f1ac7d; S=0x31d5bae5; @synthesize=_edgeInsets
@property(assign, nonatomic) UIEdgeInsets edgePadding;	// G=0x31f1ac59; S=0x31f1a925; @synthesize=_edgePadding
@property(retain, nonatomic) UIColor *edgePaddingColor;	// G=0x31f1acd1; S=0x31f1ace1; @synthesize=_edgePaddingColor
@property(retain, nonatomic) UIImageView *shadowView;	// G=0x31d5e96d; S=0x31d5cf85; @synthesize=_shadowView
@property(assign, nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) CGRect snapshotRect;	// G=0x31f1a9e5; S=0x31f1aa09; 
@property(readonly, assign, nonatomic, getter=_snapshotView) UIView *snapshotView;	// G=0x31d5d3bd; @synthesize=_imageView
@property(assign, nonatomic, getter=isVerticalStretchEnabled) BOOL verticalStretchEnabled;	// G=0x31f1a9cd; S=0x31d5d369; 
- (id)initWithFrame:(CGRect)frame;	// 0x31d5b911
- (void)_addEdgePaddingViewInRect:(CGRect)rect;	// 0x31f1ab99
// declared property getter: - (CGPoint)_contentOffset;	// 0x31f1acb9
// declared property getter: - (CGSize)_contentSize;	// 0x31f1aca1
- (CGRect)_contentsCenterForEdgePadding:(UIEdgeInsets)edgePadding withContentSize:(CGSize)contentSize;	// 0x31d5c8c9
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x31d5cf19
- (void)_drawEdges:(UIEdgeInsets)edges withContentSize:(CGSize)contentSize;	// 0x31d5d131
- (UIEdgeInsets)_edgePadding;	// 0x31d5c53d
- (void)_positionImageView;	// 0x31d5e97d
// declared property setter: - (void)_setContentOffset:(CGPoint)offset;	// 0x31d5e9ad
// declared property setter: - (void)_setSnapshotRect:(CGRect)rect;	// 0x31f1aa09
// declared property setter: - (void)_setStatusBarTintColor:(id)color;	// 0x31d5ce59
// declared property getter: - (CGRect)_snapshotRect;	// 0x31f1a9e5
// declared property getter: - (id)_snapshotView;	// 0x31d5d3bd
// declared property getter: - (id)_statusBarTintColor;	// 0x31f1acf1
- (void)_updateContentsRect;	// 0x31d5cb5d
- (void)captureSnapshotOfView:(id)view withSnapshotType:(int)snapshotType;	// 0x31d5bb75
- (void)captureSnapshotRect:(CGRect)rect fromView:(id)view withSnapshotType:(int)snapshotType;	// 0x31d5bbd1
- (void)dealloc;	// 0x31d5ead5
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x31f1ac7d
// declared property getter: - (UIEdgeInsets)edgePadding;	// 0x31f1ac59
// declared property getter: - (id)edgePaddingColor;	// 0x31f1acd1
// declared property getter: - (BOOL)isEdgeAntialiasingEnabled;	// 0x31f1a9b5
// declared property getter: - (BOOL)isVerticalStretchEnabled;	// 0x31f1a9cd
- (void)layoutSubviews;	// 0x31d5c919
- (void)setBounds:(CGRect)bounds;	// 0x31f1aa41
- (void)setContentStretch:(CGRect)stretch;	// 0x31f1ab1d
// declared property setter: - (void)setEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x31d5baa5
// declared property setter: - (void)setEdgeInsets:(UIEdgeInsets)insets;	// 0x31d5bae5
// declared property setter: - (void)setEdgePadding:(UIEdgeInsets)padding;	// 0x31f1a925
// declared property setter: - (void)setEdgePaddingColor:(id)color;	// 0x31f1ace1
- (void)setFrame:(CGRect)frame;	// 0x31d5b9c9
// declared property setter: - (void)setShadowView:(id)view;	// 0x31d5cf85
// declared property setter: - (void)setVerticalStretchEnabled:(BOOL)enabled;	// 0x31d5d369
// declared property getter: - (id)shadowView;	// 0x31d5e96d
@end
