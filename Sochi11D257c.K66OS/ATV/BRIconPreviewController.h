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
@interface BRIconPreviewController : BRControl {
	BRTextControl *_message;	// 84 = 0x54
	BRTextControl *_instruction;	// 88 = 0x58
	BRImageControl *_image;	// 92 = 0x5c
	float _iconHeightFactor;	// 96 = 0x60
	float _horizontalPosition;	// 100 = 0x64
	float _verticalPosition;	// 104 = 0x68
	float _messageVerticalPosition;	// 108 = 0x6c
}
- (id)init;	// 0x3d47e1
- (id)accessibilityLabel;	// 0x3d4ff5
- (void)dealloc;	// 0x3d48f9
- (void)layoutSubcontrols;	// 0x3d4971
- (void)setIconHeightFactor:(float)factor;	// 0x3d4f95
- (void)setIconHorizontalPosition:(float)position;	// 0x3d4fb5
- (void)setIconVerticalPosition:(float)position;	// 0x3d4fd5
- (void)setImage:(id)image;	// 0x3d4edd
- (void)setInstructions:(id)instructions;	// 0x3d4efd
- (void)setMessage:(id)message;	// 0x3d4e25
- (void)setMessageVerticalPosition:(float)position;	// 0x3d4ebd
@end
