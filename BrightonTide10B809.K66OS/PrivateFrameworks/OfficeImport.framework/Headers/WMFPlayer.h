/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class MFGraphicsDevice;

@interface WMFPlayer : NSObject {
	MFGraphicsDevice *m_gdi;	// 4 = 0x4
	long m_records;	// 8 = 0x8
	unsigned short m_windowsVersion;	// 12 = 0xc
	BOOL m_boundsSet;	// 14 = 0xe
	BOOL m_ignoreSetWindowOrg;	// 15 = 0xf
}
@property(readonly, assign) long records;	// G=0x34a65281; converted property
+ (CGRect)boundsInLogicalUnits:(id)logicalUnits;	// 0x34a65be5
+ (CGRect)boundsInPoints:(id)points;	// 0x34a65ced
+ (CGRect)placeableBounds:(const char *)bounds;	// 0x349a5ecd
+ (CGRect)windowBounds:(id)bounds;	// 0x34a65a55
- (id)initWithGraphicsDevice:(id)graphicsDevice;	// 0x34952c39
- (void)dealloc;	// 0x34954a05
- (void)done;	// 0x34954965
- (id)parseRegion:(unsigned)region :(const char *)arg2;	// 0x349d5e91
- (int)play:(unsigned)play :(const char *)arg2;	// 0x349532b1
- (int)playArc:(unsigned)arc :(const char *)arg2;	// 0x34a653d1
- (int)playBitBlt:(unsigned)blt :(const char *)arg2;	// 0x34a65295
- (int)playChord:(unsigned)chord :(const char *)arg2;	// 0x34a65489
- (int)playCreateBrushIndirect:(unsigned)indirect :(const char *)arg2;	// 0x34953b41
- (int)playCreateDIBPatternBrush:(unsigned)brush :(const char *)arg2;	// 0x349c1afd
- (int)playCreateFontIndirect:(unsigned)indirect :(const char *)arg2;	// 0x34954a59
- (int)playCreatePalette:(unsigned)palette :(const char *)arg2;	// 0x349b5ab9
- (int)playCreatePatternBrush:(unsigned)brush :(const char *)arg2;	// 0x34a658a9
- (int)playCreatePenIndirect:(unsigned)indirect :(const char *)arg2;	// 0x34953e35
- (int)playCreateRegion:(unsigned)region :(const char *)arg2;	// 0x349d5e45
- (int)playDeleteObject:(unsigned)object :(const char *)arg2;	// 0x34954571
- (int)playDibBitBlt:(unsigned)blt :(const char *)arg2;	// 0x349c19bd
- (int)playDibStretchBlt:(unsigned)blt :(const char *)arg2;	// 0x34955e8d
- (int)playEllipse:(unsigned)ellipse :(const char *)arg2;	// 0x349c2a8d
- (int)playExcludeClipRect:(unsigned)rect :(const char *)arg2;	// 0x349b5439
- (int)playExtTextOut:(unsigned)anOut :(const char *)arg2;	// 0x349b5619
- (int)playFillRegion:(unsigned)region :(const char *)arg2;	// 0x34a65945
- (int)playFrameRegion:(unsigned)region :(const char *)arg2;	// 0x34a6598d
- (int)playHeader:(unsigned)header :(const char *)arg2;	// 0x34952ed1
- (int)playIntersectClipRect:(unsigned)rect :(const char *)arg2;	// 0x349acf45
- (int)playInvertRegion:(unsigned)region :(const char *)arg2;	// 0x34a659ed
- (int)playLineTo:(unsigned)to :(const char *)arg2;	// 0x349b5541
- (int)playMoveTo:(unsigned)to :(const char *)arg2;	// 0x349b54d9
- (int)playOffsetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x34a656a5
- (int)playOffsetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x34a65659
- (int)playPaintRegion:(unsigned)region :(const char *)arg2;	// 0x34a65a21
- (int)playPatBlt:(unsigned)blt :(const char *)arg2;	// 0x349c1799
- (int)playPie:(unsigned)pie :(const char *)arg2;	// 0x349d5d11
- (int)playPolyPolygon:(unsigned)polygon :(const char *)arg2;	// 0x349acd65
- (int)playPolygon:(unsigned)polygon :(const char *)arg2;	// 0x34953fe9
- (int)playPolyline:(unsigned)polyline :(const char *)arg2;	// 0x3495471d
- (int)playRealizePalette:(unsigned)palette :(const char *)arg2;	// 0x349c1869
- (int)playRectangle:(unsigned)rectangle :(const char *)arg2;	// 0x349b55ad
- (int)playResizePalette:(unsigned)palette :(const char *)arg2;	// 0x34a65871
- (int)playRestoreDC:(unsigned)dc :(const char *)arg2;	// 0x349563bd
- (int)playRoundRect:(unsigned)rect :(const char *)arg2;	// 0x34a65541
- (int)playSaveDC:(unsigned)dc :(const char *)arg2;	// 0x34954efd
- (int)playScaleViewportExt:(unsigned)ext :(const char *)arg2;	// 0x349c2b91
- (int)playScaleWindowExt:(unsigned)ext :(const char *)arg2;	// 0x34a655f1
- (int)playSelectClipRegion:(unsigned)region :(const char *)arg2;	// 0x349c6dad
- (int)playSelectObject:(unsigned)object :(const char *)arg2;	// 0x34953dd1
- (int)playSelectPalette:(unsigned)palette :(const char *)arg2;	// 0x349b5cbd
- (int)playSetBkColour:(unsigned)colour :(const char *)arg2;	// 0x34955da9
- (int)playSetBkMode:(unsigned)mode :(const char *)arg2;	// 0x34954e85
- (int)playSetMapMode:(unsigned)mode :(const char *)arg2;	// 0x34955e4d
- (int)playSetPaletteEntries:(unsigned)entries :(const char *)arg2;	// 0x34a6578d
- (int)playSetPolyFillMode:(unsigned)mode :(const char *)arg2;	// 0x34953f79
- (int)playSetROP2:(unsigned)a2 :(const char *)arg2;	// 0x34953f41
- (int)playSetStretchBltMode:(unsigned)mode :(const char *)arg2;	// 0x3495674d
- (int)playSetTextAlign:(unsigned)align :(const char *)arg2;	// 0x34955bfd
- (int)playSetTextCharExtra:(unsigned)extra :(const char *)arg2;	// 0x349c2af9
- (int)playSetTextColour:(unsigned)colour :(const char *)arg2;	// 0x34955d05
- (int)playSetTextJustification:(unsigned)justification :(const char *)arg2;	// 0x34955cb9
- (int)playSetViewportExt:(unsigned)ext :(const char *)arg2;	// 0x34a656f1
- (int)playSetViewportOrg:(unsigned)org :(const char *)arg2;	// 0x34a6573d
- (int)playSetWindowExt:(unsigned)ext :(const char *)arg2;	// 0x349539b9
- (int)playSetWindowOrg:(unsigned)org :(const char *)arg2;	// 0x34953959
- (int)playStretchDib:(unsigned)dib :(const char *)arg2;	// 0x3495678d
- (int)playTextOut:(unsigned)anOut :(const char *)arg2;	// 0x349bb065
- (int)playUnknown:(unsigned)unknown :(unsigned)arg2 :(const char *)arg3;	// 0x34a65291
- (int)playUnsupported:(unsigned)unsupported :(const char *)arg2 :(const char *)arg3;	// 0x34954a55
// converted property getter: - (long)records;	// 0x34a65281
@end

