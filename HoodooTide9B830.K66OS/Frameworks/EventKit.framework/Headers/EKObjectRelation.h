/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class EKObject, NSString;

__attribute__((visibility("hidden")))
@interface EKObjectRelation : NSObject {
@private
	EKObject *_owner;	// 4 = 0x4
	NSString *_relationName;	// 8 = 0x8
	BOOL _dirty;	// 12 = 0xc
	BOOL _loaded;	// 13 = 0xd
	NSString *_inverseName;	// 16 = 0x10
}
@property(readonly, assign, getter=isDirty) BOOL dirty;	// G=0x3245d025; converted property
@property(readonly, assign, nonatomic) NSString *inverseName;	// G=0x32466841; @synthesize=_inverseName
@property(readonly, assign, nonatomic) EKObject *owner;	// G=0x32467c0d; @synthesize=_owner
@property(readonly, assign, nonatomic) NSString *relationName;	// G=0x32467b6d; @synthesize=_relationName
- (id)initWithOwner:(id)owner relationName:(id)name inverseRelationName:(id)name3;	// 0x3245c2b1
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x324c6cf1
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x324c6cf5
- (id)committedValue;	// 0x324c6cc9
- (void)dealloc;	// 0x3246e8c5
- (void)didCommit;	// 0x3246dee5
// declared property getter: - (id)inverseName;	// 0x32466841
// converted property getter: - (BOOL)isDirty;	// 0x3245d025
- (BOOL)isWeak;	// 0x324c6c69
// declared property getter: - (id)owner;	// 0x32467c0d
- (void)refresh;	// 0x324c6cc1
- (void)relatedObjectDidChange;	// 0x32467c41
// declared property getter: - (id)relationName;	// 0x32467b6d
- (void)reset;	// 0x324c6ca1
- (void)rollback;	// 0x32465afd
- (void)updatePersistentObject;	// 0x324c6c9d
- (BOOL)validate:(id *)validate;	// 0x324c6cc5
@end

