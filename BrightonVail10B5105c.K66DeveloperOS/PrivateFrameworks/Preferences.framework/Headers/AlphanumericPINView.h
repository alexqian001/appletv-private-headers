/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PINView.h"
#import "Preferences-Structs.h"
#import "UITableViewDataSource.h"

@class UITableViewCell, UITableView, UITextField;

@interface AlphanumericPINView : PINView <UITableViewDataSource> {
	UITextField *_passcodeField;	// 108 = 0x6c
	UITableViewCell *_cell;	// 112 = 0x70
	UITableView *_table;	// 116 = 0x74
}
@property(retain) id stringValue;	// G=0x3161c449; S=0x3161c6a5; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x3161bd3d
- (void)appendString:(id)string;	// 0x3161c6ed
- (BOOL)becomeFirstResponder;	// 0x3161c65d
- (BOOL)canBecomeFirstResponder;	// 0x3161c639
- (void)dealloc;	// 0x3161c3a5
- (void)deleteLastCharacter;	// 0x3161c7d5
- (void)hidePasscodeField:(BOOL)field;	// 0x3161c505
- (BOOL)isFirstResponder;	// 0x3161c615
- (BOOL)keyboardInputChanged:(id)changed;	// 0x3161c309
- (void)layoutSubviews;	// 0x3161c07d
- (void)okButtonPressed:(id)pressed;	// 0x3161c469
- (BOOL)resignFirstResponder;	// 0x3161c681
- (void)setBlocked:(BOOL)blocked;	// 0x3161c2cd
// converted property setter: - (void)setStringValue:(id)value;	// 0x3161c6a5
- (void)showError:(id)error animate:(BOOL)animate;	// 0x3161c375
// converted property getter: - (id)stringValue;	// 0x3161c449
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3161c2bd
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3161c2b9
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x3161c85d
@end

