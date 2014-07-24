/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextEntryController.h"
#import "BRTextFieldDelegate.h"

@class BROptionDialog, NSString;

__attribute__((visibility("hidden")))
@interface BRTextEntryDialog : BRTextEntryController <BRTextFieldDelegate> {
	NSString *_dialogID;	// 184 = 0xb8
	BOOL _canceled;	// 188 = 0xbc
	BROptionDialog *_errorDialog;	// 192 = 0xc0
}
@property(readonly, retain) NSString *dialogID;	// G=0x3e7e59; converted property
@property(retain, nonatomic) BROptionDialog *errorDialog;	// G=0x3e80cd; S=0x3e80dd; @synthesize=_errorDialog
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x3e7d55
- (BOOL)brEventAction:(id)action;	// 0x3e8039
- (void)dealloc;	// 0x3e7df9
// converted property getter: - (id)dialogID;	// 0x3e7e59
// declared property getter: - (id)errorDialog;	// 0x3e80cd
- (id)runModal;	// 0x3e7e69
// declared property setter: - (void)setErrorDialog:(id)dialog;	// 0x3e80dd
- (void)textDidChange:(id)text;	// 0x3e80ed
- (void)textDidEndEditing:(id)text;	// 0x3e80f1
@end
