/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library
#import "CPDisposable.h"


@interface CPFontKerning : NSObject <CPDisposable> {
	CFDataRef kernTable;	// 4 = 0x4
	char *dataPtr;	// 8 = 0x8
	unsigned offset;	// 12 = 0xc
	unsigned kernTableLength;	// 16 = 0x10
	CFDictionaryRef kernDictionary;	// 20 = 0x14
	BOOL override;	// 24 = 0x18
	BOOL valid;	// 25 = 0x19
}
- (id)initWithCGFont:(CGFontRef)cgfont;	// 0x31f6aed9
- (id)initWithKernData:(CFDataRef)kernData;	// 0x31f6ae3d
- (CFDictionaryRef)createKernTable;	// 0x31f6af7d
- (void)dealloc;	// 0x31f6b0b5
- (void)dispose;	// 0x31f6af15
- (void)doKerningPair;	// 0x31f6b015
- (void)doOTSubtable;	// 0x31f6aca1
- (void)doSubtableFormat0;	// 0x31f6ab7d
- (void)doSubtableFormat1;	// 0x31f6aae5
- (void)doSubtableFormat2;	// 0x31f6aae9
- (void)doSubtableFormat3;	// 0x31f6aaed
- (void)doTTSubtable;	// 0x31f6abe5
- (void)doTable;	// 0x31f6ad45
- (void)finalize;	// 0x31f6af3d
- (unsigned char)readByte;	// 0x31f6aa95
- (short)readShort;	// 0x31f6ab19
- (unsigned)readUnsignedLong;	// 0x31f6ab31
- (unsigned short)readUnsignedShort;	// 0x31f6aaf1
@end

