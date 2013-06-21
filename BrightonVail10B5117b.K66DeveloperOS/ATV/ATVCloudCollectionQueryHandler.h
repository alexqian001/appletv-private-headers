/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCloudQueryHandler.h"
#import "ATVCloudCollectionQueryHandler.h"


@protocol ATVCloudCollectionQueryHandler
- (id)blankProperty;
- (Class)collectionClass;
- (id)countedPropertiesForATVProperties:(id)atvproperties;
- (unsigned)dmapResponseHeaderCode;
- (Class)entityClass;
- (id)foreignPersistentIDProperty;
- (id)mlPropertyForMLCountedProperty:(id)mlcountedProperty;
- (id)orderingPropertiesForProperty:(id)property;
@end

__attribute__((visibility("hidden")))
@interface ATVCloudCollectionQueryHandler : ATVCloudQueryHandler <ATVCloudCollectionQueryHandler> {
}
- (float)_durationOfAlbum:(unsigned long long)album;	// 0xe1d2d
- (void)_handleDAAPQuery:(id)query;	// 0xe1115
- (void)_handleQuery:(id)query;	// 0xe0595
- (id)_mlQueryForATVMediaQuery:(id)atvmediaQuery usingSections:(BOOL)sections;	// 0xe04b1
- (id)blankProperty;	// 0xe0499
- (Class)collectionClass;	// 0xe04ad
- (id)countedPropertiesForATVProperties:(id)atvproperties;	// 0xe049d
- (unsigned)dmapResponseHeaderCode;	// 0xe04a5
- (Class)entityClass;	// 0xe04a9
- (id)foreignPersistentIDProperty;	// 0xe0495
- (void)handleQuery:(id)query withContext:(void *)context;	// 0xe0445
- (id)mlPropertyForMLCountedProperty:(id)mlcountedProperty;	// 0xe04a1
- (id)orderingPropertiesForProperty:(id)property;	// 0xe0491
@end
