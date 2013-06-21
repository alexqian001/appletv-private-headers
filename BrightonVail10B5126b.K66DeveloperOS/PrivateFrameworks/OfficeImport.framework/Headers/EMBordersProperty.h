/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class EDBorders, TSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {
	EDBorders *edValue;	// 8 = 0x8
	TSUColor *mBorderColor;	// 12 = 0xc
	TSUColor *mBorderTopColor;	// 16 = 0x10
	TSUColor *mBorderLeftColor;	// 20 = 0x14
	TSUColor *mBorderBottomColor;	// 24 = 0x18
	TSUColor *mBorderRightColor;	// 28 = 0x1c
	int mBorderStyle[5];	// 32 = 0x20
	int mBorderWidth[5];	// 52 = 0x34
}
- (id)initWithEDBorders:(id)edborders;	// 0x348c4b41
- (id)initWithOADStroke:(id)oadstroke;	// 0x349e43e9
- (id)borderColor;	// 0x349e467d
- (int *)borderStyles;	// 0x349e468d
- (int *)borderWidths;	// 0x349e469d
- (id)colorString;	// 0x348c580d
- (id)copyWithZone:(NSZone *)zone;	// 0x349e4319
- (id)cssString;	// 0x348c51d1
- (id)cssStringForName:(id)name;	// 0x348c51a5
- (BOOL)hasSameColorsAs:(id)as;	// 0x349e47a1
- (BOOL)hasSameStylesAs:(id)as;	// 0x349e46c9
- (BOOL)hasSameWidthsAs:(id)as;	// 0x349e4735
- (BOOL)isEqual:(id)equal;	// 0x349e4249
- (BOOL)isNoneAtLocation:(int)location;	// 0x349e46ad
- (void)setBorderStyleAndWidth:(int)width location:(unsigned)location;	// 0x348c4ead
- (void)setNoneAtLocation:(int)location;	// 0x348c5179
- (id)stringFromColor:(id)color;	// 0x348c597d
- (id)stringFromStyleEnum:(int)styleEnum;	// 0x348c54e9
- (id)stringFromWidthEnum:(int)widthEnum;	// 0x348c57c5
- (id)styleHashNumber;	// 0x348c5421
- (id)styleString;	// 0x348c5255
- (id)widthHashNumber;	// 0x348c56fd
- (id)widthString;	// 0x348c5531
@end
