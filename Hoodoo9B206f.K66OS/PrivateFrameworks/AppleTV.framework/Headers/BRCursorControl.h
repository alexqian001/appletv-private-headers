/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRHorizontalSegmentedWidget, NSTimer, BRCursorLayer;

@interface BRCursorControl : BRControl {
@private
	BRControl *_trackedControl;	// 48 = 0x30
	BRControl *_previousTrackedControl;	// 52 = 0x34
	BRCursorLayer *_cursorLayer;	// 56 = 0x38
	int _style;	// 60 = 0x3c
	BOOL _cursorInactive;	// 64 = 0x40
	BRHorizontalSegmentedWidget *_previousBadge;	// 68 = 0x44
	BRHorizontalSegmentedWidget *_badge;	// 72 = 0x48
	NSTimer *_removePreviousBadgeTimer;	// 76 = 0x4c
	BOOL _cursorTrackingDisabledWhenAvoidsCursor;	// 80 = 0x50
}
@property(assign) BOOL cursorInactive;	// G=0x36684b45; S=0x36684a89; converted property
@property(readonly, retain) BRCursorLayer *cursorLayer;	// G=0x36684b55; converted property
@property(assign) int cursorStyle;	// G=0x36684a79; S=0x366849b5; converted property
@property(assign, nonatomic) BOOL cursorTrackingDisabledWhenAvoidsCursor;	// G=0x36684d35; S=0x36684d45; @synthesize=_cursorTrackingDisabledWhenAvoidsCursor
- (id)init;	// 0x36684729
- (void)_addCursor;	// 0x36684d55
- (void)_cursorFrameChanged:(id)changed;	// 0x3668572d
- (void)_focusChanged:(id)changed;	// 0x3668579d
- (void)_removeCursor;	// 0x36684e5d
- (void)_removePreviousBadgeTimerFired:(id)fired;	// 0x36685c1d
- (void)_removePreviousTrackedControl;	// 0x36685c7d
- (void)_trackFocusedControl:(id)control;	// 0x366854e5
- (void)_trackedBadgeUpdated:(id)updated;	// 0x3668573d
- (void)_updateBadgeForTrackedControl;	// 0x36685bed
- (void)_updateCursorPositioning;	// 0x36684ed1
- (void)_updateMyBadge:(id *)badge withTrackedControl:(id)trackedControl;	// 0x36685821
- (void)_updatePreviousBadge;	// 0x36685bbd
- (void)controlWasActivated;	// 0x36684b65
// converted property getter: - (BOOL)cursorInactive;	// 0x36684b45
// converted property getter: - (id)cursorLayer;	// 0x36684b55
// converted property getter: - (int)cursorStyle;	// 0x36684a79
// declared property getter: - (BOOL)cursorTrackingDisabledWhenAvoidsCursor;	// 0x36684d35
- (void)dealloc;	// 0x36684835
- (void)layoutSubcontrols;	// 0x36684ba9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x36684bb9
- (id)preferredActionForKey:(id)key;	// 0x36684c5d
// converted property setter: - (void)setCursorInactive:(BOOL)inactive;	// 0x36684a89
// converted property setter: - (void)setCursorStyle:(int)style;	// 0x366849b5
// declared property setter: - (void)setCursorTrackingDisabledWhenAvoidsCursor:(BOOL)cursor;	// 0x36684d45
- (void)setOpacity:(float)opacity;	// 0x36685379
@end

