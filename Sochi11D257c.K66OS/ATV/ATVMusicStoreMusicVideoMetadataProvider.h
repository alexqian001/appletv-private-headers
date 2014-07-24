/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreBaseMetadataProvider.h"


__attribute__((visibility("hidden")))
@interface ATVMusicStoreMusicVideoMetadataProvider : ATVMusicStoreBaseMetadataProvider {
}
+ (void)_initializeAbbreviatedTransformers;	// 0x20e77d
+ (void)_initializeDetailedTransformers;	// 0x20e665
+ (void)_initializeMappings:(id)mappings;	// 0x20e491
+ (void)initialize;	// 0x20e1e9
- (void)_populateAbbreviatedMetadata:(id)metadata;	// 0x20e855
- (void)_populateDetailedMetadata:(id)metadata;	// 0x20eb31
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x20e2bd
- (void)populateMetadataForControl:(id)control;	// 0x20e399
@end
