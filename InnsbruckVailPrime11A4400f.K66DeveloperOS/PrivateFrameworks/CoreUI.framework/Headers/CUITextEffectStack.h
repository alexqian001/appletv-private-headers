/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import "CoreUI-Structs.h"
#import "CUIShapeEffectStack.h"


@interface CUITextEffectStack : CUIShapeEffectStack {
	bool renderHighQuality;	// 284 = 0x11c
}
- (id)initWithEffectPreset:(id)effectPreset;	// 0x3079bf19
- (void)_drawShadow:(XXStruct_MsnGHB)shadow forGlyphs:(const unsigned short *)glyphs inContext:(CGContextRef)context usingFont:(CTFontRef)font atPositions:(const CGPoint *)positions count:(unsigned long)count;	// 0x3079cdad
- (void)_drawShadow:(XXStruct_MsnGHB)shadow forGlyphs:(const unsigned short *)glyphs inContext:(CGContextRef)context usingFont:(CTFontRef)font withAdvances:(const CGSize *)advances count:(unsigned long)count;	// 0x3079c781
- (void)drawGlyphs:(const unsigned short *)glyphs inContext:(CGContextRef)context usingFont:(CTFontRef)font atPositions:(const CGPoint *)positions count:(unsigned long)count lineHeight:(float)height inBounds:(CGRect)bounds atScale:(float)scale;	// 0x3079d035
- (void)drawGlyphs:(const unsigned short *)glyphs inContext:(CGContextRef)context usingFont:(CTFontRef)font withAdvances:(const CGSize *)advances count:(unsigned long)count lineHeight:(float)height inBounds:(CGRect)bounds atScale:(float)scale;	// 0x3079ca21
- (void)drawProcessedMask:(CGContextRef)mask atBounds:(CGRect)bounds inContext:(CGContextRef)context withScale:(float)scale;	// 0x3079c459
- (float)effectiveInteriorFillOpacity;	// 0x3079bfdd
- (CGColorRef)newBackgroundPatternColorWithSize:(CGSize)size contentScale:(float)scale;	// 0x3079c045
- (CGContextRef)newGlyphMaskContextForBounds:(CGRect)bounds fromContext:(CGContextRef)context withScale:(float)scale;	// 0x3079c24d
- (BOOL)useCoreImageRendering;	// 0x3079bfcd
@end

