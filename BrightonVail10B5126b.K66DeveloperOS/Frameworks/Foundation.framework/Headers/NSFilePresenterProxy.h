/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileReactorProxy.h"


__attribute__((visibility("hidden")))
@interface NSFilePresenterProxy : NSFileReactorProxy {
	BOOL _isInSuperArbiter;	// 20 = 0x14
	id _prewritingProcedure;	// 24 = 0x18
	unsigned _writingRelinquishmentCount;	// 28 = 0x1c
	id _currentWriterPurposeID;	// 32 = 0x20
	id _postwritingProcedure;	// 36 = 0x24
	BOOL _didObserveMovingByWriter;	// 40 = 0x28
	BOOL _didObserveVersionChangingByWriter;	// 41 = 0x29
}
@property(readonly, retain) id currentWriterPurposeID;	// G=0x319d68fd; converted property
+ (id)urlWithItemURL:(id)itemURL subitemPath:(id)path;	// 0x319d5959
- (void)accommodateDeletionWithSubitemPath:(id)subitemPath completionHandler:(id)handler;	// 0x319d5c25
- (void)afterRelinquishingToWriterInvokeProcedure:(id)writerInvokeProcedure;	// 0x319d68a5
- (void)beforeReacquiringFromWriterInvokeProcedure:(id)writerInvokeProcedure;	// 0x319d6935
// converted property getter: - (id)currentWriterPurposeID;	// 0x319d68fd
- (void)dealloc;	// 0x319d5735
- (BOOL)didObserveMoving;	// 0x319d6989
- (void)forwardObservationMessageWithKind:(id)kind parameters:(id)parameters;	// 0x319d67d5
- (void)forwardRelinquishmentMessageWithKind:(id)kind parameters:(id)parameters resultHandler:(id)handler;	// 0x319d6231
- (void)forwardUsingMessageSender:(id)sender;	// 0x319d57f5
- (BOOL)hasRelinquishedToWriter;	// 0x319d68e5
- (void)observeChangeByWriterWithPurposeID:(id)purposeID;	// 0x319d5d51
- (void)observeChangeOfSubitemAtURL:(id)url byWriterWithPurposeID:(id)purposeID;	// 0x319d5f61
- (void)observeDisconnectionByWriterWithPurposeID:(id)purposeID;	// 0x319d5e71
- (void)observeMoveByWriterWithPurposeID:(id)purposeID;	// 0x319d5dc9
- (void)observeMoveOfSubitemAtURL:(id)url toURL:(id)url2 byWriterWithPurposeID:(id)purposeID;	// 0x319d5fe9
- (void)observeReconnectionByWriterWithPurposeID:(id)purposeID;	// 0x319d5ee9
- (void)observeVersionChangeOfKind:(id)kind withClientID:(id)clientID name:(id)name subitemPath:(id)path;	// 0x319d6085
- (void)relinquishToReadingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 resultHandler:(id)handler;	// 0x319d5895
- (void)relinquishToWritingClaimWithID:(id)anId options:(unsigned)options purposeID:(id)anId3 subitemPath:(id)path resultHandler:(id)handler;	// 0x319d59e5
- (void)resetMoveObserving;	// 0x319d6975
- (void)saveChangesWithCompletionHandler:(id)completionHandler;	// 0x319d5b51
- (void)setInSuperarbiter;	// 0x319d5881
- (void)setItemLocation:(id)location;	// 0x319d57ad
- (void)updateLastEventIdentifier:(unsigned long long)identifier;	// 0x319d6191
@end
