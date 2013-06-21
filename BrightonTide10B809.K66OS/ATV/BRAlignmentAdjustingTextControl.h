/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextControl.h"


__attribute__((visibility("hidden")))
@interface BRAlignmentAdjustingTextControl : BRTextControl {
	int _singleLineAlignment;	// 88 = 0x58
	int _multiLineAlignment;	// 92 = 0x5c
}
@property(assign) int multiLineAlignment;	// G=0x310df9; S=0x310e0d; @synthesize=_multiLineAlignment
@property(assign) int singleLineAlignment;	// G=0x310dcd; S=0x310de1; @synthesize=_singleLineAlignment
- (id)init;	// 0x310af1
- (void)_updateAttributes;	// 0x310b41
- (void)layoutSubcontrols;	// 0x310d41
// declared property getter: - (int)multiLineAlignment;	// 0x310df9
- (void)setAttributedString:(id)string;	// 0x310cfd
// declared property setter: - (void)setMultiLineAlignment:(int)alignment;	// 0x310e0d
// declared property setter: - (void)setSingleLineAlignment:(int)alignment;	// 0x310de1
// declared property getter: - (int)singleLineAlignment;	// 0x310dcd
@end
