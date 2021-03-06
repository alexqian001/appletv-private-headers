/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"

@class ATVBSRLayer, BRDisplayMode, NSTimer, NSArray, CADisplay, NSString;

__attribute__((visibility("hidden")))
@interface ATVBSRController : BRMenuController <BRMenuListItemProvider> {
@private
	id _completionBlock;	// 124 = 0x7c
	ATVBSRLayer *_bsrControl;	// 128 = 0x80
	int _selectionKind;	// 132 = 0x84
	BRDisplayMode *_originalMode;	// 136 = 0x88
	BRDisplayMode *_failedMode;	// 140 = 0x8c
	BOOL _originalModeWasAuto;	// 144 = 0x90
	CADisplay *_mainDisplay;	// 148 = 0x94
	NSString *_mainDisplayUniqueID;	// 152 = 0x98
	NSArray *_listOfResolutionsToTry;	// 156 = 0x9c
	NSTimer *_modeTimer;	// 160 = 0xa0
	int _secondsLeftBeforeNextDisplayMode;	// 164 = 0xa4
	int _attemptedModeNumber;	// 168 = 0xa8
	int _numberOfBSRAttempts;	// 172 = 0xac
	BOOL _isBSRController;	// 176 = 0xb0
	int _result;	// 180 = 0xb4
}
+ (id)controllerForBlackScreenRecoveryWithCompletionBlock:(id)completionBlock;	// 0x32f31a61
+ (id)controllerForChangingToResolution:(id)resolution withCompletionBlock:(id)completionBlock;	// 0x32f31ae5
- (id)init;	// 0x32f31b3d
- (void)_availableModesChanged;	// 0x32f32f69
- (id)_countdownString;	// 0x32f32a61
- (BOOL)_executeDisplayChangeEvent;	// 0x32f32b25
- (id)_initWithModeList:(id)modeList selectionKind:(int)kind fromBSR:(BOOL)bsr completionBlock:(id)block;	// 0x32f324bd
- (id)_nextModeToTry;	// 0x32f32961
- (void)_playResolutionSwitchFailedSound;	// 0x32f32ef5
- (void)_restoreOriginalModeAndPopController;	// 0x32f32e1d
- (void)_setListOfResolutionsToTry:(id)aTry;	// 0x32f32815
- (void)_timerCallback:(id)callback;	// 0x32f32ac5
- (void)_updateLayerContentWithCurrentDisplayInformationForRequestedMode:(id)requestedMode;	// 0x32f32781
- (BOOL)brEventAction:(id)action;	// 0x32f31f7d
- (void)dealloc;	// 0x32f31b45
- (float)heightForRow:(long)row;	// 0x32f3232d
- (long)itemCount;	// 0x32f322f1
- (id)itemForRow:(long)row;	// 0x32f32215
- (void)itemSelected:(long)selected;	// 0x32f32019
- (void)layoutSubcontrols;	// 0x32f31c21
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32f32335
- (BOOL)rowSelectable:(long)selectable;	// 0x32f32331
- (id)titleForRow:(long)row;	// 0x32f32109
- (void)wasPopped;	// 0x32f31eb5
- (void)wasPushed;	// 0x32f31d21
@end

