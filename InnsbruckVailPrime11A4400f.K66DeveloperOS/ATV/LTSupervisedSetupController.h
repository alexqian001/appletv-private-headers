/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVAPTestResultDelegate.h"
#import "BRTextWithSpinnerController.h"

@class NSTimer;
@protocol LTWirelessSetupResultDelegate;

__attribute__((visibility("hidden")))
@interface LTSupervisedSetupController : BRTextWithSpinnerController <ATVAPTestResultDelegate> {
	NSTimer *_waitForNetworkTimer;	// 120 = 0x78
	BOOL _completed;	// 124 = 0x7c
	id<LTWirelessSetupResultDelegate> _delegate;	// 128 = 0x80
}
@property(assign, nonatomic) __weak id<LTWirelessSetupResultDelegate> delegate;	// G=0x1ef595; S=0x1ef5b5; @synthesize=_delegate
- (void).cxx_destruct;	// 0x1ef5c9
- (void)_finishedSetupWithStatus:(BOOL)status;	// 0x1ef735
- (void)_installStoredProfile;	// 0x1efae9
- (void)_networkStateChanged:(id)changed;	// 0x1ef979
- (void)_networkTimedOut:(id)anOut;	// 0x1ef931
- (void)_runNetworkTest;	// 0x1efa45
- (void)_startSetup;	// 0x1ef5f9
- (void)_validateNetwork;	// 0x1ef9c1
- (void)_waitForNetwork;	// 0x1ef861
- (void)dealloc;	// 0x1ef3e9
// declared property getter: - (id)delegate;	// 0x1ef595
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1ef5b5
- (void)testCompleted:(BOOL)completed;	// 0x1ef481
- (void)wasPopped;	// 0x1ef361
- (void)wasPushed;	// 0x1ef2e5
@end
