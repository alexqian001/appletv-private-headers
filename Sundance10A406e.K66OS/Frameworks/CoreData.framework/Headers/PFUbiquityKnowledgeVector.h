/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSDictionary, NSNumber;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying> {
	NSDictionary *_kv;	// 4 = 0x4
	NSDictionary *_storeKVDict;	// 8 = 0x8
	NSNumber *_sum;	// 12 = 0xc
	unsigned _hash;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x33e08af1; @synthesize=_hash
@property(readonly, assign, nonatomic) unsigned length;	// G=0x33e07159; 
@property(readonly, assign, nonatomic) NSNumber *sum;	// G=0x33e08ae1; @synthesize=_sum
+ (id)createKnowledgeVectorDictionaryFromString:(id)string;	// 0x33e089b9
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)knowledgeVectors;	// 0x33e088bd
- (id)init;	// 0x33e06771
- (id)initFromCopy:(id)copy storeKVDict:(id)dict sum:(id)sum hash:(unsigned)hash;	// 0x33e06ca1
- (id)initWithCoder:(id)coder;	// 0x33e06ec9
- (id)initWithKnowledgeVectorDictionary:(id)knowledgeVectorDictionary;	// 0x33e06925
- (id)initWithKnowledgeVectorString:(id)knowledgeVectorString;	// 0x33e06805
- (id)initWithPeerStatesFromStoreMetadata:(id)storeMetadata;	// 0x33e06b01
- (id)initWithStoreKnowledgeVectorDictionary:(id)storeKnowledgeVectorDictionary;	// 0x33e0698d
- (void)_updateHash;	// 0x33e072c5
- (void)_updateSum;	// 0x33e07191
- (id)allPeerIDs;	// 0x33e07aa1
- (BOOL)canMergeWithKnowledgeVector:(id)knowledgeVector;	// 0x33e0825d
- (int)compare:(id)compare;	// 0x33e06f35
- (BOOL)conflictsWithKnowledgeVector:(id)knowledgeVector;	// 0x33e08441
- (id)copyWithZone:(NSZone *)zone;	// 0x33e06dc1
- (id)createAncestorVectorForConflictingVector:(id)conflictingVector;	// 0x33e07f65
- (id)createKnowledgeVectorString;	// 0x33e0789d
- (id)createSetOfAllPeerIDsWithOtherVector:(id)otherVector;	// 0x33e07ac1
- (id)createStoreKnowledgeVectorDictionary;	// 0x33e08645
- (void)dealloc;	// 0x33e06d31
- (id)description;	// 0x33e06e45
- (void)encodeWithCoder:(id)coder;	// 0x33e06f05
// declared property getter: - (unsigned)hash;	// 0x33e08af1
- (BOOL)isAncestorOfKnowledgeVector:(id)knowledgeVector;	// 0x33e074b9
- (BOOL)isDescendantOfKnowledgeVector:(id)knowledgeVector;	// 0x33e07321
- (BOOL)isEqual:(id)equal;	// 0x33e070c1
- (BOOL)isZeroVector;	// 0x33e07651
// declared property getter: - (unsigned)length;	// 0x33e07159
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)vector;	// 0x33e07b39
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)anId;	// 0x33e0813d
- (id)newKnowledgeVectorBySubtractingVector:(id)vector;	// 0x33e07d31
// declared property getter: - (id)sum;	// 0x33e08ae1
- (id)transactionNumberForPeerID:(id)peerID;	// 0x33e07a81
- (void)updateWithKnowledgeVector:(id)knowledgeVector;	// 0x33e07731
@end
