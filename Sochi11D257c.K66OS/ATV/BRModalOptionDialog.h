/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BROptionDialog.h"
#import "ATVAutoDismissable.h"


__attribute__((visibility("hidden")))
@interface BRModalOptionDialog : BROptionDialog <ATVAutoDismissable> {
	long _cancelIdx;	// 168 = 0xa8
	long _autoDismissIdx;	// 172 = 0xac
	BOOL _allowMenuButton;	// 176 = 0xb0
	BOOL _allowAutoDismiss;	// 177 = 0xb1
}
- (id)init;	// 0x360e99
- (id)initAllowingMenuButton:(BOOL)button;	// 0x360ead
- (void)_done:(id)done;	// 0x361111
- (BOOL)autoDismiss;	// 0x3610bd
- (BOOL)brEventAction:(id)action;	// 0x36100d
- (long)runModal;	// 0x360f1d
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x36109d
- (void)setCancelIndex:(long)index;	// 0x360ffd
@end

