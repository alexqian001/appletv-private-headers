/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSSet, MPMediaItemCollection, NSArray, MPMediaQuerySectionInfo, MPMediaLibrary;

@interface MPMediaQuery : NSObject <NSCoding, NSCopying> {
	MPMediaQueryInternal _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) unsigned _countOfCollections;	// G=0x36cda5e9; 
@property(readonly, assign, nonatomic) unsigned _countOfItems;	// G=0x36cda5c5; 
@property(readonly, assign, nonatomic) BOOL _hasCollections;	// G=0x36cda599; 
@property(readonly, assign, nonatomic) BOOL _hasItems;	// G=0x36cda56d; 
@property(assign, nonatomic) MPMediaQueryInternal _internal;	// G=0x36cdb60d; S=0x36cdb635; @synthesize
@property(readonly, assign, nonatomic) MPMediaItemCollection *collectionByJoiningCollections;	// G=0x36d1cb7d; 
@property(readonly, assign, nonatomic) NSArray *collectionPersistentIdentifiers;	// G=0x36cda631; 
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;	// G=0x36cda4d1; S=0x36cda519; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;	// G=0x36cda67d; 
@property(readonly, assign, nonatomic) NSArray *collectionSections;	// G=0x36cdabe9; 
@property(readonly, assign, nonatomic) NSArray *collections;	// G=0x36cd9d15; 
@property(retain) id criteria;	// G=0x36cdb5b5; S=0x36cdb5c9; converted property
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;	// G=0x36cda7e5; 
@property(retain, nonatomic) NSSet *filterPredicates;	// G=0x36cd9a25; S=0x36cd9a6d; 
@property(assign, nonatomic) int groupingType;	// G=0x36cd9d4d; S=0x36cd9d71; 
@property(readonly, assign, nonatomic) NSArray *itemPersistentIdentifiers;	// G=0x36cda60d; 
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;	// G=0x36cda459; S=0x36cda47d; 
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;	// G=0x36cda655; 
@property(readonly, assign, nonatomic) NSArray *itemSections;	// G=0x36cdabc1; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x36cd9c29; 
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;	// G=0x36cd9bd5; S=0x36cd9be5; 
@property(copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;	// G=0x36cda6f9; S=0x36cda6a5; 
@property(assign, nonatomic) BOOL sortItems;	// G=0x36cda771; S=0x36cda741; 
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;	// G=0x36cdab21; 
@property(assign, nonatomic) BOOL useSections;	// G=0x36cda7c1; S=0x36cda79d; 
@property(readonly, assign, nonatomic) BOOL willGroupEntities;	// G=0x36cdab4d; 
+ (void)initFilteringDisabled;	// 0x36cd9dc1
+ (id)ITunesUAudioQuery;	// 0x36cd9521
+ (id)activeGeniusPlaylist;	// 0x36d1c4c9
+ (id)albumsQuery;	// 0x36cd917d
+ (id)artistsQuery;	// 0x36cd924d
+ (id)audibleAudiobooksQuery;	// 0x36cd9821
+ (id)audiobooksQuery;	// 0x36cd9769
+ (id)compilationsQuery;	// 0x36cd989d
+ (id)composersQuery;	// 0x36cd996d
+ (id)geniusMixesQuery;	// 0x36cda359
+ (id)genresQuery;	// 0x36cd99c9
+ (void)initialize;	// 0x36cd85d9
+ (BOOL)isFilteringDisabled;	// 0x36cd9e91
+ (id)movieRentalsQuery;	// 0x36cda225
+ (id)moviesQuery;	// 0x36cda16d
+ (id)musicVideosQuery;	// 0x36cd9ffd
+ (id)playlistsQuery;	// 0x36cd93f5
+ (id)podcastsQuery;	// 0x36cd9451
+ (void)setFilteringDisabled:(BOOL)disabled;	// 0x36cd9e11
+ (id)songsQuery;	// 0x36cd931d
+ (id)tvShowsQuery;	// 0x36cda0b5
+ (id)videoITunesUAudioQuery;	// 0x36cd9645
+ (id)videoPodcastsQuery;	// 0x36cda2a1
+ (id)videosQuery;	// 0x36cd9f45
- (id)init;	// 0x36cd8629
- (id)initWithCoder:(id)coder;	// 0x36cd8bc5
- (id)initWithCriteria:(id)criteria library:(id)library;	// 0x36cd863d
- (id)initWithEntities:(id)entities entityType:(int)type;	// 0x36cd87b9
- (id)initWithFilterPredicates:(id)filterPredicates;	// 0x36cd8745
- (id)initWithFilterPredicatesInternal:(id)filterPredicatesInternal;	// 0x36cd86b1
// declared property getter: - (unsigned)_countOfCollections;	// 0x36cda5e9
// declared property getter: - (unsigned)_countOfItems;	// 0x36cda5c5
- (void)_enumerateCollectionsUsingBlock:(id)block;	// 0x36cdb24d
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x36cdb0cd
// declared property getter: - (BOOL)_hasCollections;	// 0x36cda599
// declared property getter: - (BOOL)_hasItems;	// 0x36cda56d
// declared property getter: - (MPMediaQueryInternal)_internal;	// 0x36cdb60d
- (BOOL)_isFilteringDisabled;	// 0x36cdb091
// declared property getter: - (id)_orderingProperties;	// 0x36cda6f9
- (id)_sanitizedQuery;	// 0x36cdac11
// declared property setter: - (void)_setOrderingProperties:(id)properties;	// 0x36cda6a5
- (BOOL)_updatePredicateForProperty:(id)property withPropertyPredicate:(id)propertyPredicate;	// 0x36d1c969
- (id)_valueForAggregateFunction:(id)aggregateFunction onProperty:(id)property entityType:(int)type;	// 0x36cdac85
- (void)addFilterPredicate:(id)predicate;	// 0x36cd9ac1
// declared property getter: - (id)collectionByJoiningCollections;	// 0x36d1cb7d
// declared property getter: - (id)collectionPersistentIdentifiers;	// 0x36cda631
// declared property getter: - (id)collectionPropertiesToFetch;	// 0x36cda4d1
// declared property getter: - (id)collectionSectionInfo;	// 0x36cda67d
// declared property getter: - (id)collectionSections;	// 0x36cdabe9
// declared property getter: - (id)collections;	// 0x36cd9d15
- (id)copyByRemovingStaticEntities;	// 0x36cd9125
- (id)copyWithZone:(NSZone *)zone;	// 0x36cd8fa9
// converted property getter: - (id)criteria;	// 0x36cdb5b5
- (void)dealloc;	// 0x36cd8809
- (id)description;	// 0x36cd8861
- (void)encodeWithCoder:(id)coder;	// 0x36cd8e31
// declared property getter: - (BOOL)excludesEntitiesWithBlankNames;	// 0x36cda7e5
// declared property getter: - (id)filterPredicates;	// 0x36cd9a25
- (unsigned)groupingThreshold;	// 0x36cdab49
// declared property getter: - (int)groupingType;	// 0x36cd9d4d
- (BOOL)hasDownloadableEntities;	// 0x36d6f9c1
- (BOOL)hasDownloadingEntities;	// 0x36d6f9e9
- (unsigned)hash;	// 0x36cd8b85
- (BOOL)isEqual:(id)equal;	// 0x36cd8ac9
// declared property getter: - (id)itemPersistentIdentifiers;	// 0x36cda60d
// declared property getter: - (id)itemPropertiesToFetch;	// 0x36cda459
// declared property getter: - (id)itemSectionInfo;	// 0x36cda655
// declared property getter: - (id)itemSections;	// 0x36cdabc1
// declared property getter: - (id)items;	// 0x36cd9c29
// declared property getter: - (id)mediaLibrary;	// 0x36cd9bd5
- (id)mediaQueryWithDownloadableEntities;	// 0x36d6fa11
- (id)mediaQueryWithDownloadingEntities;	// 0x36d6fcf5
- (id)predicateForProperty:(id)property;	// 0x36d1c675
- (void)removeFilterPredicate:(id)predicate;	// 0x36cd9b49
- (void)removePredicatesForProperty:(id)property;	// 0x36d1c79d
// declared property setter: - (void)setCollectionPropertiesToFetch:(id)fetch;	// 0x36cda519
// converted property setter: - (void)setCriteria:(id)criteria;	// 0x36cdb5c9
- (void)setFilterPredicate:(id)predicate forProperty:(id)property;	// 0x36d1c8d9
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x36cd9a6d
- (void)setFilterPropertyPredicate:(id)predicate;	// 0x36d1c935
// declared property setter: - (void)setGroupingType:(int)type;	// 0x36cd9d71
// declared property setter: - (void)setItemPropertiesToFetch:(id)fetch;	// 0x36cda47d
// declared property setter: - (void)setMediaLibrary:(id)library;	// 0x36cd9be5
// declared property setter: - (void)setSortItems:(BOOL)items;	// 0x36cda741
- (void)setStaticEntities:(id)entities entityType:(int)type;	// 0x36cdb56d
// declared property setter: - (void)setUseSections:(BOOL)sections;	// 0x36cda79d
// declared property setter: - (void)set_internal:(MPMediaQueryInternal)internal;	// 0x36cdb635
// declared property getter: - (BOOL)sortItems;	// 0x36cda771
// declared property getter: - (BOOL)specifiesPlaylistItems;	// 0x36cdab21
- (BOOL)updateFilterPredicatesToHideUnreachableWhenOfflineCloudContent:(BOOL)hideUnreachableWhenOfflineCloudContent;	// 0x36d1c9e9
// declared property getter: - (BOOL)useSections;	// 0x36cda7c1
- (id)valueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property;	// 0x36cdb06d
- (id)valueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property;	// 0x36cdb049
// declared property getter: - (BOOL)willGroupEntities;	// 0x36cdab4d
@end

