/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"

@class NSTimer;

@interface ATVRebootWaitController : BRViewController {
@private
	NSTimer *_holdoffTimer;	// 84 = 0x54
	float _lastProgressPercent;	// 88 = 0x58
}
- (id)init;	// 0x35cb5605
- (void)_holdOffScreenSaver:(id)saver;	// 0x35cb584d
- (BOOL)brEventAction:(id)action;	// 0x35cb57e5
- (void)dealloc;	// 0x35cb5749
- (id)secondaryProgressImagePath;	// 0x35cb57e9
- (void)setUpdatePercentage:(float)percentage;	// 0x35cb5775
- (void)wasDismissed;	// 0x35cb5819
@end
