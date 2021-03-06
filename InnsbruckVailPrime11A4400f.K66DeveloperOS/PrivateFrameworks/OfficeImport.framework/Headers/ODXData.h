/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface ODXData : NSObject {
}
+ (void)associatePresentationsInIdMap:(id)idMap;	// 0x31850831
+ (void)readConnectionFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x3184feb9
+ (void)readConnectionListFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x3184fe09
+ (int)readConnectionTypeFromNode:(xmlNode *)node;	// 0x31850309
+ (id)readModelIdentifierFromNode:(xmlNode *)node attributeName:(const char *)name;	// 0x3184faa1
+ (void)readNode:(xmlNode *)node toDiagram:(id)diagram state:(id)state;	// 0x3184ef75
+ (id)readPointFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x3184f1b1
+ (id)readPointListFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x3184f0b9
+ (int)readPointTypeFromNode:(xmlNode *)node;	// 0x3184f5c5
@end

