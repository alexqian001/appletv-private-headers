/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WebHistoryPrivate : NSObject {
@private
	NSMutableDictionary *_entriesByURL;	// 4 = 0x4
	HashMap<long long int,WTF::RetainPtr<NSMutableArray>,WTF::IntHash<long long unsigned int>,WTF::HashTraits<long long int>,WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > *_entriesByDate;	// 8 = 0x8
	NSMutableArray *_orderedLastVisitedDays;	// 12 = 0xc
	BOOL itemLimitSet;	// 16 = 0x10
	int itemLimit;	// 20 = 0x14
	BOOL ageInDaysLimitSet;	// 24 = 0x18
	int ageInDaysLimit;	// 28 = 0x1c
}
@property(assign) int historyAgeInDaysLimit;	// G=0x3537e47d; S=0x353ca625; converted property
@property(assign) int historyItemLimit;	// G=0x3537e3c1; S=0x353ca649; converted property
@property(readonly, retain) NSMutableArray *orderedLastVisitedDays;	// G=0x35399125; converted property
+ (void)initialize;	// 0x353733d1
- (id)init;	// 0x3537345d
- (BOOL)addItem:(id)item discardDuplicate:(BOOL)duplicate;	// 0x3537f8f9
- (void)addItemToDateCaches:(id)dateCaches;	// 0x3537fa41
- (void)addItems:(id)items;	// 0x353ca731
- (void)addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x3538b629
- (id)ageLimitDate;	// 0x3537e41d
- (id)allItems;	// 0x353ca7c9
- (BOOL)containsURL:(id)url;	// 0x353ca78d
- (id)data;	// 0x3538fdcd
- (void)dealloc;	// 0x353cac09
- (void)finalize;	// 0x353cab89
- (BOOL)findKey:(long long *)key forDay:(double)day;	// 0x3537fc69
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x3537e47d
// converted property getter: - (int)historyItemLimit;	// 0x3537e3c1
- (void)insertItem:(id)item forDateKey:(long long)dateKey;	// 0x3537fe2d
- (id)itemForURL:(id)url;	// 0x3538a6a9
- (id)itemForURLString:(id)urlstring;	// 0x3538a6dd
- (BOOL)loadFromURL:(id)url collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x3537dfc1
- (BOOL)loadHistoryGutsFromURL:(id)url savedItemsCount:(int *)count collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x3537dff1
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x35399095
// converted property getter: - (id)orderedLastVisitedDays;	// 0x35399125
- (BOOL)removeAllItems;	// 0x353caa69
- (BOOL)removeItem:(id)item;	// 0x353ca66d
- (BOOL)removeItemForURLString:(id)urlstring;	// 0x353cab11
- (BOOL)removeItemFromDateCaches:(id)dateCaches;	// 0x35388435
- (BOOL)removeItems:(id)items;	// 0x353ca6c9
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x353ca7e9
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x353ca625
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x353ca649
- (id)visitedURL:(id)url withTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x35388305
@end

