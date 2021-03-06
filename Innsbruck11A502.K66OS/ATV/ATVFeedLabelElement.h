/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, UIColor, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedLabelElement : ATVFeedElement {
	NSString *_label;	// 4 = 0x4
	NSDictionary *_styleKeyValues;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *label;	// G=0x13ae69; S=0x13ae7d; @synthesize=_label
@property(readonly, assign, nonatomic) UIColor *labelColor;	// G=0x13ae15; 
@property(retain, nonatomic) NSDictionary *styleKeyValues;	// G=0x13ae8d; S=0x13ae9d; @synthesize=_styleKeyValues
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13ad09
- (void).cxx_destruct;	// 0x13aec5
// declared property getter: - (id)label;	// 0x13ae69
// declared property getter: - (id)labelColor;	// 0x13ae15
// declared property setter: - (void)setLabel:(id)label;	// 0x13ae7d
// declared property setter: - (void)setStyleKeyValues:(id)values;	// 0x13ae9d
// declared property getter: - (id)styleKeyValues;	// 0x13ae8d
@end

