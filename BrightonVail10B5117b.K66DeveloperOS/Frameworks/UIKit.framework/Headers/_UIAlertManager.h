/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UIAlertManager : NSObject {
}
+ (CGAffineTransform)_alertTranslationForInterfaceOrientation:(int)interfaceOrientation andTranslation:(float)translation;	// 0x32fed6b5
+ (void)_applyAlertTransforms;	// 0x32ddb6e1
+ (void)addToStack:(id)stack dontDimBackground:(BOOL)background;	// 0x32dd9ca1
+ (void)alertPopoutCompleted;	// 0x32de1335
+ (void)alertWindowAnimationDidStop:(id)alertWindowAnimation finished:(id)finished context:(void *)context;	// 0x32fed511
+ (void)applyClientWindowTransform:(CGAffineTransform)transform;	// 0x32fed789
+ (void)applyInternalWindowTransform:(CGAffineTransform)transform;	// 0x32ddb6a1
+ (CGAffineTransform)calculatedAlertTransform;	// 0x32dda039
+ (BOOL)cancelAlertsAnimated:(BOOL)animated;	// 0x32fed4f9
+ (BOOL)cancelTopMostAlertAnimated:(BOOL)animated;	// 0x32fed4c9
+ (void)createAlertWindowIfNeeded:(BOOL)needed;	// 0x32fed849
+ (void)createAlertWindowIfNeeded:(BOOL)needed deferDisplay:(BOOL)display;	// 0x32dd9ead
+ (void)hideAlertsForTermination;	// 0x32d171c5
+ (void)hideDimmingViewAnimated:(BOOL)animated;	// 0x32de0945
+ (BOOL)hideTopMostAlertAnimated:(BOOL)animated;	// 0x32df7141
+ (void)hideTopmostMiniAlert;	// 0x32fed4b1
+ (void)initialize;	// 0x32d0cd49
+ (void)noteOrientationChangingTo:(int)to;	// 0x32fed4fd
+ (void)noteOrientationChangingTo:(int)to animated:(BOOL)animated;	// 0x32d355e1
+ (void)removeFromStack:(id)stack;	// 0x32de034d
+ (void)reorientAlertWindowTo:(int)to animated:(BOOL)animated keyboard:(id)keyboard;	// 0x32ddb1d1
+ (void)showDimmingViewAnimated:(BOOL)animated;	// 0x32ddf11d
+ (void)showTopmostMiniAlertWithSynchronizationPort:(unsigned)synchronizationPort;	// 0x32d0cdcd
+ (void)sizeAlertWindowForCurrentOrientation;	// 0x32dda0a1
+ (BOOL)stackContainsAlert:(id)alert;	// 0x32de0325
+ (void)tellSpringboardHidingAlert:(id)alert animated:(BOOL)animated forSpringBoardAlertTransition:(BOOL)springBoardAlertTransition;	// 0x32de07dd
+ (void)tellSpringboardShowingAlert:(id)alert animated:(BOOL)animated forSpringBoardAlertTransition:(BOOL)springBoardAlertTransition;	// 0x32ddf089
+ (id)topMostAlert;	// 0x32e4ac85
+ (id)visibleAlert;	// 0x32ddf109
- (void)_didHideDimmingView:(id)view finished:(id)finished;	// 0x32fed7c9
@end
