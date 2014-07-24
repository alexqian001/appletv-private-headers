/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface ATVStackItemControl : BRControl {
	BOOL _imageEdgeAntialiasingEnabled;	// 84 = 0x54
	ATVImage *_image;	// 88 = 0x58
}
@property(retain, nonatomic) ATVImage *image;	// G=0x74345; S=0x74269; @synthesize=_image
@property(assign, nonatomic) BOOL imageEdgeAntialiasingEnabled;	// G=0x74355; S=0x742f5; @synthesize=_imageEdgeAntialiasingEnabled
- (void).cxx_destruct;	// 0x74365
// declared property getter: - (id)image;	// 0x74345
// declared property getter: - (BOOL)imageEdgeAntialiasingEnabled;	// 0x74355
- (void)setCenter:(CGPoint)center;	// 0x74229
// declared property setter: - (void)setImage:(id)image;	// 0x74269
// declared property setter: - (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x742f5
@end
