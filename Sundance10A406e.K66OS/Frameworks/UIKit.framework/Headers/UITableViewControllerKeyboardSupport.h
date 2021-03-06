/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITableViewController;

__attribute__((visibility("hidden")))
@interface UITableViewControllerKeyboardSupport : NSObject {
	UITableViewController *_tableViewController;	// 4 = 0x4
	float _adjustmentForKeyboard;	// 8 = 0x8
	unsigned _viewIsDisappearing : 1;	// 12 = 0xc
	unsigned _registeredForNotifications : 1;	// 12 = 0xc
}
@property(assign, nonatomic) float adjustmentForKeyboard;	// G=0x30979ce1; S=0x3097a091; @synthesize=_adjustmentForKeyboard
@property(assign, nonatomic) BOOL registeredForNotifications;	// G=0x30979c9d; S=0x30979cb1; 
@property(assign, nonatomic) BOOL viewIsDisappearing;	// G=0x30a292d5; S=0x30979cc9; 
- (id)initWithTableViewController:(id)tableViewController;	// 0x30979c5d
- (void)_keyboardDidChangeFrame:(id)_keyboard;	// 0x30a29491
- (void)_keyboardDidHide:(id)_keyboard;	// 0x30a296a1
- (void)_keyboardDidShow:(id)_keyboard;	// 0x30a29509
- (void)_keyboardWillHide:(id)_keyboard;	// 0x30a295e5
- (void)_keyboardWillShow:(id)_keyboard;	// 0x30a2915d
// declared property getter: - (float)adjustmentForKeyboard;	// 0x30979ce1
// declared property getter: - (BOOL)registeredForNotifications;	// 0x30979c9d
// declared property setter: - (void)setAdjustmentForKeyboard:(float)keyboard;	// 0x3097a091
// declared property setter: - (void)setRegisteredForNotifications:(BOOL)notifications;	// 0x30979cb1
// declared property setter: - (void)setViewIsDisappearing:(BOOL)disappearing;	// 0x30979cc9
// declared property getter: - (BOOL)viewIsDisappearing;	// 0x30a292d5
@end

