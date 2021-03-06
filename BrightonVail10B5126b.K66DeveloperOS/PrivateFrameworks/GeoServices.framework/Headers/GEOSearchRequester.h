/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOSearchRequester : NSObject {
	NSMapTable *_pendingSearches;	// 4 = 0x4
	NSLock *_pendingSearchesLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
}
+ (id)sharedSearchRequester;	// 0x33f51b29
- (id)init;	// 0x33f51b5d
- (void)cancelSearch:(id)search;	// 0x33f9c449
- (void)completions:(id)completions timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x33f6ae21
- (void)dealloc;	// 0x33f9bef1
- (void)registerProvider:(Class)provider;	// 0x33f51c3d
- (void)search:(id)search finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x33f6eb79
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x33f6ebb9
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error isCompletions:(BOOL)completions;	// 0x33f6ae5d
- (void)search:(id)search useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement networkActivity:(id)activity error:(id)error;	// 0x33f9bf69
@end

