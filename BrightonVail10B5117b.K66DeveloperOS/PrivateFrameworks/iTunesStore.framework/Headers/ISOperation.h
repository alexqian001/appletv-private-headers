/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSOperation.h> // Unknown library

@class NSError, NSLock, NSRunLoop, SSOperationProgress, NSArray, NSString, NSMutableArray;
@protocol ISOperationDelegate;

@interface ISOperation : NSOperation {
	id<ISOperationDelegate> _delegate;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
	NSLock *_lock;	// 20 = 0x14
	NSRunLoop *_operationRunLoop;	// 24 = 0x18
	ISOperation *_parentOperation;	// 28 = 0x1c
	SSOperationProgress *_progress;	// 32 = 0x20
	BOOL _shouldMessageMainThread;	// 36 = 0x24
	NSString *_powerAssertionIdentifier;	// 40 = 0x28
	NSArray *_serializationLockIdentifiers;	// 44 = 0x2c
	NSMutableArray *_subOperations;	// 48 = 0x30
	BOOL _shouldRunWithBackgroundPriority;	// 52 = 0x34
	BOOL _stopped;	// 53 = 0x35
	BOOL _success;	// 54 = 0x36
	id _threadSafeDelegate;	// 56 = 0x38
}
@property(assign) id<ISOperationDelegate> delegate;	// G=0x36a513e1; S=0x36a51441; 
@property(retain) NSError *error;	// G=0x36a52499; S=0x36a524ad; @synthesize=_error
@property(retain) NSRunLoop *operationRunLoop;	// G=0x36a524bd; S=0x36a524d1; @synthesize=_operationRunLoop
@property(retain) ISOperation *parentOperation;	// G=0x36a524e1; S=0x36a524f5; @synthesize=_parentOperation
@property(retain) NSString *powerAssertionIdentifier;	// G=0x36a52505; S=0x36a52519; @synthesize=_powerAssertionIdentifier
@property(readonly, assign, nonatomic) SSOperationProgress *progress;	// G=0x36a50d39; 
@property(readonly, assign) int progressWeight;	// G=0x36a50d99; 
@property(copy) NSArray *serializationLockIdentifiers;	// G=0x36a51efd; S=0x36a51f5d; 
@property(assign) BOOL shouldMessageMainThread;	// G=0x36a51585; S=0x36a51521; 
@property(assign) BOOL shouldRunWithBackgroundPriority;	// G=0x36a52529; S=0x36a52541; @synthesize=_shouldRunWithBackgroundPriority
@property(assign) BOOL success;	// G=0x36a52559; S=0x36a52571; @synthesize=_success
@property(readonly, assign) id threadSafeDelegate;	// G=0x36a515c1; 
@property(readonly, assign) NSString *uniqueKey;	// G=0x36a51621; 
- (id)init;	// 0x36a50bf9
- (void)_addSubOperation:(id)operation;	// 0x36a51fe5
- (void)_failAfterException;	// 0x36a52051
- (void)_keepAliveTimer:(id)timer;	// 0x36a520a5
- (void)_main:(BOOL)main;	// 0x36a520b5
- (void)_removeSubOperation:(id)operation;	// 0x36a5230d
- (void)_sendErrorToDelegate:(id)delegate;	// 0x36a5232d
- (void)_sendSuccessToDelegate;	// 0x36a523b1
- (void)_sendWillStartToDelegate;	// 0x36a52425
- (id)authenticatedAccountDSID;	// 0x36a67a95
- (void)cancel;	// 0x36a51625
- (BOOL)copyAccountID:(id *)anId byAuthenticatingWithContext:(id)context returningError:(id *)error;	// 0x36a67abd
- (id)copyActivePowerAssertionIdentifiers;	// 0x36a51b91
- (id)copySerializationLocks;	// 0x36a51c11
- (void)dealloc;	// 0x36a50c5d
// declared property getter: - (id)delegate;	// 0x36a513e1
- (void)dispatchCompletionBlock;	// 0x36a51d51
// declared property getter: - (id)error;	// 0x36a52499
- (BOOL)loadSoftwareMapReturningError:(id *)error;	// 0x36a6728d
- (BOOL)loadURLBagWithContext:(id)context returningError:(id *)error;	// 0x36a5c061
- (void)lock;	// 0x36a51de9
- (void)main;	// 0x36a516d1
// declared property getter: - (id)operationRunLoop;	// 0x36a524bd
// declared property getter: - (id)parentOperation;	// 0x36a524e1
// declared property getter: - (id)powerAssertionIdentifier;	// 0x36a52505
// declared property getter: - (id)progress;	// 0x36a50d39
// declared property getter: - (int)progressWeight;	// 0x36a50d99
- (void)run;	// 0x36a50d9d
- (void)run:(BOOL)run;	// 0x36a51e09
- (long)runRunLoopUntilStopped;	// 0x36a50dd1
- (BOOL)runSubOperation:(id)operation onQueue:(id)queue error:(id *)error;	// 0x36a5110d
- (BOOL)runSubOperation:(id)operation returningError:(id *)error;	// 0x36a50ed1
- (void)sendDidTakeSerializationLocks;	// 0x36a51e21
- (void)sendProgressToDelegate;	// 0x36a51e71
// declared property getter: - (id)serializationLockIdentifiers;	// 0x36a51efd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36a51441
// declared property setter: - (void)setError:(id)error;	// 0x36a524ad
// declared property setter: - (void)setOperationRunLoop:(id)loop;	// 0x36a524d1
// declared property setter: - (void)setParentOperation:(id)operation;	// 0x36a524f5
// declared property setter: - (void)setPowerAssertionIdentifier:(id)identifier;	// 0x36a52519
// declared property setter: - (void)setSerializationLockIdentifiers:(id)identifiers;	// 0x36a51f5d
// declared property setter: - (void)setShouldMessageMainThread:(BOOL)messageMainThread;	// 0x36a51521
// declared property setter: - (void)setShouldRunWithBackgroundPriority:(BOOL)runWithBackgroundPriority;	// 0x36a52541
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x36a52571
- (BOOL)shouldFailAfterUniquePredecessorError:(id)error;	// 0x36a51581
// declared property getter: - (BOOL)shouldMessageMainThread;	// 0x36a51585
// declared property getter: - (BOOL)shouldRunWithBackgroundPriority;	// 0x36a52529
- (BOOL)stopRunLoop;	// 0x36a5121d
// declared property getter: - (BOOL)success;	// 0x36a52559
// declared property getter: - (id)threadSafeDelegate;	// 0x36a515c1
// declared property getter: - (id)uniqueKey;	// 0x36a51621
- (void)unlock;	// 0x36a51fc5
@end
