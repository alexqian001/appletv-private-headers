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
@property(assign, nonatomic) __weak NSObject<BRTextEntryDelegate> *delegate;	// G=0x4bbce1; S=0x4bbcf5; 
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x4bb9e5
- (void).cxx_destruct;	// 0x4bc249
- (BOOL)_isSubmitButtonFocused;	// 0x4bbf51
- (void)_otherButtonClick:(id)click;	// 0x4bc12d
- (id)_otherButtonTitle;	// 0x4bc1d5
- (void)_removeFocusFromSubmitButton;	// 0x4bbf01
- (void)_submitButtonClick:(id)click;	// 0x4bbfb1
- (id)_submitButtonTitle;	// 0x4bc059
- (void)_switchFocusToSubmitButton;	// 0x4bbeb1
// declared property getter: - (id)delegate;	// 0x4bbce1
- (void)layoutSubcontrols;	// 0x4bbb51
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4bbcf5
@end
