/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import </libobjc.A.h>

@class NSPredicate, EKEventStore;

__attribute__((visibility("hidden")))
@interface EKPredicateSearch : NSObject {
	Class _entityClass;	// 4 = 0x4
	NSPredicate *_predicate;	// 8 = 0x8
	EKEventStore *_store;	// 12 = 0xc
	BOOL _finished;	// 16 = 0x10
	id _callback;	// 20 = 0x14
	unsigned _previous;	// 24 = 0x18
}
+ (id)searchWithEntityClass:(Class)entityClass predicate:(id)predicate store:(id)store callback:(id)callback;	// 0x2da8c405
- (id)initWithEntityClass:(Class)entityClass predicate:(id)predicate store:(id)store callback:(id)callback;	// 0x2da8c451
- (BOOL)_receivedData:(XXStruct_xPy9GB [50])data count:(int)count;	// 0x2da93f15
- (void)dealloc;	// 0x2da8fabd
- (void)run;	// 0x2da939ad
- (id)startWithCompletion:(id)completion;	// 0x2da8c5cd
- (void)terminate;	// 0x2da941fd
@end
