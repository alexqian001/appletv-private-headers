/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPanelControl.h"

@class BRHeaderControl, BRTabControl;

__attribute__((visibility("hidden")))
@interface RUIYTHeaderWithTabControl : BRPanelControl {
	BRHeaderControl *_headerControl;	// 112 = 0x70
	BRTabControl *_tabControl;	// 116 = 0x74
}
@property(readonly, assign) BRHeaderControl *headerControl;	// G=0x27fc39; @synthesize=_headerControl
@property(readonly, assign) BRTabControl *tabControl;	// G=0x27fc4d; @synthesize=_tabControl
- (id)init;	// 0x27faf1
- (void).cxx_destruct;	// 0x27fc61
- (BOOL)brEventAction:(id)action;	// 0x27fc11
// declared property getter: - (id)headerControl;	// 0x27fc39
// declared property getter: - (id)tabControl;	// 0x27fc4d
@end

