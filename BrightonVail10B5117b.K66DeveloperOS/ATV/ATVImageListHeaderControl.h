/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageListHeaderControl : BRControl {
	BRImageControl *_image;	// 84 = 0x54
}
@property(readonly, assign) BRImageControl *image;	// G=0x115671; @synthesize=_image
- (id)init;	// 0x115479
- (id)accessibilityLabel;	// 0x115651
- (void)dealloc;	// 0x1154fd
// declared property getter: - (id)image;	// 0x115671
- (void)layoutSubcontrols;	// 0x1155c1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x115549
@end
