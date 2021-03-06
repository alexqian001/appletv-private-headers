/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSMMCSProtocol.h"
#import "MSPublishStorageProtocol.h"

@class NSMutableDictionary;
@protocol MSPublishStorageProtocolDelegate;

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol> {
@private
	id<MSPublishStorageProtocolDelegate> _delegate;	// 28 = 0x1c
	NSMutableDictionary *_itemIDToAssetDict;	// 32 = 0x20
	unsigned long long *_itemIDs;	// 36 = 0x24
	const char **_signatures;	// 40 = 0x28
	char **_authTokens;	// 44 = 0x2c
	unsigned *_itemFlags;	// 48 = 0x30
	int _itemsInFlight;	// 52 = 0x34
}
@property(assign, nonatomic) id<MSPublishStorageProtocolDelegate> delegate;	// G=0x31c460e1; S=0x31c460f1; @synthesize=_delegate
- (id)initWithPersonID:(id)personID;	// 0x31c4507d
- (void)_closeFDForAsset:(id)asset;	// 0x31c45625
- (int)_getFileDescriptorFromItem:(unsigned long long)item;	// 0x31c45471
- (id)_getUTIFromItem:(unsigned long long)item;	// 0x31c45705
- (void)_putItemDone:(unsigned long long)done error:(id)error;	// 0x31c45ba9
- (void)_putItemsFailure;	// 0x31c45ee5
- (void)_requestCompleted;	// 0x31c45d2d
- (void)computeHashForAsset:(id)asset;	// 0x31c4518d
- (void)deactivate;	// 0x31c450f9
- (void)dealloc;	// 0x31c4514d
// declared property getter: - (id)delegate;	// 0x31c460e1
- (void)publishAssets:(id)assets URL:(id)url;	// 0x31c4582d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31c460f1
@end

