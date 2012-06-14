/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class ATVDirectionalRemoteConnectionHandler, NSMutableArray, NSTimer;

@interface ATVRemoteControlMessageHandler : NSObject {
@private
	int _touchDirection;	// 4 = 0x4
	CGPoint _startPoint;	// 8 = 0x8
	double _lastTimeStamp;	// 16 = 0x10
	CGPoint _lastPoint;	// 24 = 0x18
	NSTimer *_swipeTimer;	// 32 = 0x20
	NSTimer *_easeOutTimer;	// 36 = 0x24
	double _easeOutInterval;	// 40 = 0x28
	double _easeOutDecelerationFactor;	// 48 = 0x30
	BOOL _easeOutRepeat;	// 56 = 0x38
	CGPoint _autoScrollStartPoint;	// 60 = 0x3c
	double _autoScrollStartInterval;	// 68 = 0x44
	NSTimer *_autoScrollContinueTimer;	// 76 = 0x4c
	BOOL _isReallyReallyAutoScrolling;	// 80 = 0x50
	double _autoScrollInterval;	// 84 = 0x54
	CGPoint _velocityAdjustOffset;	// 92 = 0x5c
	CGPoint _lastVelocityRefPoint;	// 100 = 0x64
	CGPoint _velocityVector;	// 108 = 0x6c
	NSMutableArray *_velocitySet;	// 116 = 0x74
	int _touchCount;	// 120 = 0x78
	NSMutableArray *_throttledEventQueue;	// 124 = 0x7c
	NSTimer *_throttleEventTimer;	// 128 = 0x80
	BOOL _prohibitSelect;	// 132 = 0x84
	BOOL _activelyScrolling;	// 133 = 0x85
	CGSize _selectionChange;	// 136 = 0x88
	ATVDirectionalRemoteConnectionHandler *_connectionHandler;	// 144 = 0x90
	NSTimer *_connectionTimeoutTimer;	// 148 = 0x94
}
- (id)init;	// 0x365ad435
- (CGPoint)_adjustPoint:(CGPoint)point forVelocity:(CGPoint)velocity;	// 0x365ae161
- (void)_autoScrollContinueTimerCallback:(id)callback;	// 0x365af351
- (void)_beginAutoScroll;	// 0x365aed21
- (double)_calculateVelocityAverage;	// 0x365ae349
- (void)_clearEventQueue;	// 0x365afd09
- (void)_connectionTimedOut:(id)anOut;	// 0x365ade35
- (BOOL)_easeOutInProgress;	// 0x365af97d
- (void)_easeOutTimerCallback:(id)callback;	// 0x365af75d
- (void)_finishAutoScroll;	// 0x365aef4d
- (void)_finishEaseOut;	// 0x365af90d
- (CGPoint)_getSelectionPosition:(CGPoint)position;	// 0x365ae6a1
- (CGSize)_initialSelectionChangeDistance;	// 0x365afd5d
- (void)_invalidateSwipeAction;	// 0x365aec7d
- (BOOL)_isAutoScrolling;	// 0x365aecf9
- (BOOL)_isReallyReallyAutoScrolling;	// 0x365aed11
- (void)_postEvent:(id)event;	// 0x365af995
- (void)_postThrottledEvent:(id)event;	// 0x365afb1d
- (void)_processLastTouchMove;	// 0x365adee5
- (void)_processSelectionChange:(int)change delta:(int)delta;	// 0x365ae78d
- (void)_processSwipeMovement;	// 0x365ae921
- (BOOL)_processTouchEvent:(unsigned long)event value:(unsigned long)value eventDictionary:(id)dictionary;	// 0x365ad885
- (void)_refreshConnectionTimeoutTimer;	// 0x365add71
- (CGSize)_repeatSelectionChangeDistance;	// 0x365afd69
- (void)_resetTrackingCoordinates;	// 0x365ade45
- (void)_resetVelocitySet;	// 0x365ae681
- (void)_scrollEndNotification;	// 0x365afdd9
- (void)_scrollStartNotification;	// 0x365afdb1
- (void)_sendDirectionEvent:(int)event value:(int)value;	// 0x365ae84d
- (BOOL)_startEaseOut;	// 0x365af40d
- (BOOL)_swipeActive;	// 0x365aec65
- (void)_swipeTimeout;	// 0x365aebbd
- (void)_throttleEventTimerCallback;	// 0x365afbc5
- (BOOL)_updateAutoScroll;	// 0x365aeda5
- (void)_updateAutoScrollInterval;	// 0x365af019
- (void)_updateVelocitySet:(CGPoint)set velocity:(CGPoint)velocity;	// 0x365ae599
- (double)_velocitySetTotalDistance;	// 0x365ae4e5
- (void)dealloc;	// 0x365ad589
- (BOOL)handleDirectionalRemoteMessage:(unsigned long)message value:(unsigned long)value eventDictionary:(id)dictionary;	// 0x365ad65d
- (void)invalidate;	// 0x365ad62d
@end
