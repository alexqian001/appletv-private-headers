/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABBlip : NSObject {
}
+ (int)blipTypeForBlipSignature:(int)blipSignature;	// 0x3526f3ed
+ (id)compressMetafileData:(id)data info:(EshMetafileBlipInfo *)info;	// 0x35420bd5
+ (id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x3526f171
+ (id)dibFileContentsWithDibBlipData:(const OcBinaryData *)dibBlipData;	// 0x35420441
+ (id)readBlipFromBse:(id)bse;	// 0x351e3339
+ (id)readBlipFromEshBlip:(EshBlip *)eshBlip;	// 0x351e3425
+ (void)setMetafileBoundsFromPictData:(id)pictData info:(EshMetafileBlipInfo *)info;	// 0x3542043d
+ (id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo *)metafileInfo;	// 0x35420981
+ (EshBlip *)writeBlip:(id)blip;	// 0x35420559
+ (void)writeBlip:(id)blip toBlipStoreEntry:(EshBSE *)blipStoreEntry;	// 0x35420895
+ (void)writeEmptyBlipStoreEntry:(EshBSE *)entry;	// 0x35420539
@end
