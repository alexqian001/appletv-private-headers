/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"


__attribute__((visibility("hidden")))
@interface ATVSWUSlowUpdateRebootController : BRViewController {
	BOOL _attemptingToReboot;	// 104 = 0x68
	id _rebootBlock;	// 108 = 0x6c
}
@property(assign, nonatomic) BOOL attemptingToReboot;	// G=0x264a25; S=0x264a35; @synthesize=_attemptingToReboot
@property(copy, nonatomic) id rebootBlock;	// G=0x264a01; S=0x264a15; @synthesize=_rebootBlock
- (id)init;	// 0x2645b1
- (id)initWithRebootBlock:(id)rebootBlock;	// 0x2645bd
- (void).cxx_destruct;	// 0x264a45
// declared property getter: - (BOOL)attemptingToReboot;	// 0x264a25
- (BOOL)brEventAction:(id)action;	// 0x264931
- (void)dealloc;	// 0x264739
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x264869
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x26477d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x264865
// declared property getter: - (id)rebootBlock;	// 0x264a01
// declared property setter: - (void)setAttemptingToReboot:(BOOL)reboot;	// 0x264a35
// declared property setter: - (void)setRebootBlock:(id)block;	// 0x264a15
- (void)wasPushed;	// 0x264999
@end

