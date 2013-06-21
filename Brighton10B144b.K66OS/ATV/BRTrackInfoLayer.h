/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray, BRImageControl;

__attribute__((visibility("hidden")))
@interface BRTrackInfoLayer : BRControl {
	BRControl *_background;	// 84 = 0x54
	BRImageControl *_art;	// 88 = 0x58
	NSArray *_lines;	// 92 = 0x5c
	float _maxLength;	// 96 = 0x60
	long _maxLines;	// 100 = 0x64
}
- (id)init;	// 0x3236fd
- (void)_updateSublayers;	// 0x323fad
- (id)accessibilityLabel;	// 0x323f99
- (void)dealloc;	// 0x3237c9
- (void)layoutSubcontrols;	// 0x323bc5
- (void)setImage:(id)image;	// 0x323af9
- (void)setLines:(id)lines withImage:(id)image;	// 0x323841
- (void)setMaxLines:(long)lines;	// 0x323ba5
@end
