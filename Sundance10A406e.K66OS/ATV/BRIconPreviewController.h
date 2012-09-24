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
- (id)init;	// 0x31b731
- (id)accessibilityLabel;	// 0x31bf4d
- (void)dealloc;	// 0x31b849
- (void)layoutSubcontrols;	// 0x31b8c1
- (void)setIconHeightFactor:(float)factor;	// 0x31beed
- (void)setIconHorizontalPosition:(float)position;	// 0x31bf0d
- (void)setIconVerticalPosition:(float)position;	// 0x31bf2d
- (void)setImage:(id)image;	// 0x31be35
- (void)setInstructions:(id)instructions;	// 0x31be55
- (void)setMessage:(id)message;	// 0x31bd7d
- (void)setMessageVerticalPosition:(float)position;	// 0x31be15
@end
