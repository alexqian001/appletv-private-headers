/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextEntryDialog.h"

@class NSObject, BRTextControlWithWiderFocusFrame;
@protocol BRTextEntryDelegate;

__attribute__((visibility("hidden")))
@interface BRTextEntryButtonsDialog : BRTextEntryDialog {
	BRTextControlWithWiderFocusFrame *_otherButton;	// 192 = 0xc0
	NSObject<BRTextEntryDelegate> *_textEntryDelegate;	// 196 = 0xc4
}
@property(assign, nonatomic) __weak NSObject<BRTextEntryDelegate> *delegate;	// G=0x46cb45; S=0x46cb59; 
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x46c849
- (void).cxx_destruct;	// 0x46d0ad
- (BOOL)_isSubmitButtonFocused;	// 0x46cdb5
- (void)_otherButtonClick:(id)click;	// 0x46cf91
- (id)_otherButtonTitle;	// 0x46d039
- (void)_removeFocusFromSubmitButton;	// 0x46cd65
- (void)_submitButtonClick:(id)click;	// 0x46ce15
- (id)_submitButtonTitle;	// 0x46cebd
- (void)_switchFocusToSubmitButton;	// 0x46cd15
// declared property getter: - (id)delegate;	// 0x46cb45
- (void)layoutSubcontrols;	// 0x46c9b5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x46cb59
@end

