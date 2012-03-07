/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "MFDeviceDriver.h"

@class NSAffineTransform;

__attribute__((visibility("hidden")))
@interface MFCocoaDeviceDriver : NSObject <MFDeviceDriver> {
@private
	CGRect m_canvas;	// 4 = 0x4
	CGRect m_viewBox;	// 20 = 0x14
	NSAffineTransform *m_viewBoxTransform;	// 36 = 0x24
	NSAffineTransform *m_worldToDeviceTransform;	// 40 = 0x28
	NSAffineTransform *m_combinedTransform;	// 44 = 0x2c
}
+ (int)getROP:(id)rop;	// 0x34454825
- (id)initWithCanvas:(CGRect)canvas;	// 0x3444f449
- (int)activateTransform:(id)transform;	// 0x34451c81
- (int)angleArc:(id)arc :(int)arg2 :(int)arg3 :(unsigned long)arg4 :(double)arg5 :(double)arg6;	// 0x345f1b21
- (int)arc:(id)arc :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x3456368d
- (int)arcTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x345f1cc9
- (int)bezier:(id)bezier :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x3454fd6d
- (int)bezierTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;	// 0x344de099
- (int)bitBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(unsigned long)arg9 :(CGAffineTransform *)arg10 :(unsigned long)arg11;	// 0x34453f31
- (int)chord:(id)chord :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x345f1e81
- (void)concatTransforms;	// 0x344517b9
- (id)createBitmap:(id)bitmap :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned)arg7;	// 0x345f1a41
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x344c45b5
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(const char *)arg4 :(unsigned)arg5 :(int)arg6;	// 0x34453cf9
- (id)createFont:(int)font;	// 0x3444f885
- (id)createFont:(long)font :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x3445a891
- (id)createFontIndirectW:(long)w :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22;	// 0x34452ca5
- (id)createHatchBrush:(id)brush :(int)arg2;	// 0x345f1a9d
- (id)createNullBrush;	// 0x34452501
- (id)createPath;	// 0x3445000d
- (id)createPatternBrush:(id)brush usePaletteForBilevel:(BOOL)bilevel;	// 0x34535f79
- (id)createPen;	// 0x34452551
- (id)createPen:(int)pen :(long)arg2 :(id)arg3 :(double *)arg4;	// 0x3444fd01
- (id)createRegionWithPath:(id)path;	// 0x3453a4f1
- (id)createRegionWithRects:(id)rects :(id)arg2;	// 0x345361ad
- (id)createSolidBrush:(id)brush;	// 0x3444feed
- (void)dealloc;	// 0x3445f735
- (void)drawBezierPath:(id)path dc:(id)dc fill:(BOOL)fill stroke:(BOOL)stroke;	// 0x34454601
- (int)ellipse:(id)ellipse :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x3446c2b1
- (int)excludeClipRect:(CGRect)rect;	// 0x344d6df1
- (int)extTextOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int *)arg10 :(int)arg11;	// 0x34453385
- (int)intersectClipRect:(CGRect)rect;	// 0x3445bbf5
- (int)lineTo:(id)to :(double)arg2 :(double)arg3;	// 0x34454ea5
- (int)maskBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(id)arg9 :(int)arg10 :(int)arg11 :(unsigned long)arg12 :(CGAffineTransform *)arg13 :(unsigned long)arg14;	// 0x345f1abd
- (int)patBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(unsigned long)arg6;	// 0x34453fe1
- (int)pie:(id)pie :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x345358bd
- (int)plgBlt:(id)blt :(CGPoint *)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12;	// 0x345f1a3d
- (int)polyPolygon:(id)polygon :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x34457e31
- (int)polyPolyline:(id)polyline :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x34569381
- (int)polygon:(id)polygon :(CGPoint *)arg2 :(int)arg3;	// 0x34467cf1
- (int)polyline:(id)polyline :(CGPoint *)arg2 :(int)arg3;	// 0x3445c3cd
- (int)rectangle:(id)rectangle :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x3446c115
- (int)removeClip;	// 0x3445ca55
- (int)roundRect:(id)rect :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(double)arg6 :(double)arg7;	// 0x3456f9c5
- (int)setMetaRgn;	// 0x3453a2e5
- (void)setTransform:(id)transform;	// 0x3445bfd9
- (int)setViewBox:(double)box :(double)arg2 :(double)arg3 :(double)arg4;	// 0x344515d9
- (int)stretchBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int)arg10 :(unsigned long)arg11 :(CGAffineTransform *)arg12 :(unsigned long)arg13;	// 0x34453f9d
- (int)textOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4;	// 0x3453cc5d
- (void)updateViewBoxTransform;	// 0x3445170d
@end
