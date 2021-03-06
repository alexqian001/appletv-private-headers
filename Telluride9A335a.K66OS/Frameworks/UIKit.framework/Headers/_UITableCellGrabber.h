/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableCell;

__attribute__((visibility("hidden")))
@interface _UITableCellGrabber : UIControl {
@private
	UITableCell *_cell;	// 72 = 0x48
	CGPoint _downPoint;	// 76 = 0x4c
}
- (id)initWithCell:(id)cell;	// 0x33b52f29
- (void)_controlMouseDown:(GSEventRef)down;	// 0x33b532ed
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x33b532f5
- (void)_controlMouseUp:(GSEventRef)up;	// 0x33b532f1
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x33b530b9
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33b531a1
- (BOOL)cancelMouseTracking;	// 0x33b532f9
- (BOOL)cancelTouchTracking;	// 0x33b53349
- (void)cancelTrackingWithEvent:(id)event;	// 0x33b532d9
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x33b53115
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33b53211
- (void)drawRect:(CGRect)rect;	// 0x33b53021
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x33b53165
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33b5329d
- (BOOL)shouldTrack;	// 0x33b530b5
@end

