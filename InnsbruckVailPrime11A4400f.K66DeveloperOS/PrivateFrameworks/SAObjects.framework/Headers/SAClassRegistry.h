/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import </libobjc.A.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SAClassRegistry : NSObject {
	NSMutableDictionary *_classesByAceClassNameByGroupIdentifier;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}
@property(readonly, assign, nonatomic, getter=_classesByAceClassNameByGroupIdentifier) NSMutableDictionary *classesByAceClassNameByGroupIdentifier;	// G=0x326c7d6d; @synthesize=_classesByAceClassNameByGroupIdentifier
@property(readonly, assign, nonatomic, getter=_queue) NSObject<OS_dispatch_queue> *queue;	// G=0x326c7d7d; @synthesize=_queue
+ (id)sharedClassRegistry;	// 0x326c78a5
- (id)init;	// 0x326c7911
- (void)_accessMutableStateWithBlock:(id)block;	// 0x326c7d4d
// declared property getter: - (id)_classesByAceClassNameByGroupIdentifier;	// 0x326c7d6d
// declared property getter: - (id)_queue;	// 0x326c7d7d
- (Class)classForAceClassWithName:(id)name inGroupWithIdentifier:(id)identifier;	// 0x326c7b65
- (void)dealloc;	// 0x326c7995
- (void)registerClass:(Class)aClass forAceClassWithName:(id)name inGroupWithIdentifier:(id)identifier;	// 0x326c79f5
@end
