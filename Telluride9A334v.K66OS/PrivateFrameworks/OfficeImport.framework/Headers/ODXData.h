/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ODXData : NSObject {
}
+ (void)associatePresentationsInIdMap:(id)idMap;	// 0x356ab381
+ (void)readConnectionFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x356aa97d
+ (void)readConnectionListFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x356aa8d1
+ (int)readConnectionTypeFromNode:(xmlNode *)node;	// 0x356aae51
+ (id)readModelIdentifierFromNode:(xmlNode *)node attributeName:(const char *)name;	// 0x356aa511
+ (void)readNode:(xmlNode *)node toDiagram:(id)diagram state:(id)state;	// 0x356a9825
+ (id)readPointFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x356a9a75
+ (id)readPointListFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x356a9975
+ (int)readPointTypeFromNode:(xmlNode *)node;	// 0x356a9ecd
@end

