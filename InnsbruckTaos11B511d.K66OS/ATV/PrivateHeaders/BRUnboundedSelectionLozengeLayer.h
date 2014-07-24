/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSelectionLozengeLayer.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface BRUnboundedSelectionLozengeLayer : BRSelectionLozengeLayer {
	ATVImage *_topImage;	// 88 = 0x58
	ATVImage *_bottomImage;	// 92 = 0x5c
	BOOL _brighterImage;	// 96 = 0x60
	BOOL _focusedImage;	// 97 = 0x61
}
@property(assign) BOOL useBrighterUnselectedImage;	// G=0x37aed1; S=0x37aea5; converted property
- (id)init;	// 0x37ade5
- (void)_updateImages;	// 0x37b001
- (void)dealloc;	// 0x37ae41
- (void)drawRect:(CGRect)rect;	// 0x37af11
- (void)layoutSubcontrols;	// 0x37af0d
- (void)setFocused:(BOOL)focused;	// 0x37aee1
// converted property setter: - (void)setUseBrighterUnselectedImage:(BOOL)image;	// 0x37aea5
// converted property getter: - (BOOL)useBrighterUnselectedImage;	// 0x37aed1
@end
