/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSMetadataQuery : NSObject {
@private
	unsigned _flags;	// 4 = 0x4
	double _interval;	// 8 = 0x8
	id _private[11];	// 16 = 0x10
	void *_reserved;	// 60 = 0x3c
}
@property(assign) id delegate;	// G=0x3064afc1; S=0x3064afd5; converted property
@property(retain) id groupingAttributes;	// G=0x3064b2c9; S=0x3064b2dd; converted property
@property(assign) double notificationBatchingInterval;	// G=0x3064b515; S=0x3064b52d; converted property
@property(retain) id predicate;	// G=0x3064b075; S=0x3064b085; converted property
@property(retain) id searchItemURLs;	// G=0x3064b66d; S=0x3064b681; converted property
@property(retain) id searchScopes;	// G=0x3064b5a9; S=0x3064b5bd; converted property
@property(retain) id sortDescriptors;	// G=0x3064b141; S=0x3064b155; converted property
@property(retain) id valueListAttributes;	// G=0x3064b205; S=0x3064b219; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3064ab25
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3064aa45
- (id)init;	// 0x3064ab29
- (id)_allAttributes;	// 0x3064b469
- (void)_noteNote1:(id)a1;	// 0x3064b799
- (void)_noteNote2:(id)a2;	// 0x3064b7dd
- (void)_noteNote3:(id)a3;	// 0x3064b86d
- (void)_noteNote4:(id)a4;	// 0x3064b8fd
- (id)_queryString;	// 0x3064ba09
- (void)_recreateQuery;	// 0x3064bb11
- (void)_resetQueryState;	// 0x3064ba29
- (void)_setBatchingParams;	// 0x3064b731
- (id)_sortingAttributes;	// 0x3064b38d
- (void)_update;	// 0x3064c891
- (void)_zapResultArray;	// 0x3064c9e5
- (void)dealloc;	// 0x3064ac71
// converted property getter: - (id)delegate;	// 0x3064afc1
- (void)disableUpdates;	// 0x3064c7f1
- (void)enableUpdates;	// 0x3064c841
- (void)finalize;	// 0x3064aec1
- (id)groupedResults;	// 0x3064cee9
// converted property getter: - (id)groupingAttributes;	// 0x3064b2c9
- (unsigned)indexOfResult:(id)result;	// 0x3064cb65
- (BOOL)isGathering;	// 0x3064c7c9
- (BOOL)isStarted;	// 0x3064c7b5
- (BOOL)isStopped;	// 0x3064c7dd
// converted property getter: - (double)notificationBatchingInterval;	// 0x3064b515
// converted property getter: - (id)predicate;	// 0x3064b075
- (id)resultAtIndex:(unsigned)index;	// 0x3064c931
- (unsigned)resultCount;	// 0x3064c901
- (id)results;	// 0x3064ca5d
// converted property getter: - (id)searchItemURLs;	// 0x3064b66d
// converted property getter: - (id)searchScopes;	// 0x3064b5a9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3064afd5
// converted property setter: - (void)setGroupingAttributes:(id)attributes;	// 0x3064b2dd
// converted property setter: - (void)setNotificationBatchingInterval:(double)interval;	// 0x3064b52d
// converted property setter: - (void)setPredicate:(id)predicate;	// 0x3064b085
// converted property setter: - (void)setSearchItemURLs:(id)urls;	// 0x3064b681
// converted property setter: - (void)setSearchScopes:(id)scopes;	// 0x3064b5bd
// converted property setter: - (void)setSortDescriptors:(id)descriptors;	// 0x3064b155
// converted property setter: - (void)setValueListAttributes:(id)attributes;	// 0x3064b219
// converted property getter: - (id)sortDescriptors;	// 0x3064b141
- (BOOL)startQuery;	// 0x3064c5e9
- (void)stopQuery;	// 0x3064c6cd
// converted property getter: - (id)valueListAttributes;	// 0x3064b205
- (id)valueLists;	// 0x3064cba1
- (id)valueOfAttribute:(id)attribute forResultAtIndex:(unsigned)index;	// 0x3064d0a1
@end
