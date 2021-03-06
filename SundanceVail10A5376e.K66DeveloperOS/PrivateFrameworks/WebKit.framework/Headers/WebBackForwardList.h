/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebBackForwardListPrivate;

@interface WebBackForwardList : NSObject {
	WebBackForwardListPrivate *_private;	// 4 = 0x4
}
@property(assign) int capacity;	// G=0x3231bcc9; S=0x3231bce1; converted property
@property(assign) unsigned pageCacheSize;	// G=0x3231bec9; S=0x3231be91; converted property
+ (void)initialize;	// 0x32304b0d
- (id)init;	// 0x3231b571
- (id)initWithBackForwardList:(PassRefPtr<WebCore::BackForwardListImpl>)backForwardList;	// 0x32304b11
- (void)_close;	// 0x3231b74d
- (void)addItem:(id)item;	// 0x3231b769
- (id)backItem;	// 0x3230c331
- (int)backListCount;	// 0x3231bf05
- (id)backListWithLimit:(int)limit;	// 0x3231b9f1
// converted property getter: - (int)capacity;	// 0x3231bcc9
- (BOOL)containsItem:(id)item;	// 0x3231b921
- (id)currentItem;	// 0x322f1029
- (void)dealloc;	// 0x322f716d
- (id)description;	// 0x3231bcfd
- (id)dictionaryRepresentation;	// 0x322f5049
- (void)finalize;	// 0x3231b6a1
- (id)forwardItem;	// 0x3231b9ad
- (int)forwardListCount;	// 0x3231bf21
- (id)forwardListWithLimit:(int)limit;	// 0x3231bb5d
- (void)goBack;	// 0x3231b949
- (void)goForward;	// 0x3231b961
- (void)goToItem:(id)item;	// 0x3231b979
- (id)itemAtIndex:(int)index;	// 0x3231bf3d
// converted property getter: - (unsigned)pageCacheSize;	// 0x3231bec9
- (void)removeItem:(id)item;	// 0x3231b8f9
// converted property setter: - (void)setCapacity:(int)capacity;	// 0x3231bce1
// converted property setter: - (void)setPageCacheSize:(unsigned)size;	// 0x3231be91
- (void)setToMatchDictionaryRepresentation:(id)matchDictionaryRepresentation;	// 0x32306305
@end

