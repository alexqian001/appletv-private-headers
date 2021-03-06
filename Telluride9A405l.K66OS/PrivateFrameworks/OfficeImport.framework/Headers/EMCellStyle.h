/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMStyle.h"

@class EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellStyle : CMStyle {
@private
	EDStyle *edStyle;	// 12 = 0xc
	BOOL _nameContainsItalic;	// 16 = 0x10
	BOOL _nameContainsBold;	// 17 = 0x11
}
- (id)init;	// 0x30be3941
- (id)initWithEDStyle:(id)edstyle;	// 0x30cdd421
- (id)_parseFontName:(id)name;	// 0x30cdd89d
- (void)addAlignmentStyle:(id)style;	// 0x30cdde21
- (void)addBordersStyle:(id)style;	// 0x30ce0821
- (void)addFillStyle:(id)style;	// 0x30cddcd1
- (void)addFontStyle:(id)style;	// 0x30cdd53d
- (void)changeWithContentFormatType:(int)contentFormatType;	// 0x30cdf259
- (void)changeWithContentWidth:(double)contentWidth columnWidth:(double)width;	// 0x30cdf0a9
@end

