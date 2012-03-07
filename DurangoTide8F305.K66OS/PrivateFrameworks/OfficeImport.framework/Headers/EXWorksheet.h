/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXWorksheet : NSObject {
}
+ (id)edSheetWithState:(id)state;	// 0x34522af5
+ (void)readColumnInfosFrom:(xmlNode *)from state:(id)state;	// 0x3454b25d
+ (void)readCommentTextFrom:(id)from;	// 0x345238a9
+ (void)readConditionalFormattingsFrom:(xmlNode *)from state:(id)state;	// 0x345b1c79
+ (void)readDataValidationsFrom:(xmlNode *)from state:(id)state;	// 0x34572c99
+ (bool)readDistinctSheetElementsFrom:(xmlTextReader *)from state:(id)state;	// 0x3452407d
+ (void)readHyperlinksFrom:(xmlNode *)from state:(id)state;	// 0x345b1cdd
+ (void)readOleObjectsFrom:(xmlNode *)from state:(id)state;	// 0x345b1d99
+ (void)readOtherSheetComponentsWithState:(id)state;	// 0x3452387d
+ (void)readPivotTables:(id)tables;	// 0x34523be9
+ (void)readTables:(id)tables;	// 0x34522e6d
+ (void)readWorksheetFormatPropertiesFrom:(xmlNode *)from state:(id)state;	// 0x34524671
+ (void)readWorksheetViewsFrom:(xmlNode *)from state:(id)state;	// 0x345244dd
+ (void)setupProcessors:(id)processors;	// 0x34522b79
@end
