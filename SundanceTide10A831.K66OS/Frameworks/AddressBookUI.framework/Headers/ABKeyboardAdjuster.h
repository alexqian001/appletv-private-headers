/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class NSMutableSet;

@interface ABKeyboardAdjuster : NSObject {
	NSMutableSet *_adjustmentRecords;	// 4 = 0x4
	BOOL _active;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL active;	// G=0x371a8d69; S=0x371a8ac5; @synthesize=_active
+ (id)sharedAdjuster;	// 0x371a8d31
- (id)init;	// 0x371a8575
- (void)_adjustTableForKeyboardInfo:(id)keyboardInfo;	// 0x371a8185
- (void)_keyboardWillHide:(id)_keyboard;	// 0x371a849d
- (void)_keyboardWillShow:(id)_keyboard;	// 0x371a83c5
// declared property getter: - (BOOL)active;	// 0x371a8d69
- (void)addScrollView:(id)view;	// 0x371a86e1
- (void)cancelDelayedAdjustmentsForView:(id)view;	// 0x371a815d
- (BOOL)containsScrollView:(id)view;	// 0x371a87c9
- (void)dateFieldDateDidBeginEditingNotification:(id)dateFieldDate;	// 0x371a8a2d
- (void)dateFieldDateDidEndEditingNotification:(id)dateFieldDate;	// 0x371a8a79
- (void)dealloc;	// 0x371a8665
- (void)manuallyAdjustEdgeInsets:(UIEdgeInsets)insets force:(BOOL)force;	// 0x371a8249
- (id)recordForScrollView:(id)scrollView;	// 0x371a8115
- (void)removeScrollView:(id)view;	// 0x371a8745
- (void)resetAdjustment;	// 0x371a8d05
// declared property setter: - (void)setActive:(BOOL)active;	// 0x371a8ac5
- (BOOL)shouldForceAutomaticKeyboardForView:(id)view;	// 0x371a8815
- (void)textFieldTextDidBeginEditingNotification:(id)textFieldText;	// 0x371a88fd
- (void)textFieldTextDidEndEditingNotification:(id)textFieldText;	// 0x371a8949
- (void)textViewTextDidBeginEditingNotification:(id)textViewText;	// 0x371a8995
- (void)textViewTextDidEndEditingNotification:(id)textViewText;	// 0x371a89e1
@end

