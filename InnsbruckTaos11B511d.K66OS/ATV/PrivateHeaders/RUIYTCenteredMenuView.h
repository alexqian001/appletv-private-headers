/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class BRHeaderControl, BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface RUIYTCenteredMenuView : BRMenuView {
	BRHeaderControl *_headerControl;	// 112 = 0x70
	BRTextControl *_descriptionControl;	// 116 = 0x74
	BRImageControl *_backgroundImageControl;	// 120 = 0x78
}
@property(retain) id backgroundImage;	// G=0x29aad1; S=0x29aaf1; converted property
- (id)init;	// 0x29a8c5
- (void).cxx_destruct;	// 0x29b0f1
// converted property getter: - (id)backgroundImage;	// 0x29aad1
- (void)layoutSubcontrols;	// 0x29adb5
// converted property setter: - (void)setBackgroundImage:(id)image;	// 0x29aaf1
- (void)setListHeader:(id)header;	// 0x29a955
- (void)setMenuDescription:(id)description;	// 0x29a9cd
@end
