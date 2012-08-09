/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASGroupedQueue.h"

@class MSASEnqueuedCommand;

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue {
	MSASEnqueuedCommand *_lastEnqueuedCommand;	// 48 = 0x30
}
@property(retain, nonatomic) MSASEnqueuedCommand *lastEnqueuedCommand;	// G=0x317354f9; S=0x31735509; @synthesize=_lastEnqueuedCommand
+ (id)calloutBlockForCommand:(id)command;	// 0x317319c9
- (void).cxx_destruct;	// 0x31735531
- (void)MSASModel:(id)model didDeleteComment:(id)comment forAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x317352b9
- (void)MSASModel:(id)model didFindDeletedAccessControl:(id)control inAlbum:(id)album info:(id)info;	// 0x31734b19
- (void)MSASModel:(id)model didFindDeletedAlbum:(id)album info:(id)info;	// 0x3173437d
- (void)MSASModel:(id)model didFindDeletedAssetCollection:(id)collection inAlbum:(id)album info:(id)info;	// 0x31734729
- (void)MSASModel:(id)model didFindDeletedInvitation:(id)invitation info:(id)info;	// 0x31734ec5
- (void)MSASModel:(id)model didFindNewAccessControl:(id)control inAlbum:(id)album info:(id)info;	// 0x31734921
- (void)MSASModel:(id)model didFindNewAlbum:(id)album info:(id)info;	// 0x317341c9
- (void)MSASModel:(id)model didFindNewAssetCollection:(id)collection inAlbum:(id)album info:(id)info;	// 0x31734531
- (void)MSASModel:(id)model didFindNewComment:(id)comment forAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x31735079
- (void)MSASModel:(id)model didFindNewInvitation:(id)invitation info:(id)info;	// 0x31734d11
- (void)flushQueue;	// 0x317312d5
- (BOOL)hasEnqueuedItems;	// 0x31731295
// declared property getter: - (id)lastEnqueuedCommand;	// 0x317354f9
// declared property setter: - (void)setLastEnqueuedCommand:(id)command;	// 0x31735509
- (void)workQueueEnqueueCommand:(id)command variantParam:(id)param invariantParam:(id)param3;	// 0x317315d1
- (void)workQueueFlushQueue;	// 0x31731371
@end
