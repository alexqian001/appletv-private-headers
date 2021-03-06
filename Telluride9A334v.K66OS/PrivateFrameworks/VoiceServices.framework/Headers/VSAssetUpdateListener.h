/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject {
	BOOL _isListening;	// 4 = 0x4
	PCPersistentTimer *_assetCleanupTimer;	// 8 = 0x8
}
+ (id)sharedListener;	// 0x320283d9
- (id)init;	// 0x32028389
- (void)_cancelAssetCleanupTimer;	// 0x32028405
- (void)_cleanupAssets;	// 0x320286f5
- (void)_flushLanguageChanges;	// 0x32028751
- (id)_initShared;	// 0x3202838d
- (void)_rescheduleAssetCleanup;	// 0x32028a09
- (void)_scheduleNextCleanupForDate:(id)date;	// 0x3202844d
- (void)_spokenLanguageChanged:(id)changed;	// 0x32028679
- (void)_updateNextCleanupDate;	// 0x320285d5
- (void)dealloc;	// 0x32028a7d
- (void)startListening;	// 0x3202893d
- (void)stopListening;	// 0x32028865
@end

