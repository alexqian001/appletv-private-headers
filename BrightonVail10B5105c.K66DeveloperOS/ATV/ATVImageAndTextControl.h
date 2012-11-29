/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, NSAttributedString, BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVImageAndTextControl : BRControl {
	BRImage *_image;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	BOOL _imageOnLeft;	// 92 = 0x5c
	float _preferredImageHeight;	// 96 = 0x60
	float _gapBetweenImageAndText;	// 100 = 0x64
	BRImageControl *_imageControl;	// 104 = 0x68
	BRTextControl *_textControl;	// 108 = 0x6c
}
@property(assign, nonatomic) float gapBetweenImageAndText;	// G=0x132cb9; S=0x132cc9; @synthesize=_gapBetweenImageAndText
@property(assign, nonatomic) BRImage *image;	// G=0x132c39; S=0x132c49; @synthesize=_image
@property(retain) BRImageControl *imageControl;	// G=0x132cd9; S=0x132ced; @synthesize=_imageControl
@property(assign, nonatomic) BOOL imageOnLeft;	// G=0x132c79; S=0x132c89; @synthesize=_imageOnLeft
@property(assign, nonatomic) float preferredImageHeight;	// G=0x132c99; S=0x132ca9; @synthesize=_preferredImageHeight
@property(assign, nonatomic) NSAttributedString *text;	// G=0x132c59; S=0x132c69; @synthesize=_text
@property(retain) BRTextControl *textControl;	// G=0x132cfd; S=0x132d11; @synthesize=_textControl
- (id)initWithImage:(id)image text:(id)text;	// 0x1326e9
- (void)_imageDidChange;	// 0x132d21
- (void)_textDidChange;	// 0x132dc9
- (void)dealloc;	// 0x132859
// declared property getter: - (float)gapBetweenImageAndText;	// 0x132cb9
// declared property getter: - (id)image;	// 0x132c39
// declared property getter: - (id)imageControl;	// 0x132cd9
// declared property getter: - (BOOL)imageOnLeft;	// 0x132c79
- (void)layoutSubcontrols;	// 0x132ac1
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x13292d
// declared property getter: - (float)preferredImageHeight;	// 0x132c99
// declared property setter: - (void)setGapBetweenImageAndText:(float)text;	// 0x132cc9
// declared property setter: - (void)setImage:(id)image;	// 0x132c49
// declared property setter: - (void)setImageControl:(id)control;	// 0x132ced
// declared property setter: - (void)setImageOnLeft:(BOOL)left;	// 0x132c89
// declared property setter: - (void)setPreferredImageHeight:(float)height;	// 0x132ca9
// declared property setter: - (void)setText:(id)text;	// 0x132c69
// declared property setter: - (void)setTextControl:(id)control;	// 0x132d11
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x1329e9
// declared property getter: - (id)text;	// 0x132c59
// declared property getter: - (id)textControl;	// 0x132cfd
@end
