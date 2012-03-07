/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UIColor;

@interface UISnapshotView : UIView {
@private
	CGSize _contentSize;	// 48 = 0x30
	UIEdgeInsets _contentBeyondBounds;	// 56 = 0x38
	UIEdgeInsets _edgePadding;	// 72 = 0x48
	UIEdgeInsets _edgeInsets;	// 88 = 0x58
	CGPoint _contentOffset;	// 104 = 0x68
	UIColor *_edgePaddingColor;	// 112 = 0x70
	UIView *_imageView;	// 116 = 0x74
	NSMutableArray *_edgePaddingViews;	// 120 = 0x78
	CGRect _snapshotRect;	// 124 = 0x7c
	unsigned _disableEdgeAntialiasing : 1;	// 140 = 0x8c
	unsigned _disableVerticalStretch : 1;	// 140 = 0x8c
}
@property(assign, nonatomic, getter=_contentOffset, setter=_setContentOffset:) CGPoint contentOffset;	// G=0x353e2e55; S=0x353e2a9d; @synthesize=_contentOffset
@property(readonly, assign, nonatomic, getter=_contentSize) CGSize contentSize;	// G=0x353e2e39; @synthesize=_contentSize
@property(assign, nonatomic, getter=isEdgeAntialiasingEnabled) BOOL edgeAntialiasingEnabled;	// G=0x353e2a85; S=0x35235859; 
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x353e2e05; S=0x352358a5; @synthesize=_edgeInsets
@property(assign, nonatomic) UIEdgeInsets edgePadding;	// G=0x353e2de1; S=0x353e29f9; @synthesize=_edgePadding
@property(retain, nonatomic) UIColor *edgePaddingColor;	// G=0x353e2e71; S=0x353e2e81; @synthesize=_edgePaddingColor
@property(assign, nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) CGRect snapshotRect;	// G=0x353e2b5d; S=0x353e2b81; 
@property(readonly, assign, nonatomic, getter=_snapshotView) UIView *snapshotView;	// G=0x353e2e29; @synthesize=_imageView
@property(assign, nonatomic, getter=isVerticalStretchEnabled) BOOL verticalStretchEnabled;	// G=0x353e2af1; S=0x353e2b09; 
- (id)initWithFrame:(CGRect)frame;	// 0x352356d5
- (void)_addEdgePaddingViewInRect:(CGRect)rect;	// 0x353e2d21
// declared property getter: - (CGPoint)_contentOffset;	// 0x353e2e55
// declared property getter: - (CGSize)_contentSize;	// 0x353e2e39
- (CGRect)_contentsCenterForEdgePadding:(UIEdgeInsets)edgePadding withContentSize:(CGSize)contentSize;	// 0x35236655
- (void)_drawEdges:(UIEdgeInsets)edges withContentSize:(CGSize)contentSize;	// 0x35237bdd
- (UIEdgeInsets)_edgePadding;	// 0x352362bd
- (void)_positionImageView;	// 0x353e2cf1
// declared property setter: - (void)_setContentOffset:(CGPoint)offset;	// 0x353e2a9d
// declared property setter: - (void)_setSnapshotRect:(CGRect)rect;	// 0x353e2b81
// declared property getter: - (CGRect)_snapshotRect;	// 0x353e2b5d
// declared property getter: - (id)_snapshotView;	// 0x353e2e29
- (void)_updateContentsRect;	// 0x352368cd
- (void)captureSnapshotOfView:(id)view withSnapshotType:(int)snapshotType;	// 0x35235931
- (void)captureSnapshotRect:(CGRect)rect fromView:(id)view withSnapshotType:(int)snapshotType;	// 0x3523598d
- (void)dealloc;	// 0x35238459
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x353e2e05
// declared property getter: - (UIEdgeInsets)edgePadding;	// 0x353e2de1
// declared property getter: - (id)edgePaddingColor;	// 0x353e2e71
// declared property getter: - (BOOL)isEdgeAntialiasingEnabled;	// 0x353e2a85
// declared property getter: - (BOOL)isVerticalStretchEnabled;	// 0x353e2af1
- (void)layoutSubviews;	// 0x352366a5
- (void)setBounds:(CGRect)bounds;	// 0x353e2bbd
- (void)setContentStretch:(CGRect)stretch;	// 0x353e2c85
// declared property setter: - (void)setEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x35235859
// declared property setter: - (void)setEdgeInsets:(UIEdgeInsets)insets;	// 0x352358a5
// declared property setter: - (void)setEdgePadding:(UIEdgeInsets)padding;	// 0x353e29f9
// declared property setter: - (void)setEdgePaddingColor:(id)color;	// 0x353e2e81
- (void)setFrame:(CGRect)frame;	// 0x35235791
// declared property setter: - (void)setVerticalStretchEnabled:(BOOL)enabled;	// 0x353e2b09
@end
