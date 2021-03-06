/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import </libobjc.A.h>
#import "MSStorageProtocol.h"

@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {
	NSString *_personID;	// 4 = 0x4
	NSString *_MMCSDirPath;	// 8 = 0x8
	MMCSEngineRef _engine;	// 12 = 0xc
	NSString *_engineDirPath;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) MMCSEngineRef engine;	// G=0x304e49a5; @synthesize=_engine
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x304e4995; @synthesize=_personID
+ (id)computeItemIDForAsset:(id)asset;	// 0x304e46c5
- (id)initWithPersonID:(id)personID path:(id)path;	// 0x304e3e2d
- (void).cxx_destruct;	// 0x304e49b5
- (int)_getFileDescriptorFromItem:(unsigned long long)item;	// 0x304e4609
- (void)_getItemDone:(unsigned long long)done path:(id)path error:(id)error;	// 0x304e4635
- (id)_getUTIFromItem:(unsigned long long)item;	// 0x304e4631
- (void)_putItemDone:(unsigned long long)done putReceipt:(id)receipt error:(id)error;	// 0x304e4669
- (void)_requestCompleted;	// 0x304e469d
- (void)abort;	// 0x304e44b5
- (void)deactivate;	// 0x304e438d
- (void)deactivateRemoveAllFiles:(BOOL)files;	// 0x304e43a1
- (void)dealloc;	// 0x304e4475
- (void)didFinishUsingAssets:(id)assets;	// 0x304e44c9
// declared property getter: - (MMCSEngineRef)engine;	// 0x304e49a5
// declared property getter: - (id)personID;	// 0x304e4995
@end

