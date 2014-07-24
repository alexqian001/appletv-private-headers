/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVSearchAgent : XXUnknownSuperclass {
	NSMutableDictionary *_resultsCache;	// 4 = 0x4
	NSMutableArray *_resultsCacheTerms;	// 8 = 0x8
	NSArray *_providerPriorityOrder;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *providerPriorityOrder;	// G=0x264521; S=0x264535; @synthesize=_providerPriorityOrder
+ (id)_searchTermCache;	// 0x264545
- (id)init;	// 0x263a05
- (void)cacheResults:(id)results forSearchTerm:(id)searchTerm;	// 0x264099
- (long)cacheSize;	// 0x26450d
- (id)cachedResultsForSearchTerm:(id)searchTerm;	// 0x264429
- (void)clearSavedSearchTerms;	// 0x263c05
- (id)contextMenuUtility;	// 0x264519
- (void)dealloc;	// 0x263a85
- (BOOL)handlePlayForObject:(id)object;	// 0x26451d
- (BOOL)isNetworkDependent;	// 0x264515
// declared property getter: - (id)providerPriorityOrder;	// 0x264521
- (void)purgeCache;	// 0x2643e9
- (void)saveSearchTerm:(id)term;	// 0x263cfd
- (id)savedSearchTerms;	// 0x263ae9
- (void)search:(id)search;	// 0x2644f5
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x264509
// declared property setter: - (void)setProviderPriorityOrder:(id)order;	// 0x264535
- (BOOL)showRecentSearches;	// 0x264511
@end
