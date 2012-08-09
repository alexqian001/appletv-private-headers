/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRemoveControlTextButton : UIControl {
	NSString *_label;	// 108 = 0x6c
}
- (id)initWithRemoveControl:(id)removeControl withTarget:(id)target withLabel:(id)label;	// 0x3042fa41
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x3042fd31
- (void)_controlMouseDown:(GSEventRef)down;	// 0x3042fc05
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x3042fbb5
- (void)_controlMouseUp:(GSEventRef)up;	// 0x3042fc09
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x3042fc0d
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x3042fc15
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x3042fc11
- (id)_scriptingInfo;	// 0x30430035
- (float)buttonWidth;	// 0x3042fc85
- (void)dealloc;	// 0x3042fbb9
- (void)drawRect:(CGRect)rect;	// 0x3042fd49
- (void)sizeToFit;	// 0x3042fc19
@end
