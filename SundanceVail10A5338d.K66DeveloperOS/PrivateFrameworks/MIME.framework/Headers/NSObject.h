/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSObject.h> // Unknown library


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (LockingAdditions)
+ (void)mf_clearLocks;	// 0x36b2e4d5
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)lock;	// 0x36b2efe1
- (void)_mf_checkToAllowLock:(id)allowLock;	// 0x36b2f1c1
- (void)_mf_checkToAllowOrderingWithLock:(id)lock;	// 0x36b2ecdd
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)lock;	// 0x36b2ee6d
- (void)_mf_dumpLockCallStacks:(unsigned)stacks ordering:(id)ordering;	// 0x36b2ea05
- (id)_mf_lockOrderingForType:(int)type;	// 0x36b2e8fd
- (BOOL)_mf_ntsIsLocked;	// 0x36b2f8e9
- (id)mf_exclusiveLocks;	// 0x36b2f911
- (void)mf_lock;	// 0x36b2f209
- (id)mf_lockOrdering;	// 0x36b2f90d
- (void)mf_lockWithPriority;	// 0x36b2f65d
- (id)mf_strictLockOrdering;	// 0x36b2f909
- (BOOL)mf_tryLock;	// 0x36b2f4c1
- (BOOL)mf_tryLockWithPriority;	// 0x36b2f681
- (void)mf_unlock;	// 0x36b2f6a5
@end

