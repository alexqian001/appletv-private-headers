/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXPivotTable : NSObject {
}
+ (int)edPivotAreaTypeFrom:(id)from;	// 0x34a30f35
+ (int)edPivotConditionalFormatScopeFrom:(id)from;	// 0x34a30ec1
+ (int)edPivotConditionalFormatTypeFrom:(id)from;	// 0x34a30e31
+ (int)edPivotDatFieldFormatFrom:(id)from;	// 0x349ba9f5
+ (int)edPivotFieldAxisFrom:(id)from;	// 0x349b9ae1
+ (int)edPivotItemTypeFrom:(id)from;	// 0x349b9fb9
+ (id)edPivotTableFromXmlPivotTableElement:(xmlNode *)xmlPivotTableElement state:(id)state;	// 0x349b837d
+ (void)readConditionalFormatsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x349bab35
+ (void)readDataFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x349ba6c5
+ (void)readFieldItemsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x349b9be5
+ (void)readFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x349ba1ad
+ (void)readItemsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x349ba281
+ (void)readLocationFrom:(xmlNode *)from toPivotTable:(id)pivotTable;	// 0x349b9289
+ (void)readPageFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x349ba57d
+ (void)readPivotAreaReferencesFrom:(xmlNode *)from toCollection:(id)collection;	// 0x34a30c69
+ (void)readPivotAreasFrom:(xmlNode *)from toCollection:(id)collection;	// 0x349bacfd
+ (void)readPivotFieldsFrom:(xmlNode *)from toCollection:(id)collection;	// 0x349b96a5
+ (void)readStyleInfoFrom:(xmlNode *)from toPivotTable:(id)pivotTable;	// 0x349b9479
@end
