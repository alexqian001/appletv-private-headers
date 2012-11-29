/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBGraphic : NSObject {
}
+ (int)objectTypeForShape:(id)shape;	// 0x37aaf315
+ (void)readChart:(id)chart chartIndex:(int)index state:(id)state;	// 0x37a0c77d
+ (id)readGraphicWithDictionary:(id)dictionary state:(id)state;	// 0x37954d21
+ (void)readGraphicsInChart:(id)chart state:(id)state;	// 0x37a0f43d
+ (void)readGraphicsWithState:(id)state;	// 0x37954aed
+ (void)readImage:(id)image xlGraphicsInfo:(XlGraphicsInfo *)info state:(id)state;	// 0x37aaf051
+ (id)readMainChartWithState:(id)state;	// 0x37a0c425
+ (void)readNotesWithDictionary:(id)dictionary state:(id)state;	// 0x379572ed
+ (void)readOle:(id)ole xlGraphicsInfo:(XlGraphicsInfo *)info state:(id)state;	// 0x37a71c15
@end
