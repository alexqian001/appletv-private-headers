/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXWorksheet : NSObject {
}
+ (id)edSheetWithState:(id)state;	// 0x3490ea91
+ (void)readColumnInfosFrom:(xmlNode *)from state:(id)state;	// 0x349867c1
+ (void)readCommentTextFrom:(id)from;	// 0x3490fcf1
+ (void)readConditionalFormattingsFrom:(xmlNode *)from state:(id)state;	// 0x34a349e9
+ (void)readDataValidationsFrom:(xmlNode *)from state:(id)state;	// 0x349badd1
+ (bool)readDistinctSheetElementsFrom:(xmlTextReader *)from state:(id)state;	// 0x34910449
+ (void)readHyperlinksFrom:(xmlNode *)from state:(id)state;	// 0x34a34a4d
+ (void)readOleObjectsFrom:(xmlNode *)from state:(id)state;	// 0x349c9829
+ (void)readOtherSheetComponentsWithState:(id)state;	// 0x3490fcbd
+ (void)readPivotTables:(id)tables;	// 0x34910085
+ (void)readTables:(id)tables;	// 0x3490ee59
+ (void)readWorksheetFormatPropertiesFrom:(xmlNode *)from state:(id)state;	// 0x34910aa5
+ (void)readWorksheetViewsFrom:(xmlNode *)from state:(id)state;	// 0x349108fd
+ (void)setupProcessors:(id)processors;	// 0x3490eb1d
@end

