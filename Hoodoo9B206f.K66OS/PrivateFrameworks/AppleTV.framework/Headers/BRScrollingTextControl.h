/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString, BRScrollingTextBoxControl, NSString, BRHeaderControl, NSArray, BRPanelControl;

@interface BRScrollingTextControl : BRControl {
@private
	BRHeaderControl *_header;	// 48 = 0x30
	BRScrollingTextBoxControl *_textBox;	// 52 = 0x34
	BRPanelControl *_buttonGrid;	// 56 = 0x38
	NSAttributedString *_attributedString;	// 60 = 0x3c
	long _selectedIndex;	// 64 = 0x40
	NSString *_dialogIdentifier;	// 68 = 0x44
}
@property(retain) NSAttributedString *attributedString;	// G=0x366c04b9; S=0x366c047d; converted property
@property(readonly, assign, nonatomic) NSArray *buttons;	// G=0x366c05d5; @dynamic
+ (id)controlWithTitle:(id)title documentPath:(id)path firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x366c0029
+ (id)controlWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x366bff51
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text;	// 0x366bfd3d
+ (int)postControlAsDialogWithTitle:(id)title text:(id)text firstButton:(id)button secondButton:(id)button4 thirdButton:(id)button5 defaultFocus:(int)focus;	// 0x366bfd9d
- (id)init;	// 0x366c0101
- (id)_dialogIdentifier;	// 0x366c0b91
- (id)_paragraphTextAttributes;	// 0x366c0ba1
- (long)_selectedIndex;	// 0x366c0b41
- (void)_setDialogIdentifier:(id)identifier;	// 0x366c0b51
- (void)_setSelectedIndexWithControl:(id)control;	// 0x366c0af9
- (id)accessibilityLabel;	// 0x366c0ab9
- (id)accessibilityScreenContent;	// 0x366c0ad9
- (void)addButtonWithTitle:(id)title isDefaultFocus:(BOOL)focus;	// 0x366c05f5
// converted property getter: - (id)attributedString;	// 0x366c04b9
- (BOOL)brEventAction:(id)action;	// 0x366c06cd
// declared property getter: - (id)buttons;	// 0x366c05d5
- (void)dealloc;	// 0x366c02d1
- (BOOL)isAccessibilityElement;	// 0x366c0ab5
- (void)layoutSubcontrols;	// 0x366c07c9
// converted property setter: - (void)setAttributedString:(id)string;	// 0x366c047d
- (void)setDocumentPath:(id)path;	// 0x366c04c9
- (void)setDocumentPath:(id)path encoding:(unsigned)encoding;	// 0x366c04dd
- (void)setSelectionHandler:(id)handler;	// 0x366c0765
- (void)setText:(id)text;	// 0x366c03f5
- (void)setTitle:(id)title;	// 0x366c0359
@end
