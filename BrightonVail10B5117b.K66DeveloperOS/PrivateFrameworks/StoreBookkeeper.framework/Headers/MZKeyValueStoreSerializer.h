/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library
#import "StoreBookkeeper-Structs.h"

@class MZKeyValueStoreTransaction;

@interface MZKeyValueStoreSerializer : NSObject {
	MZKeyValueStoreTransaction *_transaction;	// 4 = 0x4
}
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction;	// G=0x3566ddf1; S=0x3566de01; @synthesize=_transaction
- (id)initWithTransaction:(id)transaction;	// 0x3566d4f1
- (BOOL)_isGetAllSinceDomainVersionRequest;	// 0x3566d8f9
- (BOOL)_isRemoveAllSinceDomainVersion;	// 0x3566d945
- (id)baseDictionary;	// 0x3566d991
- (id)dataWithNodes:(id)nodes;	// 0x3566daa5
- (void)dealloc;	// 0x3566d545
- (id)keys;	// 0x3566dc19
- (MZKeyValueStoreDataVerionPair)objectVersionPairForKey:(id)key;	// 0x3566dcfd
- (id)payload;	// 0x3566d595
- (id)payloadWithNode:(id)node;	// 0x3566dcbd
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x3566de01
- (id)sinceDomainVersion;	// 0x3566d855
// declared property getter: - (id)transaction;	// 0x3566ddf1
@end
