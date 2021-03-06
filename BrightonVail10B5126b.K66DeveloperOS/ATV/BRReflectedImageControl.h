/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRReflectionControl;

__attribute__((visibility("hidden")))
@interface BRReflectedImageControl : BRControl {
	BRImageControl *_image;	// 84 = 0x54
	BRReflectionControl *_reflection;	// 88 = 0x58
	float _offset;	// 92 = 0x5c
}
@property(assign) BOOL automaticDownsample;	// G=0x300c45; S=0x300c25; converted property
@property(retain) BRImageControl *image;	// G=0x300c69; S=0x300b25; converted property
@property(assign) CGColorRef imageBorderColor;	// G=0x300d69; S=0x300d2d; converted property
@property(assign) float imageBorderWidth;	// G=0x300cf5; S=0x300cb9; converted property
@property(assign) float reflectionOffset;	// G=0x300ca9; S=0x300c89; converted property
- (id)init;	// 0x3009ad
// converted property getter: - (BOOL)automaticDownsample;	// 0x300c45
- (void)dealloc;	// 0x300ac1
// converted property getter: - (id)image;	// 0x300c69
// converted property getter: - (CGColorRef)imageBorderColor;	// 0x300d69
// converted property getter: - (float)imageBorderWidth;	// 0x300cf5
- (void)layoutSubcontrols;	// 0x300de9
- (CGRect)reflectedImageFrameForImageFrame:(CGRect)imageFrame reflectionAmount:(float)amount;	// 0x300da1
// converted property getter: - (float)reflectionOffset;	// 0x300ca9
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x300c25
// converted property setter: - (void)setImage:(id)image;	// 0x300b25
- (void)setImageAsContents:(id)contents;	// 0x300ba5
// converted property setter: - (void)setImageBorderColor:(CGColorRef)color;	// 0x300d2d
// converted property setter: - (void)setImageBorderWidth:(float)width;	// 0x300cb9
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x300c89
@end

