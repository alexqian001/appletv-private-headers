/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIWebDragDotView, NSMutableArray, NSArray;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UIWebTextRangeView : UIView {
@private
	UIView<UITextSelectingContainer> *m_container;	// 48 = 0x30
	NSArray *_rects;	// 52 = 0x34
	NSMutableArray *_rectViews;	// 56 = 0x38
	UIWebDragDotView *_topDot;	// 60 = 0x3c
	UIWebDragDotView *_bottomDot;	// 64 = 0x40
	BOOL _magnifying;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *container;	// G=0x33c57f6d; 
@property(copy, nonatomic) NSArray *rects;	// G=0x33c58c5d; S=0x33c58825; @synthesize=_rects
- (id)initWithFrame:(CGRect)frame textContainer:(id)container;	// 0x33c57e21
- (CGRect)boundingRect;	// 0x33c58131
// declared property getter: - (id)container;	// 0x33c57f6d
- (void)dealloc;	// 0x33c57ee5
- (void)doneMagnifying;	// 0x33c58bcd
- (CGPoint)endCorner;	// 0x33c58a89
- (CGRect)endEdge;	// 0x33c58945
- (void)geometryChanged;	// 0x33c58c59
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33c58b3d
- (void)prepareForMagnification;	// 0x33c58b41
- (CGRect)rectAtIndex:(int)index;	// 0x33c57fe9
- (id)rectViewAtIndex:(int)index;	// 0x33c580e1
// declared property getter: - (id)rects;	// 0x33c58c5d
- (void)removeFromSuperview;	// 0x33c57f7d
// declared property setter: - (void)setRects:(id)rects;	// 0x33c58825
- (CGPoint)startCorner;	// 0x33c589e1
- (CGRect)startEdge;	// 0x33c588a9
- (void)updateDragDots;	// 0x33c582d9
- (void)updateRectViews;	// 0x33c584d5
@end
