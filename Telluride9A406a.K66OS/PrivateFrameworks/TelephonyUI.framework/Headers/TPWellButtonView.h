/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h> // Unknown library
#import "TelephonyUI-Structs.h"

@class TPButton, TPWell;

@interface TPWellButtonView : UIView {
	TPButton *_button;	// 48 = 0x30
	TPWell *_well;	// 52 = 0x34
}
@property(retain, nonatomic) TPButton *button;	// G=0x360242ad; S=0x3602431d; @synthesize=_button
- (id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame;	// 0x36024345
// declared property getter: - (id)button;	// 0x360242ad
- (void)dealloc;	// 0x360242bd
// declared property setter: - (void)setButton:(id)button;	// 0x3602431d
@end

