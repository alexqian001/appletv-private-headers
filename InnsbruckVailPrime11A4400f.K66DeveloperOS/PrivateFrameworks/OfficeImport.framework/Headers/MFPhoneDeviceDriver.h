/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import </libobjc.A.h>
#import "MFDeviceDriver.h"


@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver> {
	CGRect m_canvas;	// 4 = 0x4
	CGRect m_viewBox;	// 20 = 0x14
	CGAffineTransform m_viewBoxTransform;	// 36 = 0x24
	CGAffineTransform m_worldToDeviceTransform;	// 60 = 0x3c
	CGAffineTransform m_combinedTransform;	// 84 = 0x54
}
+ (int)getROP:(id)rop;	// 0x31769959
- (id)initWithCanvas:(CGRect)canvas;	// 0x317647d9
- (id).cxx_construct;	// 0x317647d5
- (int)activateTransform:(CGAffineTransform)transform;	// 0x317660e9
- (int)angleArc:(id)arc :(int)arg2 :(int)arg3 :(unsigned)arg4 :(double)arg5 :(double)arg6;	// 0x31991f49
- (int)arc:(id)arc :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x3187b515
- (int)arcTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x31991d81
- (int)bezier:(id)bezier :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x31862ce5
- (int)bezierTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;	// 0x317e6c39
- (int)bitBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(unsigned)arg9 :(CGAffineTransform *)arg10 :(unsigned)arg11;	// 0x317d2ef1
- (int)chord:(id)chord :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x319920f9
- (void)concatTransforms;	// 0x3176612d
- (id)createBitmap:(id)bitmap :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned)arg7;	// 0x3199227d
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x317d0ac5
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(const char *)arg4 :(unsigned)arg5 :(int)arg6;	// 0x317d2cdd
- (id)createFont:(int)font;	// 0x31764c45
- (id)createFont:(int)font :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x31767289
- (id)createFontIndirectW:(int)w :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22;	// 0x317cfe4d
- (id)createHatchBrush:(id)brush :(int)arg2;	// 0x318945c5
- (id)createNullBrush;	// 0x3176c6a1
- (id)createPath;	// 0x3176538d
- (id)createPatternBrush:(id)brush usePaletteForBilevel:(BOOL)bilevel;	// 0x318421ad
- (id)createPen;	// 0x317cf8f5
- (id)createPen:(int)pen :(int)arg2 :(id)arg3 :(double *)arg4;	// 0x317650c1
- (id)createRegionWithPath:(id)path;	// 0x31846d41
- (id)createRegionWithRects:(id)rects :(id)arg2;	// 0x318426e1
- (id)createSolidBrush:(id)brush;	// 0x3176528d
- (void)dealloc;	// 0x3176cafd
- (void)drawBezierPath:(id)path dc:(id)dc fill:(BOOL)fill stroke:(BOOL)stroke;	// 0x31769721
- (int)ellipse:(id)ellipse :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x3176bbc9
- (int)excludeClipRect:(CGRect)rect;	// 0x317e23a1
- (int)extTextOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int *)arg10 :(int)arg11;	// 0x31767ec1
- (CGRect)getCanvas;	// 0x317cdbc1
- (int)intersectClipRect:(CGRect)rect;	// 0x3176af25
- (int)lineTo:(id)to :(double)arg2 :(double)arg3;	// 0x317d1fa9
- (int)maskBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(id)arg9 :(int)arg10 :(int)arg11 :(unsigned)arg12 :(CGAffineTransform *)arg13 :(unsigned)arg14;	// 0x3199222d
- (int)patBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(unsigned)arg6;	// 0x31769035
- (int)pie:(id)pie :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x31841ae1
- (int)plgBlt:(id)blt :(CGPoint *)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(CGAffineTransform *)arg11 :(unsigned)arg12;	// 0x31992279
- (int)polyPolygon:(id)polygon :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x317d26e1
- (int)polyPolyline:(id)polyline :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x3188382d
- (int)polygon:(id)polygon :(CGPoint *)arg2 :(int)arg3;	// 0x3176b571
- (int)polyline:(id)polyline :(CGPoint *)arg2 :(int)arg3;	// 0x3176c805
- (int)rectangle:(id)rectangle :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x31770e79
- (int)removeClip;	// 0x317d4b4d
- (int)roundRect:(id)rect :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(double)arg6 :(double)arg7;	// 0x3188a689
- (int)setMetaRgn;	// 0x31846b21
- (void)setTransform:(CGAffineTransform)transform;	// 0x3176b3bd
- (int)setViewBox:(double)box :(double)arg2 :(double)arg3 :(double)arg4;	// 0x31766411
- (int)stretchBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int)arg10 :(unsigned)arg11 :(CGAffineTransform *)arg12 :(unsigned)arg13;	// 0x317d1281
- (int)textOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4;	// 0x3184ad6d
- (void)updateViewBoxTransform;	// 0x3176656d
@end
