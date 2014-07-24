/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVRadioTopShelfLogoView : BRControl {
	BRImageControl *_imageControl;	// 84 = 0x54
	BRTextControl *_titleControl;	// 88 = 0x58
	BRTextControl *_messageControl;	// 92 = 0x5c
}
@property(retain, nonatomic) BRImageControl *imageControl;	// G=0x108f1d; S=0x108f2d; @synthesize=_imageControl
@property(retain, nonatomic) BRTextControl *messageControl;	// G=0x108f8d; S=0x108f9d; @synthesize=_messageControl
@property(retain, nonatomic) BRTextControl *titleControl;	// G=0x108f55; S=0x108f65; @synthesize=_titleControl
- (id)init;	// 0x10869d
- (void).cxx_destruct;	// 0x108fc5
- (id)_messageAttributes;	// 0x1089a5
- (id)_textAttributes;	// 0x108799
- (id)_titleAttributes;	// 0x10889d
- (id)accessibilityLabel;	// 0x108e7d
- (void)controlWasActivated;	// 0x108aad
// declared property getter: - (id)imageControl;	// 0x108f1d
- (void)layoutSubviews;	// 0x108b99
// declared property getter: - (id)messageControl;	// 0x108f8d
// declared property setter: - (void)setImageControl:(id)control;	// 0x108f2d
- (void)setMessage:(id)message;	// 0x108e0d
// declared property setter: - (void)setMessageControl:(id)control;	// 0x108f9d
- (void)setTitle:(id)title;	// 0x108d9d
// declared property setter: - (void)setTitleControl:(id)control;	// 0x108f65
// declared property getter: - (id)titleControl;	// 0x108f55
@end
