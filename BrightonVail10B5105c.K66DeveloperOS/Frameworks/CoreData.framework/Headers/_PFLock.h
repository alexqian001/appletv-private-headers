/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSLocking.h"


@interface _PFLock : NSObject <NSLocking> {
	int _cd_rc;	// 4 = 0x4
	opaque_pthread_mutex_t _lock;	// 8 = 0x8
	opaque_pthread_t *_owner;	// 52 = 0x34
	unsigned _count;	// 56 = 0x38
}
+ (void)initialize;	// 0x362393a5
- (id)init;	// 0x362393ed
- (void)dealloc;	// 0x36272695
- (void)finalize;	// 0x362726d5
- (void)lock;	// 0x3623bdd5
- (BOOL)tryLock;	// 0x36272715
- (void)unlock;	// 0x362494e1
@end
