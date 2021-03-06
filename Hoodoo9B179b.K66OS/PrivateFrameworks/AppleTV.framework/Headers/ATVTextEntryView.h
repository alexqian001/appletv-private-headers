/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRCursorControl, BRTextEntryControl, BRTextFieldBackgroundLayer, BRHeaderControl, BRTextControl, BRImageControl, ATVTextEntryTextControl, BRTextFieldControl;

@interface ATVTextEntryView : BRControl {
@private
	BRTextEntryControl *_editor;	// 48 = 0x30
	XXStruct_qlg9jA _maxFootnoteTextHeight;	// 52 = 0x34
	BRHeaderControl *_headerControl;	// 56 = 0x38
	BRTextFieldControl *_textField;	// 60 = 0x3c
	BRImageControl *_verticalDividerImage;	// 64 = 0x40
	BRTextFieldBackgroundLayer *_textFieldBackground;	// 68 = 0x44
	BRTextControl *_label;	// 72 = 0x48
	ATVTextEntryTextControl *_submitButton;	// 76 = 0x4c
	BRTextControl *_supplementaryText;	// 80 = 0x50
	BRTextControl *_footnoteText;	// 84 = 0x54
	BRCursorControl *_cursor;	// 88 = 0x58
	BOOL _cursorNavigatedFromEditor;	// 92 = 0x5c
}
@property(retain, nonatomic) BRCursorControl *_cursor;	// G=0x303f0139; S=0x303f0149; @synthesize
@property(assign, nonatomic) BOOL _cursorNavigatedFromEditor;	// G=0x303f016d; S=0x303f017d; @synthesize
@property(retain, nonatomic) BRTextControl *_footnoteText;	// G=0x303f0105; S=0x303f0115; @synthesize
@property(retain, nonatomic) BRTextControl *_label;	// G=0x303f0069; S=0x303f0079; @synthesize
@property(retain, nonatomic) ATVTextEntryTextControl *_submitButton;	// G=0x303f009d; S=0x303f00ad; @synthesize
@property(retain, nonatomic) BRTextControl *_supplementaryText;	// G=0x303f00d1; S=0x303f00e1; @synthesize
@property(retain, nonatomic) BRTextFieldControl *_textField;	// G=0x303effcd; S=0x303effdd; @synthesize
@property(retain, nonatomic) BRTextFieldBackgroundLayer *_textFieldBackground;	// G=0x303f0035; S=0x303f0045; @synthesize
@property(retain, nonatomic) BRImageControl *_verticalDividerImage;	// G=0x303f0001; S=0x303f0011; @synthesize
@property(retain, nonatomic) BRTextEntryControl *editor;	// G=0x303eff5d; S=0x303eff6d; @synthesize=_editor
@property(retain, nonatomic) BRHeaderControl *headerControl;	// G=0x303effbd; S=0x303ef015; @synthesize=_headerControl
@property(assign, nonatomic) XXStruct_qlg9jA maxFootnoteTextHeight;	// G=0x303eff91; S=0x303effad; @synthesize=_maxFootnoteTextHeight
- (id)initWithTextEntryStyle:(int)textEntryStyle;	// 0x303ee911
- (void)_addCursor;	// 0x303f0245
// declared property getter: - (id)_cursor;	// 0x303f0139
// declared property getter: - (BOOL)_cursorNavigatedFromEditor;	// 0x303f016d
// declared property getter: - (id)_footnoteText;	// 0x303f0105
- (void)_historyItemSelected:(id)selected;	// 0x303f018d
// declared property getter: - (id)_label;	// 0x303f0069
- (void)_removeCursor;	// 0x303f02e9
// declared property getter: - (id)_submitButton;	// 0x303f009d
- (void)_submitButtonClick;	// 0x303f021d
// declared property getter: - (id)_supplementaryText;	// 0x303f00d1
- (void)_switchFocusToSubmitButton;	// 0x303f019d
// declared property getter: - (id)_textField;	// 0x303effcd
// declared property getter: - (id)_textFieldBackground;	// 0x303f0035
// declared property getter: - (id)_verticalDividerImage;	// 0x303f0001
- (id)accessibilityLabel;	// 0x303efef1
- (id)accessibilityScreenContent;	// 0x303eff35
- (BOOL)brEventAction:(id)action;	// 0x303ef585
- (void)controlWasActivated;	// 0x303ef4d5
- (void)dealloc;	// 0x303eeee5
// declared property getter: - (id)editor;	// 0x303eff5d
// declared property getter: - (id)headerControl;	// 0x303effbd
- (void)layoutSubcontrols;	// 0x303ef7b5
// declared property getter: - (XXStruct_qlg9jA)maxFootnoteTextHeight;	// 0x303eff91
// declared property setter: - (void)setEditor:(id)editor;	// 0x303eff6d
- (void)setFootnoteText:(id)text withAttributes:(id)attributes;	// 0x303ef305
// declared property setter: - (void)setHeaderControl:(id)control;	// 0x303ef015
- (void)setInitialText:(id)text;	// 0x303ef485
- (void)setLabel:(id)label;	// 0x303ef095
// declared property setter: - (void)setMaxFootnoteTextHeight:(XXStruct_qlg9jA)height;	// 0x303effad
- (void)setSupplementaryText:(id)text;	// 0x303ef1d5
// declared property setter: - (void)set_cursor:(id)cursor;	// 0x303f0149
// declared property setter: - (void)set_cursorNavigatedFromEditor:(BOOL)editor;	// 0x303f017d
// declared property setter: - (void)set_footnoteText:(id)text;	// 0x303f0115
// declared property setter: - (void)set_label:(id)label;	// 0x303f0079
// declared property setter: - (void)set_submitButton:(id)button;	// 0x303f00ad
// declared property setter: - (void)set_supplementaryText:(id)text;	// 0x303f00e1
// declared property setter: - (void)set_textField:(id)field;	// 0x303effdd
// declared property setter: - (void)set_textFieldBackground:(id)background;	// 0x303f0045
// declared property setter: - (void)set_verticalDividerImage:(id)image;	// 0x303f0011
@end

