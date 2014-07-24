/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATViCloudSignInHeaderView : BRControl {
	BRTextControl *_titleControl;	// 84 = 0x54
	BRTextControl *_instructionControl;	// 88 = 0x58
	BRImageControl *_mainImageControl;	// 92 = 0x5c
	BRTextControl *_lowerInstructionControl;	// 96 = 0x60
}
- (void).cxx_destruct;	// 0x2c9ded
- (void)layoutSubcontrols;	// 0x2c92f5
- (void)setInstructionText:(id)text;	// 0x2c98e5
- (void)setLowerInstructionText:(id)text;	// 0x2c9ac9
- (void)setMainImage:(id)image;	// 0x2c9a01
- (void)setTitle:(id)title;	// 0x2c97c9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2c9be5
@end
