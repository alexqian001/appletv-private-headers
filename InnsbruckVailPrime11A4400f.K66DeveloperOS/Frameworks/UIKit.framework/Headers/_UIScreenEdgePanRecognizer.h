/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>
#import "_UISettingsKeyObserver.h"

@class _UIScreenEdgePanRecognizerSettings, UIDelayedAction;
@protocol _UIScreenEdgePanRecognizerDelegate;

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {
	CGRect _screenBounds;	// 4 = 0x4
	BOOL _useGrapeFlags;	// 20 = 0x14
	BOOL _hasRecordedData;	// 21 = 0x15
	BOOL _hasDoneInitialBackProjectionTest;	// 22 = 0x16
	float _gestureRestrictionFactor;	// 24 = 0x18
	CGPoint _initialTouchLocation;	// 28 = 0x1c
	double _initialTouchTimestamp;	// 36 = 0x24
	int _initialInterfaceOrientation;	// 44 = 0x2c
	int _touchedRegion;	// 48 = 0x30
	UIDelayedAction *_recognitionTimer;	// 52 = 0x34
	CGPoint _lastTouchLocation;	// 56 = 0x38
	double _lastTouchTimestamp;	// 64 = 0x40
	int _type;	// 72 = 0x48
	BOOL _requiresLongPress;	// 76 = 0x4c
	BOOL _requiresFlatThumb;	// 77 = 0x4d
	int _targetEdges;	// 80 = 0x50
	int _state;	// 84 = 0x54
	int _recognizedRegion;	// 88 = 0x58
	id<_UIScreenEdgePanRecognizerDelegate> _delegate;	// 92 = 0x5c
	_UIScreenEdgePanRecognizerSettings *_settings;	// 96 = 0x60
}
@property(assign) id<_UIScreenEdgePanRecognizerDelegate> delegate;	// G=0x2f6ebe31; S=0x2f6ebe45; @synthesize=_delegate
@property(readonly, assign, nonatomic) int recognizedRegion;	// G=0x2f6ebe21; @synthesize=_recognizedRegion
@property(assign, nonatomic) BOOL requiresFlatThumb;	// G=0x2f6ebe01; S=0x2f6ebd79; @synthesize=_requiresFlatThumb
@property(readonly, assign, nonatomic, getter=isRequiringLongPress) BOOL requiringLongPress;	// G=0x2f6e78e5; 
@property(assign, nonatomic) CGRect screenBounds;	// G=0x2f6ebdd9; S=0x2f6ebbe1; @synthesize=_screenBounds
@property(retain, nonatomic) _UIScreenEdgePanRecognizerSettings *settings;	// G=0x2f6ebe5d; S=0x2f6ebc1d; @synthesize=_settings
@property(readonly, assign, nonatomic) int state;	// G=0x2f6ebe11; @synthesize=_state
@property(assign, nonatomic) int targetEdges;	// G=0x2f6ebdf1; S=0x2f6ebd09; @synthesize=_targetEdges
+ (BOOL)_edgeSwipeNavigationGestureEnabled;	// 0x2f6ebd99
- (id)initWithType:(int)type;	// 0x2f6e7319
- (void)_createOrDestoryAnalysisWindowIfNeeded;	// 0x2f6eba3d
- (void)_idleTimerElapsed:(id)elapsed;	// 0x2f6eb505
- (void)_incorporateIncrementalSampleAtLocation:(CGPoint)location timestamp:(double)timestamp modifier:(int)modifier interfaceOrientation:(int)orientation;	// 0x2f6e9759
- (void)_incorporateInitialTouchAtLocation:(CGPoint)location timestamp:(double)timestamp modifier:(int)modifier interfaceOrientation:(int)orientation;	// 0x2f6e79a5
- (void)_longPressTimerElapsed:(id)elapsed;	// 0x2f6eb401
- (void)_setState:(int)state;	// 0x2f6e7769
- (int)_targetEdges;	// 0x2f6ebd2d
- (int)_type;	// 0x2f6e78d5
- (void)dealloc;	// 0x2f6e752d
// declared property getter: - (id)delegate;	// 0x2f6ebe31
- (void)incorporateTouchSampleAtLocation:(CGPoint)location timestamp:(double)timestamp modifier:(int)modifier interfaceOrientation:(int)orientation;	// 0x2f6e78f5
// declared property getter: - (BOOL)isRequiringLongPress;	// 0x2f6e78e5
// declared property getter: - (int)recognizedRegion;	// 0x2f6ebe21
// declared property getter: - (BOOL)requiresFlatThumb;	// 0x2f6ebe01
- (void)reset;	// 0x2f6e758d
// declared property getter: - (CGRect)screenBounds;	// 0x2f6ebdd9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f6ebe45
// declared property setter: - (void)setRequiresFlatThumb:(BOOL)thumb;	// 0x2f6ebd79
// declared property setter: - (void)setScreenBounds:(CGRect)bounds;	// 0x2f6ebbe1
// declared property setter: - (void)setSettings:(id)settings;	// 0x2f6ebc1d
// declared property setter: - (void)setTargetEdges:(int)edges;	// 0x2f6ebd09
// declared property getter: - (id)settings;	// 0x2f6ebe5d
- (void)settings:(id)settings changedValueForKey:(id)key;	// 0x2f6ebc95
// declared property getter: - (int)state;	// 0x2f6ebe11
// declared property getter: - (int)targetEdges;	// 0x2f6ebdf1
@end

