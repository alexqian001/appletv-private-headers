/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class MZKeyValueStoreController, NSMutableArray, NSDictionary, NSError, MZKeyValueStoreTransaction;
@protocol MZKeyValueStoreDeserializeOperationDelegate;

@interface MZKeyValueStoreDeserializer : NSObject {
	MZKeyValueStoreTransaction *_transaction;	// 4 = 0x4
	NSDictionary *_serverResponse;	// 8 = 0x8
	NSObject<MZKeyValueStoreDeserializeOperationDelegate> *_delegate;	// 12 = 0xc
	int _status;	// 16 = 0x10
	unsigned _retrySeconds;	// 20 = 0x14
	BOOL _isDirty;	// 24 = 0x18
	MZKeyValueStoreController *_keyValueStoreController;	// 28 = 0x1c
	NSMutableArray *_pendingDeserializations;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) BOOL authenticationError;	// G=0x336da501; @dynamic
@property(assign, nonatomic) NSObject<MZKeyValueStoreDeserializeOperationDelegate> *delegate;	// G=0x336da765; S=0x336da775; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL genericError;	// G=0x336da539; @dynamic
@property(readonly, assign, nonatomic) BOOL hasBackoff;	// G=0x336da6b9; @dynamic
@property(retain, nonatomic) MZKeyValueStoreController *keyValueStoreController;	// G=0x336da6f5; S=0x336da705; @synthesize=_keyValueStoreController
@property(retain) NSMutableArray *pendingDeserializations;	// G=0x336da785; S=0x336da799; @synthesize=_pendingDeserializations
@property(readonly, assign, nonatomic) NSError *requestError;	// G=0x336da589; 
@property(readonly, assign, nonatomic) unsigned retrySeconds;	// G=0x336da755; @synthesize=_retrySeconds
@property(retain, nonatomic) NSDictionary *serverResponse;	// G=0x336da715; S=0x336da725; @synthesize=_serverResponse
@property(assign, nonatomic) int status;	// G=0x336da735; S=0x336da745; @synthesize=_status
@property(readonly, assign, nonatomic) BOOL success;	// G=0x336da555; @dynamic
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction;	// G=0x336da6d5; S=0x336da6e5; @synthesize=_transaction
@property(readonly, assign, nonatomic) BOOL unsupportedClient;	// G=0x336da4e5; @dynamic
@property(readonly, assign, nonatomic) BOOL validationError;	// G=0x336da51d; @dynamic
@property(readonly, assign, nonatomic) BOOL versionMismatch;	// G=0x336da56d; @dynamic
- (id)initWithTransaction:(id)transaction response:(id)response;	// 0x336d9a65
- (void)_delegateOperationDidFinish;	// 0x336da419
// declared property getter: - (BOOL)authenticationError;	// 0x336da501
- (void)dealloc;	// 0x336d9ba5
// declared property getter: - (id)delegate;	// 0x336da765
- (void)deserialize;	// 0x336d9c4d
- (void)finishedDeserializationForKey:(id)key;	// 0x336da279
// declared property getter: - (BOOL)genericError;	// 0x336da539
// declared property getter: - (BOOL)hasBackoff;	// 0x336da6b9
// declared property getter: - (id)keyValueStoreController;	// 0x336da6f5
// declared property getter: - (id)pendingDeserializations;	// 0x336da785
// declared property getter: - (id)requestError;	// 0x336da589
// declared property getter: - (unsigned)retrySeconds;	// 0x336da755
// declared property getter: - (id)serverResponse;	// 0x336da715
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x336da775
// declared property setter: - (void)setKeyValueStoreController:(id)controller;	// 0x336da705
// declared property setter: - (void)setPendingDeserializations:(id)deserializations;	// 0x336da799
// declared property setter: - (void)setServerResponse:(id)response;	// 0x336da725
// declared property setter: - (void)setStatus:(int)status;	// 0x336da745
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x336da6e5
// declared property getter: - (int)status;	// 0x336da735
// declared property getter: - (BOOL)success;	// 0x336da555
// declared property getter: - (id)transaction;	// 0x336da6d5
// declared property getter: - (BOOL)unsupportedClient;	// 0x336da4e5
// declared property getter: - (BOOL)validationError;	// 0x336da51d
// declared property getter: - (BOOL)versionMismatch;	// 0x336da56d
@end
