/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMetadataLineLayer : BRControl {
	BRTextControl *_labelLayer;	// 84 = 0x54
	BRControl *_valueLayer;	// 88 = 0x58
	float _maxLabelWidth;	// 92 = 0x5c
}
- (id)initWithLabel:(id)label value:(id)value;	// 0x2f516d
- (id)accessibilityLabel;	// 0x2f530d
- (void)dealloc;	// 0x2f5279
- (id)label;	// 0x2f52dd
- (void)layoutSubcontrols;	// 0x2f5435
- (void)setMaxLabelWidth:(float)width;	// 0x2f5365
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f5385
- (id)value;	// 0x2f52fd
@end

