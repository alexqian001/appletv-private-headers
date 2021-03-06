/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"
#import "UIKit-Structs.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UITouchesEvent : UIInternalEvent {
@private
	NSMutableSet *_touches;	// 16 = 0x10
	CFDictionaryRef _keyedTouches;	// 20 = 0x14
	CFDictionaryRef _gestureRecognizersByWindow;	// 24 = 0x18
}
- (BOOL)_addGestureRecognizersForView:(id)view toTouch:(id)touch;	// 0x31f8f111
- (void)_addTouch:(id)touch forDelayedDelivery:(BOOL)delayedDelivery;	// 0x31f8ee89
- (id)_allTouches;	// 0x32148ca1
- (void)_clearTouches;	// 0x31f8e121
- (void)_clearViewForTouch:(id)touch;	// 0x31f923c1
- (id)_cloneEvent;	// 0x32016989
- (id)_firstTouchForView:(id)view;	// 0x31f908f9
- (id)_gestureRecognizersForWindow:(id)window;	// 0x31f8f8f1
- (id)_init;	// 0x31fa1325
- (id)_initWithEvent:(GSEventRef)event touches:(id)touches;	// 0x32149401
- (id)_initWithTouches:(id)touches keyedTouches:(CFDictionaryRef)touches2;	// 0x32149375
- (void)_invalidateGestureRecognizerForWindowCache;	// 0x31f9c019
- (void)_moveTouchesFromView:(id)view toView:(id)view2;	// 0x32040a2d
- (void)_removeTouch:(id)touch;	// 0x31f92201
- (void)_removeTouch:(id)touch fromGestureRecognizer:(id)gestureRecognizer;	// 0x32019b65
- (void)_removeTouchesForKey:(id)key;	// 0x31f92455
- (id)_touchesForGesture:(id)gesture withPhase:(int)phase;	// 0x3200b84d
- (void)_touchesForGesture:(id)gesture withPhase:(int)phase intoSet:(id)set;	// 0x32015249
- (id)_touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x32149585
- (id)_touchesForKey:(id)key;	// 0x31f8f081
- (id)_touchesForView:(id)view withPhase:(int)phase;	// 0x31f8fd65
- (id)_viewsForWindow:(id)window;	// 0x31f8fc7d
- (id)_windows;	// 0x31f8f375
- (id)allTouches;	// 0x31f8f459
- (void)dealloc;	// 0x3201988d
- (id)description;	// 0x32148de1
- (id)touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x3200b94d
- (id)touchesForView:(id)view;	// 0x31f8fe9d
- (id)touchesForWindow:(id)window;	// 0x31f8fa41
- (int)type;	// 0x3206c519
@end

