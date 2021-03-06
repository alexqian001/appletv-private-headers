/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSMutableDictionary, NSDictionary, NSMutableArray, NSArray;

@interface IMFileTransferCenter : NSObject {
	NSMutableDictionary *_guidToTransferMap;	// 4 = 0x4
	NSMutableDictionary *_guidToRemovedTransferMap;	// 8 = 0x8
	NSMutableDictionary *_accountIDToTransferGUIDsMap;	// 12 = 0xc
	NSMutableArray *_preauthorizedInfos;	// 16 = 0x10
	NSMutableArray *_preauthorizedGUIDs;	// 20 = 0x14
	NSMutableSet *_activeTransfers;	// 24 = 0x18
	NSMutableSet *_pendingTransfers;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSDictionary *activeTransfers;	// G=0x300b78a9; 
@property(readonly, assign, nonatomic) BOOL hasActiveFileTransfers;	// G=0x300b8961; 
@property(readonly, assign, nonatomic) BOOL hasPendingFileTransfers;	// G=0x300b89fd; 
@property(readonly, assign, nonatomic) NSArray *orderedTransfers;	// G=0x300b7ded; 
+ (Class)fileTransferClass;	// 0x300b8bc9
+ (void)setTransferCenterClass:(Class)aClass;	// 0x300b789d
+ (id)sharedInstance;	// 0x300b8c15
+ (Class)transferCenterClass;	// 0x300b8be9
- (id)init;	// 0x300b8ad9
- (void)_addActiveTransfer:(id)transfer;	// 0x300b8929
- (void)_addPendingTransfer:(id)transfer;	// 0x300b89dd
- (void)_addTransfer:(id)transfer;	// 0x300b8705
- (void)_addTransfer:(id)transfer toAccount:(id)account;	// 0x300b87a5
- (void)_clearTransfers;	// 0x300b8839
- (void)_handleAllFileTransfers:(id)transfers;	// 0x300b8c5d
- (void)_handleFileTransfer:(id)transfer createdWithProperties:(id)properties;	// 0x300b7af1
- (void)_handleFileTransfer:(id)transfer updatedWithCurrentBytes:(unsigned long long)currentBytes totalBytes:(unsigned long long)bytes averageTransferRate:(unsigned long long)rate;	// 0x300b78b9
- (void)_handleFileTransfer:(id)transfer updatedWithProperties:(id)properties;	// 0x300b794d
- (void)_handleStandaloneFileTransferRegistered:(id)registered;	// 0x300b7ba9
- (void)_removeActiveTransfer:(id)transfer;	// 0x300b88e9
- (void)_removeAllActiveTransfers;	// 0x300b92a1
- (void)_removePendingTransfer:(id)transfer;	// 0x300b899d
- (void)acceptFileTransferIfPreauthorzed:(id)preauthorzed;	// 0x300b8ddd
- (void)acceptTransfer:(id)transfer withPath:(id)path autoRename:(BOOL)rename overwrite:(BOOL)overwrite;	// 0x300b81b1
- (void)acknowledgeAllPendingTransfers;	// 0x300b9361
- (void)acknowledgePendingTransfer:(id)transfer;	// 0x300b8989
// declared property getter: - (id)activeTransfers;	// 0x300b78a9
- (void)assignTransfer:(id)transfer toHandle:(id)handle securityLevel:(int)level;	// 0x300b8349
- (void)dealloc;	// 0x300b8a25
- (BOOL)doesLocalURLRequireArchiving:(id)archiving toHandle:(id)handle;	// 0x300b862d
- (id)guidForNewOutgoingTransferWithLocalURL:(id)localURL;	// 0x300b848d
// declared property getter: - (BOOL)hasActiveFileTransfers;	// 0x300b8961
// declared property getter: - (BOOL)hasPendingFileTransfers;	// 0x300b89fd
- (BOOL)isFileTransfer:(id)transfer preauthorizedWithDictionary:(id)dictionary;	// 0x300b7d15
// declared property getter: - (id)orderedTransfers;	// 0x300b7ded
- (void)preauthorizeFileTransferFromOtherPerson:(id)otherPerson account:(id)account filename:(id)filename saveToPath:(id)path;	// 0x300b8f59
- (void)removeTransfer:(id)transfer;	// 0x300b7f91
- (void)retargetTransfer:(id)transfer toPath:(id)path;	// 0x300b7ed1
- (void)sendTransfer:(id)transfer;	// 0x300b82a9
- (void)stopTransfer:(id)transfer;	// 0x300b80b5
- (id)transferForGUID:(id)guid;	// 0x300b8331
- (id)transferForGUID:(id)guid includeRemoved:(BOOL)removed;	// 0x300b82d9
- (id)transfersForAccount:(id)account;	// 0x300b9191
- (BOOL)wasFileTransferPreauthorized:(id)preauthorized;	// 0x300b7cf1
@end

