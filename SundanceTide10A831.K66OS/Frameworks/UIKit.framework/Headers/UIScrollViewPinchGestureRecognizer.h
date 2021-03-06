/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPinchGestureRecognizer.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {
	UIScrollView *_scrollView;	// 136 = 0x88
	SEL _scrollViewAction;	// 140 = 0x8c
	unsigned _hasParentScrollView : 1;	// 144 = 0x90
}
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x31c8b771; S=0x31c8b6c9; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x31c8b4cd
- (float)_hysteresis;	// 0x31d646c1
- (void)removeTarget:(id)target action:(SEL)action;	// 0x31d657f1
// declared property getter: - (id)scrollView;	// 0x31c8b771
- (void)setDelegate:(id)delegate;	// 0x31c8b6dd
// declared property setter: - (void)setScrollView:(id)view;	// 0x31c8b6c9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31d46c09
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31d62ba5
@end

