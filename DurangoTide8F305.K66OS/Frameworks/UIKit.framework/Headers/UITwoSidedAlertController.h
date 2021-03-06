/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIAlertView;

@interface UITwoSidedAlertController : NSObject {
	UIAlertView *_front;	// 4 = 0x4
	UIAlertView *_back;	// 8 = 0x8
	UIAlertView *_currentAlert;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
- (void)alertSheet:(id)sheet buttonClicked:(int)clicked;	// 0x3223aef5
- (void)alertViewCancel:(id)cancel;	// 0x3223ae85
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x3223af7d
- (id)backAlert;	// 0x3223b0ed
- (void)backAlertClickedButtonAtIndex:(int)index;	// 0x3223af55
- (id)createBackAlert;	// 0x3223b04d
- (id)createFrontAlert;	// 0x3223b09d
- (void)dealloc;	// 0x3223b17d
- (void)dismiss;	// 0x3223afa1
- (void)flip;	// 0x3223c7b9
- (id)frontAlert;	// 0x3223b135
- (void)frontAlertClickedButtonAtIndex:(int)index;	// 0x3223af69
- (void)setDelegate:(id)delegate;	// 0x3223ae75
- (void)show;	// 0x3223b019
@end

