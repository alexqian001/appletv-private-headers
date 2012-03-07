/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageListHeaderControl : BRControl {
@private
	BRImageControl *_image;	// 44 = 0x2c
}
@property(readonly, assign) BRImageControl *image;	// G=0x307cc909; @synthesize=_image
- (id)init;	// 0x307cc981
- (id)accessibilityLabel;	// 0x307cc919
- (void)dealloc;	// 0x307cc939
// declared property getter: - (id)image;	// 0x307cc909
- (void)layoutSubcontrols;	// 0x307cc9e9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x307cca71
@end
