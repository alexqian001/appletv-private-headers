/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLRelationship, NSString;

@interface NSSQLJoinIntermediate : NSSQLIntermediate {
	NSSQLRelationship *_relationship;	// 8 = 0x8
	NSString *_sourceAlias;	// 12 = 0xc
	NSString *_destinationAlias;	// 16 = 0x10
	NSString *_correlationAlias;	// 20 = 0x14
	unsigned _type;	// 24 = 0x18
	BOOL _direct;	// 28 = 0x1c
}
@property(readonly, retain) NSString *correlationAlias;	// G=0x30faf56d; converted property
@property(retain) NSString *destinationAlias;	// G=0x30faf519; S=0x30faf529; converted property
@property(assign, getter=isDirect) BOOL direct;	// G=0x30faf455; S=0x30faf465; converted property
@property(readonly, retain) NSSQLRelationship *relationship;	// G=0x30faf475; converted property
@property(retain) NSString *sourceAlias;	// G=0x30faf4c5; S=0x30faf4d5; converted property
+ (id)createJoinIntermediatesForKeypath:(id)keypath startEntity:(id)entity startAlias:(id)alias forScope:(id)scope inFetchIntermediate:(id)fetchIntermediate inContext:(id)context;	// 0x30eff251
+ (id)createManyToManyJoinIntermediateForProperty:(id)property direct:(BOOL)direct lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x30faf181
+ (id)createToManyJoinIntermediateForProperty:(id)property lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x30faf0e1
+ (id)createToOneJoinIntermediateForProperty:(id)property lastStep:(id)step inScope:(id)scope context:(id)context;	// 0x30faf041
- (id)initForRelationship:(id)relationship sourceAlias:(id)alias destinationAlias:(id)alias3 correlationAlias:(id)alias4 direct:(BOOL)direct inScope:(id)scope;	// 0x30faf23d
- (id)_generateManyToManySQLStringInContext:(id)context;	// 0x30faf999
- (id)_generateToManySQLStringInContext:(id)context;	// 0x30faf789
- (id)_generateToOneSQLStringInContext:(id)context;	// 0x30faf59d
// converted property getter: - (id)correlationAlias;	// 0x30faf56d
- (void)dealloc;	// 0x30faf2f5
- (id)description;	// 0x30faf395
// converted property getter: - (id)destinationAlias;	// 0x30faf519
- (id)destinationEntity;	// 0x30faf4a5
- (id)generateSQLStringInContext:(id)context;	// 0x30fafcd1
// converted property getter: - (BOOL)isDirect;	// 0x30faf455
- (BOOL)joinType;	// 0x30faf57d
// converted property getter: - (id)relationship;	// 0x30faf475
// converted property setter: - (void)setDestinationAlias:(id)alias;	// 0x30faf529
// converted property setter: - (void)setDirect:(BOOL)direct;	// 0x30faf465
- (void)setJoinType:(unsigned)type;	// 0x30faf58d
// converted property setter: - (void)setSourceAlias:(id)alias;	// 0x30faf4d5
// converted property getter: - (id)sourceAlias;	// 0x30faf4c5
- (id)sourceEntity;	// 0x30faf485
@end
