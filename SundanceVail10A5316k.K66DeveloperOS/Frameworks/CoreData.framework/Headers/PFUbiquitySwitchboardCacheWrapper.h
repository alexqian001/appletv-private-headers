/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityTransactionLogCache, PFUbiquityTransactionHistoryCache, PFUbiquityGlobalObjectIDCache, PFUbiquityPeerRangeCache, PFUbiquityBaseline, NSLock, PFUbiquityPeerReceipt;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboardCacheWrapper : NSObject {
@private
	PFUbiquityGlobalObjectIDCache *_globalIDCache;	// 4 = 0x4
	PFUbiquityPeerRangeCache *_peerRangeCache;	// 8 = 0x8
	PFUbiquityTransactionLogCache *_transactionLogCache;	// 12 = 0xc
	PFUbiquityTransactionHistoryCache *_transactionHistoryCache;	// 16 = 0x10
	PFUbiquityPeerReceipt *_peerReceipt;	// 20 = 0x14
	BOOL _pendingReceiptWrite;	// 24 = 0x18
	NSLock *_receiptFileLock;	// 28 = 0x1c
	BOOL _allowSchedulingOfReceiptFileWrites;	// 32 = 0x20
	PFUbiquityBaseline *_baseline;	// 36 = 0x24
	BOOL _pendingBaselineMove;	// 40 = 0x28
	BOOL _baselineUploaded;	// 41 = 0x29
	NSLock *_baselineLock;	// 44 = 0x2c
	BOOL _allowReplacementOfBaseline;	// 48 = 0x30
	NSObject<OS_dispatch_semaphore> *_baselineSemaphore;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) PFUbiquityGlobalObjectIDCache *globalIDCache;	// G=0x32e5dc25; @synthesize=_globalIDCache
@property(readonly, assign, nonatomic) PFUbiquityPeerRangeCache *peerRangeCache;	// G=0x32e5dc35; @synthesize=_peerRangeCache
@property(readonly, assign, nonatomic) PFUbiquityPeerReceipt *peerReceipt;	// G=0x32e5dc65; @synthesize=_peerReceipt
@property(readonly, assign, nonatomic) PFUbiquityTransactionHistoryCache *transactionHistoryCache;	// G=0x32e5dc55; @synthesize=_transactionHistoryCache
@property(readonly, assign, nonatomic) PFUbiquityTransactionLogCache *transactionLogCache;	// G=0x32e5dc45; @synthesize=_transactionLogCache
- (id)init;	// 0x32e5c771
- (id)initWithStore:(id)store forLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x32e5c8b1
- (void)cachePeerReceipt:(id)receipt;	// 0x32e5cdc5
- (void)cacheWrapperWillBeRemovedFromEntry;	// 0x32e5cb09
- (void)checkPeerFileUploaded;	// 0x32e5d835
- (void)dealloc;	// 0x32e5c9f1
// declared property getter: - (id)globalIDCache;	// 0x32e5dc25
- (BOOL)monitorUploadOfBaseline:(id)baseline synchronously:(BOOL)synchronously error:(id *)error;	// 0x32e5d4d9
// declared property getter: - (id)peerRangeCache;	// 0x32e5dc35
// declared property getter: - (id)peerReceipt;	// 0x32e5dc65
- (void)scheduleReceiptFileWrite:(id)write;	// 0x32e5cfad
- (void)timerFinishedUploadingPeerFile;	// 0x32e5da01
// declared property getter: - (id)transactionHistoryCache;	// 0x32e5dc55
// declared property getter: - (id)transactionLogCache;	// 0x32e5dc45
- (BOOL)writeReceiptFile:(id *)file;	// 0x32e5cf41
@end
