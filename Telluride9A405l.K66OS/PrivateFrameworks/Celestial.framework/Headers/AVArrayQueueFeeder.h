/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "AVQueueFeeder.h"

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder {
@private
	NSMutableArray *_items;	// 4 = 0x4
}
- (id)init;	// 0x33912519
- (id)initWithArray:(id)array;	// 0x33912845
- (void)dealloc;	// 0x339127f9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x33912691
- (unsigned)itemCount;	// 0x339127a9
- (id)itemForIndex:(unsigned)index;	// 0x339127b9
- (unsigned)numberOfPaths;	// 0x33912789
- (id)pathAtIndex:(unsigned)index;	// 0x339126d1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x33912651
- (void)shuffleWithCurrentIndex:(unsigned)currentIndex;	// 0x3391257d
@end
