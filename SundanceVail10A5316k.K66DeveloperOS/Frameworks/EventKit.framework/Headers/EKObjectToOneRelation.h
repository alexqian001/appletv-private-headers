/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObjectRelation.h"

@class EKObject;

__attribute__((visibility("hidden")))
@interface EKObjectToOneRelation : EKObjectRelation {
@private
	EKObject *_relatedObject;	// 20 = 0x14
	BOOL _weak;	// 24 = 0x18
}
@property(retain) EKObject *relatedObject;	// G=0x30df3259; S=0x30dfd11d; converted property
@property(readonly, assign, getter=isWeak) BOOL weak;	// G=0x30e01135; converted property
- (id)initWithObject:(id)object relationName:(id)name inverseRelationName:(id)name3 weak:(BOOL)weak;	// 0x30df3189
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x30dfe3f5
- (void)_clear;	// 0x30e05281
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x30e09025
- (void)_setRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x30dfd13d
- (void)_unload;	// 0x30dfc509
- (id)committedValue;	// 0x30e6a939
- (void)dealloc;	// 0x30e052f5
- (id)description;	// 0x30e6aa3d
- (void)didCommit;	// 0x30e048fd
// converted property getter: - (BOOL)isWeak;	// 0x30e01135
- (void)refresh;	// 0x30e057ad
// converted property getter: - (id)relatedObject;	// 0x30df3259
- (void)reset;	// 0x30e6a9b1
- (void)rollback;	// 0x30dfc499
// converted property setter: - (void)setRelatedObject:(id)object;	// 0x30dfd11d
- (void)updatePersistentObject;	// 0x30e00895
- (BOOL)validate:(id *)validate;	// 0x30dff6cd
@end

