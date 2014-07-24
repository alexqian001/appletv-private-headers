/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextEntryController.h"
#import "BRTextFieldDelegate.h"

@class NSString, BROptionDialog;

__attribute__((visibility("hidden")))
@interface BRTextEntryDialog : BRTextEntryController <BRTextFieldDelegate> {
	NSString *_dialogID;	// 184 = 0xb8
	BOOL _canceled;	// 188 = 0xbc
	BROptionDialog *_errorDialog;	// 192 = 0xc0
}
@property(readonly, retain) NSString *dialogID;	// G=0x3d24b9; converted property
@property(retain, nonatomic) BROptionDialog *errorDialog;	// G=0x3d272d; S=0x3d273d; @synthesize=_errorDialog
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x3d23b5
- (BOOL)brEventAction:(id)action;	// 0x3d2699
- (void)dealloc;	// 0x3d2459
// converted property getter: - (id)dialogID;	// 0x3d24b9
// declared property getter: - (id)errorDialog;	// 0x3d272d
- (id)runModal;	// 0x3d24c9
// declared property setter: - (void)setErrorDialog:(id)dialog;	// 0x3d273d
- (void)textDidChange:(id)text;	// 0x3d274d
- (void)textDidEndEditing:(id)text;	// 0x3d2751
@end
