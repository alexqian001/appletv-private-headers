/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXCellFormatTable : NSObject {
}
+ (void)readCellFormatsFrom:(xmlNode *)from cellStyleXfsOffset:(unsigned)offset isStyle:(bool)style state:(id)state;	// 0x34520ce5
+ (void)readFromCellStyleXfsElement:(xmlNode *)cellStyleXfsElement state:(id)state;	// 0x345214e5
+ (void)readFromCellStylesElement:(xmlNode *)cellStylesElement state:(id)state;	// 0x3452150d
+ (void)readFromCellXfsElement:(xmlNode *)cellXfsElement state:(id)state;	// 0x34520c21
@end

