/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"


__attribute__((visibility("hidden")))
@interface UITableViewCellDeleteConfirmationControl : UIControl {
@private
	BOOL _visible;	// 70 = 0x46
}
@property(assign, nonatomic, getter=isVisible) BOOL visible;	// G=0x355b7009; S=0x355b6ff5; 
+ (CGSize)defaultSizeForTitle:(id)title;	// 0x3544d05d
- (id)initWithTitle:(id)title;	// 0x3544ced5
- (void)_confirmationAnimationDidEnd;	// 0x3544ddcd
- (id)_interceptEvent:(id)event;	// 0x3544de65
- (id)_interceptMouseEvent:(GSEventRef)event;	// 0x355b6e89
- (void)_setInterceptMouseEvent:(BOOL)event;	// 0x3544d971
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3544df59
- (void)cancelTrackingWithEvent:(id)event;	// 0x355b6fc5
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x355b6f95
- (CGSize)defaultSize;	// 0x3544d56d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3544dfd5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x355b6f55
// declared property getter: - (BOOL)isVisible;	// 0x355b7009
- (void)layoutSubviews;	// 0x3544d801
- (void)removeFromSuperview;	// 0x3544e14d
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x355b6ff5
- (void)setVisible:(BOOL)visible animated:(BOOL)animated;	// 0x3544d65d
@end

