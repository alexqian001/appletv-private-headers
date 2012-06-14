/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebHistoryPrivate;

@interface WebHistory : NSObject {
@private
	WebHistoryPrivate *_historyPrivate;	// 4 = 0x4
}
@property(assign) int historyAgeInDaysLimit;	// G=0x30d5c811; S=0x30d5c831; converted property
@property(assign) int historyItemLimit;	// G=0x30d5c855; S=0x30d5c875; converted property
+ (void)_removeAllVisitedLinks;	// 0x30d5cccd
+ (void)_setVisitedLinkTrackingEnabled:(BOOL)enabled;	// 0x30d5ccd1
+ (id)optionalSharedHistory;	// 0x30d1a041
+ (void)setOptionalSharedHistory:(id)history;	// 0x30d0545d
- (id)init;	// 0x30d052dd
- (void)_addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x30d1d575
- (id)_data;	// 0x30d21d1d
- (id)_itemForURLString:(id)urlstring;	// 0x30d287d1
- (void)_sendNotification:(id)notification entries:(id)entries;	// 0x30d1aae1
- (void)_visitedURL:(id)url withTitle:(id)title method:(id)method wasFailure:(BOOL)failure increaseVisitCount:(BOOL)count;	// 0x30d1a051
- (void)addItems:(id)items;	// 0x30d5c909
- (id)allItems;	// 0x30d5ccad
- (BOOL)containsURL:(id)url;	// 0x30d5c8e1
- (void)dealloc;	// 0x30d5ca11
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x30d5c811
// converted property getter: - (int)historyItemLimit;	// 0x30d5c855
- (id)itemForURL:(id)url;	// 0x30d1c5f5
- (BOOL)loadFromURL:(id)url error:(id *)error;	// 0x30d0fe4d
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x30d2b069
- (id)orderedLastVisitedDays;	// 0x30d2b0fd
- (void)removeAllItems;	// 0x30d5c955
- (void)removeItems:(id)items;	// 0x30d5c9bd
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x30d5c899
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x30d5c831
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x30d5c875
@end
