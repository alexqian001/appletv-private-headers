/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "AppleTV-Structs.h"

@class BRWaitPromptControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface LTNTPStartupController : BRController {
	BRWaitPromptControl *_promptAndSpinner;	// 100 = 0x64
	BRTextControl *_subtext;	// 104 = 0x68
}
- (id)init;	// 0x45f809
- (void).cxx_destruct;	// 0x45fe0d
- (void)_checkForNetworkTimeAfterPosted;	// 0x45fe41
- (void)_networkChanged:(id)changed;	// 0x45ff99
- (void)_timeChangeNotification:(id)notification;	// 0x45ff01
- (id)accessibilityLabel;	// 0x45fd91
- (BOOL)brEventAction:(id)action;	// 0x45fad1
- (void)dealloc;	// 0x45fa65
- (BOOL)isAccessibilityElement;	// 0x45fd8d
- (void)layoutSubcontrols;	// 0x45fc99
- (void)wasPopped;	// 0x45fc55
- (void)wasPushed;	// 0x45fb69
@end
