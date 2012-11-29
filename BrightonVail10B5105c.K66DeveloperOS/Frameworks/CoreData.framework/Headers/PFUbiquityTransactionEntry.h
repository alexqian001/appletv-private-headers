/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObject.h"
#import "CoreData-Structs.h"

@class NSString, NSNumber, PFUbiquityStoreMetadata, NSURL, NSDate, PFUbiquityPeer;

@interface PFUbiquityTransactionEntry : NSManagedObject {
}
@property(retain, nonatomic) PFUbiquityPeer *actingPeer;	// @dynamic
@property(retain, nonatomic) NSString *globalIDStr;	// @dynamic
@property(retain, nonatomic) NSString *knowledgeVectorString;	// @dynamic
@property(retain, nonatomic) NSString *localIDStr;	// @dynamic
@property(retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;	// @dynamic
@property(retain, nonatomic) NSDate *transactionDate;	// @dynamic
@property(retain, nonatomic) NSString *transactionLogFilename;	// @dynamic
@property(readonly, assign) NSURL *transactionLogURL;	// G=0x36353f09; 
@property(retain, nonatomic) NSNumber *transactionNumber;	// @dynamic
@property(assign) int transactionType;	// G=0x36353e79; S=0x36353ea5; 
@property(retain, nonatomic) NSNumber *transactionTypeNum;	// @dynamic
+ (BOOL)canMergeKnowledgeVector:(id)vector withKnowledgeVector:(id)knowledgeVector;	// 0x36354a55
+ (id)createKnowledgeVectorByAddingKnowledgeVector:(id)vector toKnowledgeVector:(id)knowledgeVector;	// 0x3635439d
+ (id)createKnowledgeVectorStringFromPeerDictionary:(id)peerDictionary;	// 0x3635468d
+ (id)createPeerCodeDictionaryFromVector:(id)vector;	// 0x3635492d
+ (id)createSumForKnowlegeVectorString:(id)knowlegeVectorString;	// 0x3635480d
+ (id)createTransactionEntriesForCompressedObjectIDs:(id)compressedObjectIDs withTransactionType:(int)transactionType withImportContext:(id)importContext;	// 0x36354261
+ (id)newTransactionEntryForObjectWithCompressedGlobalID:(id)compressedGlobalID withTransactionType:(int)transactionType importContext:(id)context;	// 0x36354011
+ (id)transactionEntriesAfterPeerState:(id)state forStoreName:(id)storeName inManagedObjectContext:(id)managedObjectContext;	// 0x36354e35
+ (id)transactionEntriesForGlobalIDStrings:(id)globalIDStrings beforePeerState:(id)state inManagedObjectContext:(id)managedObjectContext;	// 0x36355149
+ (id)transactionEntriesForPeerID:(id)peerID beforeTransacationNumber:(id)number forStoreNamed:(id)storeNamed inManagedObjectContext:(id)managedObjectContext;	// 0x36355619
+ (id)transactionEntriesForPeerID:(id)peerID withTransactionNumber:(id)transactionNumber inManagedObjectContext:(id)managedObjectContext;	// 0x36355499
+ (id)transactionEntriesMatchingGlobalObjectID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x36354c4d
+ (id)transactionEntriesMatchingLocalObjectID:(id)anId inManagedObjectContext:(id)managedObjectContext;	// 0x36354d41
+ (id)transactionEntryForGlobalIDString:(id)globalIDString withActingPeerID:(id)actingPeerID atTransactionNumber:(id)transactionNumber inManagedObjectContext:(id)managedObjectContext;	// 0x3635578d
- (id)initAndInsertIntoManagedObjectContext:(id)context;	// 0x36353e1d
// declared property setter: - (void)setTransactionType:(int)type;	// 0x36353ea5
// declared property getter: - (id)transactionLogURL;	// 0x36353f09
// declared property getter: - (int)transactionType;	// 0x36353e79
@end
