/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPanelControl.h"

@class BRTabControl, BRHeaderControl;

__attribute__((visibility("hidden")))
@interface RUIYTHeaderWithTabControl : BRPanelControl {
	BRHeaderControl *_headerControl;	// 112 = 0x70
	BRTabControl *_tabControl;	// 116 = 0x74
}
@property(readonly, assign) BRHeaderControl *headerControl;	// G=0x27a799; @synthesize=_headerControl
@property(readonly, assign) BRTabControl *tabControl;	// G=0x27a7ad; @synthesize=_tabControl
- (id)init;	// 0x27a64d
- (void).cxx_destruct;	// 0x27a7c1
- (BOOL)brEventAction:(id)action;	// 0x27a775
// declared property getter: - (id)headerControl;	// 0x27a799
// declared property getter: - (id)tabControl;	// 0x27a7ad
@end

