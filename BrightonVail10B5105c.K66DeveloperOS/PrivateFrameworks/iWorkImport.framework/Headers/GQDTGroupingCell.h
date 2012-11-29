/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTCell.h"


@interface GQDTGroupingCell : GQDTCell {
	unsigned short mLevel;	// 16 = 0x10
	unsigned short mRowIdx;	// 18 = 0x12
	unsigned short mRowCount;	// 20 = 0x14
	BOOL mIsCollapsed;	// 22 = 0x16
	id mValue;	// 24 = 0x18
	id mFormat;	// 28 = 0x1c
	CFBundleRef mProcessorBundle;	// 32 = 0x20
	BOOL mHasValidFormulaValue;	// 36 = 0x24
	CFStringRef mFormulaValue;	// 40 = 0x28
}
+ (CFStringRef)displayTypeString:(int)string;	// 0x32d26f45
- (CFStringRef)createFormattedValue;	// 0x32d26d2d
- (void)dealloc;	// 0x32d26c49
- (BOOL)hasFormulaValue;	// 0x32d26f35
- (BOOL)isCollapsed;	// 0x32d26cf1
- (unsigned short)level;	// 0x32d26cc1
- (int)readAttributes:(xmlTextReader *)attributes;	// 0x32d27389
- (int)readElement:(xmlTextReader *)element;	// 0x32d27225
- (int)readRootFormat:(xmlTextReader *)format;	// 0x32d272c5
- (int)readValue:(xmlTextReader *)value;	// 0x32d27141
- (unsigned short)rowCount;	// 0x32d26ce1
- (unsigned short)rowIdx;	// 0x32d26cd1
- (void)setProcessorBundle:(CFBundleRef)bundle;	// 0x32d27379
- (id)value;	// 0x32d26d01
@end
