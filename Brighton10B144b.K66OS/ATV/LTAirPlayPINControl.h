/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRDropShadowControl, NSString, BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface LTAirPlayPINControl : BRControl {
	BRControl *_dialogBox;	// 84 = 0x54
	BRDropShadowControl *_shadowControl;	// 88 = 0x58
	BRImageControl *_dividerImage;	// 92 = 0x5c
	BRImageControl *_airPlayImage;	// 96 = 0x60
	BRTextControl *_airPlayText;	// 100 = 0x64
	BRTextControl *_pinText;	// 104 = 0x68
	NSString *_pin;	// 108 = 0x6c
}
@property(retain, nonatomic) NSString *pin;	// G=0x73a41; S=0x7346d; @synthesize=_pin
- (id)initWithPIN:(id)pin;	// 0x73011
- (void).cxx_destruct;	// 0x73a51
- (id)accessibilityLabel;	// 0x73941
- (BOOL)brEventAction:(id)action;	// 0x73569
- (BOOL)isAccessibilityElement;	// 0x7393d
- (void)layoutSubcontrols;	// 0x735bd
// declared property getter: - (id)pin;	// 0x73a41
// declared property setter: - (void)setPin:(id)pin;	// 0x7346d
@end

