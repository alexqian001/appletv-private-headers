/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

@interface IMPeople : NSObject {
	NSMutableArray *_people;	// 4 = 0x4
	int _coalesceCount;	// 8 = 0x8
	BOOL _hidePeople;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL coalescingChanges;	// G=0x30396061; 
@property(readonly, assign, nonatomic) unsigned count;	// G=0x303964a1; 
@property(readonly, assign, nonatomic) NSArray *groups;	// G=0x30396989; 
@property(assign, nonatomic, setter=setShouldHidePeople:) BOOL hidePeople;	// G=0x3039603d; S=0x303965d9; 
@property(readonly, assign, nonatomic) NSArray *people;	// G=0x30396439; 
- (id)init;	// 0x30396695
- (void)_addedPeople:(id)people;	// 0x3039631d
- (BOOL)addIMHandle:(id)handle;	// 0x30396121
- (void)addNotificationObserver:(id)observer selector:(SEL)selector;	// 0x303964dd
- (BOOL)addPeopleFromArray:(id)array;	// 0x30396079
- (BOOL)addPeopleFromArray:(id)array skipMe:(BOOL)me;	// 0x303966f1
- (void)addedIMHandle:(id)handle;	// 0x30396399
- (void)beginCoalescedChanges;	// 0x3039604d
// declared property getter: - (BOOL)coalescingChanges;	// 0x30396061
- (BOOL)containsIMHandle:(id)handle;	// 0x3039647d
// declared property getter: - (unsigned)count;	// 0x303964a1
- (void)dealloc;	// 0x30396625
- (void)endCoalescedChanges;	// 0x30396199
// declared property getter: - (id)groups;	// 0x30396989
// declared property getter: - (BOOL)hidePeople;	// 0x3039603d
- (void)imHandle:(id)handle buddyStatusChanged:(BOOL)changed;	// 0x30396b3d
// declared property getter: - (id)people;	// 0x30396439
- (BOOL)removeIMHandle:(id)handle;	// 0x30396091
- (void)removeNotificationObserver:(id)observer;	// 0x30396561
- (BOOL)removePeopleFromArray:(id)array;	// 0x30396895
- (void)removedIMHandle:(id)handle;	// 0x3039627d
// declared property setter: - (void)setShouldHidePeople:(BOOL)hidePeople;	// 0x303965d9
@end
