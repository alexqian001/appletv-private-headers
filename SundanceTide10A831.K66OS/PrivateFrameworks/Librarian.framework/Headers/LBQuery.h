/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

#import "Librarian-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSArray, NSThread, NSMetadataQuery, NSPredicate;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LBQuery : NSObject {
	NSMetadataQuery *_query;	// 4 = 0x4
	unsigned _accumulatedItemCount;	// 8 = 0x8
	NSMutableArray *_changes;	// 12 = 0xc
	NSMutableDictionary *_toBeRemoved;	// 16 = 0x10
	NSMutableDictionary *_toBeReplaced;	// 20 = 0x14
	NSMutableDictionary *_toBeInserted;	// 24 = 0x18
	NSMutableIndexSet *_removalSet;	// 28 = 0x1c
	NSMutableIndexSet *_replacementSet;	// 32 = 0x20
	NSMutableIndexSet *_insertionSet;	// 36 = 0x24
	bool _pendingChanges;	// 40 = 0x28
	bool _ubiquitousGatherComplete;	// 41 = 0x29
	int _queryState;	// 44 = 0x2c
	int _previousQueryState;	// 48 = 0x30
	BOOL _synchronous;	// 52 = 0x34
	NSArray *_values;	// 56 = 0x38
	NSArray *_sortingAttributes;	// 60 = 0x3c
	XXStruct_RaHehA _batchingParameters;	// 64 = 0x40
	NSMutableArray *_results;	// 88 = 0x58
	NSMutableDictionary *_resultsDict;	// 92 = 0x5c
	/*function-pointer*/ void *_create_result_fn;	// 96 = 0x60
	void *_create_result_context;	// 100 = 0x64
	/*function-pointer*/ void *_create_result_callbacks_equal;	// 104 = 0x68
	/*function-pointer*/ void *_create_result_callbacks_release;	// 108 = 0x6c
	/*function-pointer*/ void *_create_value_fn;	// 112 = 0x70
	void *_create_value_context;	// 116 = 0x74
	/*function-pointer*/ void *_create_value_callbacks_equal;	// 120 = 0x78
	/*function-pointer*/ void *_create_value_callbacks_release;	// 124 = 0x7c
	NSArray *_searchScopes;	// 128 = 0x80
	unsigned long _scopeOptions;	// 132 = 0x84
	/*function-pointer*/ void *_sort_fn;	// 136 = 0x88
	void *_sort_context;	// 140 = 0x8c
	NSObject<OS_dispatch_queue> *_notificationQueue;	// 144 = 0x90
	LBItemUpdateObserverRef _observer;	// 148 = 0x94
	NSThread *_executeThread;	// 152 = 0x98
	bool _pendingNote;	// 156 = 0x9c
	unsigned long _notifyInterval;	// 160 = 0xa0
	int _disableCount;	// 164 = 0xa4
	NSMutableDictionary *_created;	// 168 = 0xa8
	NSPredicate *_predicate;	// 172 = 0xac
	opaque_pthread_mutex_t _stateLock;	// 176 = 0xb0
}
@property(readonly, retain) NSPredicate *predicate;	// G=0x3308ce01; converted property
- (id)initWithQuery:(id)query values:(id)values sortingAttributes:(id)attributes items:(id)items;	// 0x3308ba19
- (void)__updateQueryResultForURL:(id)url info:(id)info updateType:(int)type;	// 0x3308c4e1
- (void)_createChangeSets;	// 0x3308d121
- (void)_didChange:(unsigned)change inSet:(id)set;	// 0x3308d06d
- (void)_didInsert:(id)insert;	// 0x3308d10d
- (void)_didRemove:(id)remove;	// 0x3308d0e5
- (void)_didReplace:(id)replace;	// 0x3308d0f9
- (void)_disableUpdates;	// 0x3308bfc1
- (void)_enableUpdates;	// 0x3308c065
- (void)_processChanges;	// 0x3308d461
- (void)_processUpdates;	// 0x3308d8d9
- (void)_runQuery;	// 0x3308ca19
- (void)_sendNote;	// 0x3308c209
- (void)_stop;	// 0x3308c189
- (void)_updateQueryResultForURL:(id)url info:(id)info updateType:(int)type;	// 0x3308c871
- (void)_willChange:(unsigned)change inSet:(id)set;	// 0x3308d031
- (void)_willInsert:(id)insert;	// 0x3308d0d1
- (void)_willRemove:(id)remove;	// 0x3308d0a9
- (void)_willReplace:(id)replace;	// 0x3308d0bd
- (void)addChangeToURL:(id)url withInfo:(id)info;	// 0x3308c465
- (void)addCreatedURL:(id)url withInfo:(id)info;	// 0x3308c3f9
- (void)addItemWithURL:(id)url usingInfo:(id)info;	// 0x3308c311
- (id)attributeValueForName:(id)name forResultAtIndex:(int)index;	// 0x3308cc39
- (unsigned)countOfResultsForAttributeName:(id)attributeName value:(id)value;	// 0x3308cca1
- (void)dealloc;	// 0x3308bc35
- (void)deleteURL:(id)url;	// 0x3308c3ad
- (void)disableUpdates;	// 0x3308c019
- (void)enableUpdates;	// 0x3308c13d
- (unsigned char)executeWithOptions:(unsigned long)options;	// 0x3308cb79
- (int)indexOfResult:(const void *)result;	// 0x3308cca5
- (void)performBlock:(id)block;	// 0x3308c815
- (void)postNote:(CFStringRef)note;	// 0x3308ddcd
// converted property getter: - (id)predicate;	// 0x3308ce01
- (void)processUpdates;	// 0x3308dda5
- (const void *)resultAtIndex:(int)index;	// 0x3308cd35
- (unsigned)resultCount;	// 0x3308cde1
- (void)runBlock:(id)block;	// 0x3308c7f1
- (void)sendNote;	// 0x3308c205
- (void)setBatchingParameters:(XXStruct_RaHehA)parameters;	// 0x3308ce11
- (void)setCreateResultFunction:(/*function-pointer*/ void *)function withContext:(void *)context callbacks:(const XXStruct_MSEYlC *)callbacks;	// 0x3308ce45
- (void)setCreateValueFunction:(/*function-pointer*/ void *)function withContext:(void *)context callbacks:(const XXStruct_MSEYlC *)callbacks;	// 0x3308cf25
- (void)setSearchScope:(id)scope withOptions:(unsigned long)options;	// 0x3308cfb9
- (void)setSortComparator:(/*function-pointer*/ void *)comparator withContext:(void *)context;	// 0x3308d011
- (void)startObserver;	// 0x3308c951
- (void)stop;	// 0x3308c1b5
- (void)updateQueryResultForURL:(id)url info:(id)info updateType:(int)type;	// 0x3308c86d
- (id)valuesOfAttribute:(id)attribute;	// 0x3308bead
@end

