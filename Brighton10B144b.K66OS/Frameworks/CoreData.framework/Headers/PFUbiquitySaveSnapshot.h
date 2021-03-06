/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSArray, NSDate;

@interface PFUbiquitySaveSnapshot : NSObject {
	NSDate *_transactionDate;	// 4 = 0x4
	NSString *_modelVersionHash;	// 8 = 0x8
	NSString *_exportingPeerID;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	NSMutableDictionary *_storeNameToStoreSaveSnapshots;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x30fc1c59; @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x30fc1c69; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x30fc1c49; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray *storeNames;	// G=0x30fc1c09; 
@property(retain, nonatomic) NSDate *transactionDate;	// G=0x30fc1c29; S=0x30fc1c39; @synthesize=_transactionDate
- (id)initWithSaveNotification:(id)saveNotification withLocalPeerID:(id)localPeerID;	// 0x30fc184d
- (id)initWithTransactionLog:(id)transactionLog;	// 0x30fc16b9
- (void)dealloc;	// 0x30fc196d
- (id)description;	// 0x30fc1a2d
// declared property getter: - (id)exportingPeerID;	// 0x30fc1c59
// declared property getter: - (id)localPeerID;	// 0x30fc1c69
// declared property getter: - (id)modelVersionHash;	// 0x30fc1c49
// declared property setter: - (void)setTransactionDate:(id)date;	// 0x30fc1c39
// declared property getter: - (id)storeNames;	// 0x30fc1c09
- (id)storeSaveSnapshotForStore:(id)store;	// 0x30fc1b01
- (id)storeSaveSnapshotForStoreName:(id)storeName;	// 0x30fc1ae1
// declared property getter: - (id)transactionDate;	// 0x30fc1c29
@end

