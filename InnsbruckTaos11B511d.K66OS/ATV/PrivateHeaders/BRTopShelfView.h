/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMainMenuShelfErrorControl, BRMediaShelfView, BRMainMenuImageControl;

__attribute__((visibility("hidden")))
@interface BRTopShelfView : BRControl {
	int _state;	// 84 = 0x54
	BRMediaShelfView *_shelf;	// 88 = 0x58
	BRMainMenuShelfErrorControl *_error;	// 92 = 0x5c
	BRMainMenuImageControl *_productImage;	// 96 = 0x60
	BRControl *_customLogoControl;	// 100 = 0x64
}
@property(retain, nonatomic) BRControl *customLogoControl;	// G=0x37c5bd; S=0x37c5cd; @synthesize=_customLogoControl
@property(readonly, assign) BRMainMenuShelfErrorControl *error;	// G=0x37c5a9; @synthesize=_error
@property(readonly, assign) BRMediaShelfView *shelf;	// G=0x37c595; @synthesize=_shelf
@property(assign) int state;	// G=0x37c3e5; S=0x37c3f5; 
- (id)init;	// 0x37bef1
- (BOOL)accessibilityElementIsHidden;	// 0x37c54d
- (id)accessibilityScreenContent;	// 0x37c551
// declared property getter: - (id)customLogoControl;	// 0x37c5bd
- (void)dealloc;	// 0x37c071
// declared property getter: - (id)error;	// 0x37c5a9
- (void)layoutSubcontrols;	// 0x37c189
- (id)preferredActionForKey:(id)key;	// 0x37c2e5
- (void)setAcceptsFocus:(BOOL)focus;	// 0x37c0fd
// declared property setter: - (void)setCustomLogoControl:(id)control;	// 0x37c5cd
// declared property setter: - (void)setState:(int)state;	// 0x37c3f5
// declared property getter: - (id)shelf;	// 0x37c595
// declared property getter: - (int)state;	// 0x37c3e5
@end
