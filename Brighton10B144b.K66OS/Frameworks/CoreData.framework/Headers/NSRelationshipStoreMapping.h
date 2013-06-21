/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyStoreMapping.h"

@class NSArray, NSString;

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
	NSString *_destinationEntityExternalName;	// 12 = 0xc
	NSArray *_foreignKeys;	// 16 = 0x10
	NSArray *_joins;	// 20 = 0x14
	unsigned _joinSemantic;	// 24 = 0x18
}
@property(retain) NSString *destinationEntityExternalName;	// G=0x30f2ec09; S=0x30f2ec19; converted property
@property(retain) NSArray *foreignKeys;	// G=0x30f2ec5d; S=0x30f2ec6d; converted property
@property(assign) unsigned joinSemantic;	// G=0x30f2ed05; S=0x30f2ed15; converted property
@property(retain) NSArray *joins;	// G=0x30f2ecb1; S=0x30f2ecc1; converted property
- (id)columnDefinitions;	// 0x30f2ed25
- (id)constraintDefinitions;	// 0x30f2ee3d
- (void)dealloc;	// 0x30f2ea45
// converted property getter: - (id)destinationEntityExternalName;	// 0x30f2ec09
// converted property getter: - (id)foreignKeys;	// 0x30f2ec5d
- (BOOL)isEqual:(id)equal;	// 0x30f2eab1
// converted property getter: - (unsigned)joinSemantic;	// 0x30f2ed05
// converted property getter: - (id)joins;	// 0x30f2ecb1
- (id)relationship;	// 0x30f2ebf9
// converted property setter: - (void)setDestinationEntityExternalName:(id)name;	// 0x30f2ec19
// converted property setter: - (void)setForeignKeys:(id)keys;	// 0x30f2ec6d
// converted property setter: - (void)setJoinSemantic:(unsigned)semantic;	// 0x30f2ed15
// converted property setter: - (void)setJoins:(id)joins;	// 0x30f2ecc1
@end
