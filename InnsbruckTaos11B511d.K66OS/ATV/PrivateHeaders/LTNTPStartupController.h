/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRWaitPromptControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface LTNTPStartupController : BRController {
	BRWaitPromptControl *_promptAndSpinner;	// 100 = 0x64
	BRTextControl *_subtext;	// 104 = 0x68
}
- (id)init;	// 0x4ae5c1
- (void).cxx_destruct;	// 0x4aebc5
- (void)_checkForNetworkTimeAfterPosted;	// 0x4aebf9
- (void)_networkChanged:(id)changed;	// 0x4aed51
- (void)_timeChangeNotification:(id)notification;	// 0x4aecb9
- (id)accessibilityLabel;	// 0x4aeb49
- (BOOL)brEventAction:(id)action;	// 0x4ae889
- (void)dealloc;	// 0x4ae81d
- (BOOL)isAccessibilityElement;	// 0x4aeb45
- (void)layoutSubcontrols;	// 0x4aea51
- (void)wasPopped;	// 0x4aea0d
- (void)wasPushed;	// 0x4ae921
@end
