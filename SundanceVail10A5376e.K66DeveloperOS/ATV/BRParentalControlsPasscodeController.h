/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"
#import "BRTextFieldDelegate.h"

@class BRTextControl, BRHeaderControl, NSString, NSDictionary, BRPasscodeEntryControl;

__attribute__((visibility("hidden")))
@interface BRParentalControlsPasscodeController : BRController <BRTextFieldDelegate> {
	BRController *_guardedController;	// 100 = 0x64
	BRPasscodeEntryControl *_editor;	// 104 = 0x68
	BRHeaderControl *_header;	// 108 = 0x6c
	BRTextControl *_prompt;	// 112 = 0x70
	NSString *_passcodeToConfirm;	// 116 = 0x74
	int _mode;	// 120 = 0x78
	NSDictionary *_userInfo;	// 124 = 0x7c
}
@property(retain) NSDictionary *userInfo;	// G=0x317ec1; S=0x317e85; converted property
+ (id)passcodeEntryControllerGuarding:(id)guarding hideDigits:(BOOL)digits;	// 0x3178d5
- (id)initWithTitle:(id)title prompt:(id)prompt mode:(int)mode guarding:(id)guarding hideDigits:(BOOL)digits;	// 0x317981
- (void)_passcodeEnteredForConfirm:(id)confirm;	// 0x318285
- (void)_passcodeEnteredForEntry:(id)entry;	// 0x317f35
- (void)_passcodeEnteredForSet:(id)set;	// 0x318121
- (id)accessibilityLabel;	// 0x3184cd
- (void)dealloc;	// 0x317b65
- (void)setFrame:(CGRect)frame;	// 0x317c2d
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x317e45
- (void)setIconScaleFactor:(float)factor;	// 0x317e65
- (void)setPasscodeToConfirm:(id)confirm;	// 0x317e09
// converted property setter: - (void)setUserInfo:(id)info;	// 0x317e85
- (void)textDidChange:(id)text;	// 0x317ed1
- (void)textDidEndEditing:(id)text;	// 0x317ed5
// converted property getter: - (id)userInfo;	// 0x317ec1
@end

