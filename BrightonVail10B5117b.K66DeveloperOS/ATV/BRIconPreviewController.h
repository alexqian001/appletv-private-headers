/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRIconPreviewController : BRControl {
	BRTextControl *_message;	// 84 = 0x54
	BRTextControl *_instruction;	// 88 = 0x58
	BRImageControl *_image;	// 92 = 0x5c
	float _iconHeightFactor;	// 96 = 0x60
	float _horizontalPosition;	// 100 = 0x64
	float _verticalPosition;	// 104 = 0x68
	float _messageVerticalPosition;	// 108 = 0x6c
}
- (id)init;	// 0x32b511
- (id)accessibilityLabel;	// 0x32bd2d
- (void)dealloc;	// 0x32b629
- (void)layoutSubcontrols;	// 0x32b6a1
- (void)setIconHeightFactor:(float)factor;	// 0x32bccd
- (void)setIconHorizontalPosition:(float)position;	// 0x32bced
- (void)setIconVerticalPosition:(float)position;	// 0x32bd0d
- (void)setImage:(id)image;	// 0x32bc15
- (void)setInstructions:(id)instructions;	// 0x32bc35
- (void)setMessage:(id)message;	// 0x32bb5d
- (void)setMessageVerticalPosition:(float)position;	// 0x32bbf5
@end
