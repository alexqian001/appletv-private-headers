/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIThreePartButton.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UILabeledPushButton : UIThreePartButton {
@private
	UILabel *_textLabel;	// 168 = 0xa8
	float _labelFontSize;	// 172 = 0xac
	float _labelOffset;	// 176 = 0xb0
}
@property(retain) id label;	// G=0x30343441; S=0x30343461; converted property
@property(assign, nonatomic) float labelFontSize;	// G=0x303433f1; S=0x30343411; 
@property(assign, nonatomic) float labelOffset;	// G=0x30342c89; S=0x30342c99; @synthesize=_labelOffset
- (void)_drawImageAndTextPartInRect:(CGRect)rect;	// 0x30343f3d
- (void)dealloc;	// 0x30343c2d
- (void)drawTitleAtPoint:(CGPoint)point width:(float)width;	// 0x30343b65
// converted property getter: - (id)label;	// 0x30343441
// declared property getter: - (float)labelFontSize;	// 0x303433f1
// declared property getter: - (float)labelOffset;	// 0x30342c89
- (void)layoutSubviews;	// 0x30344a55
- (void)setHighlighted:(BOOL)highlighted;	// 0x30343be5
// converted property setter: - (void)setLabel:(id)label;	// 0x30343461
// declared property setter: - (void)setLabelFontSize:(float)size;	// 0x30343411
// declared property setter: - (void)setLabelOffset:(float)offset;	// 0x30342c99
@end
