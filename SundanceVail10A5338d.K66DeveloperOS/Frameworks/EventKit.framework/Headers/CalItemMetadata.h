/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CalItemMetadata : NSObject <NSCoding> {
	NSDictionary *_x_props;	// 4 = 0x4
	int _classification;	// 8 = 0x8
}
@property(assign) int classification;	// G=0x34b48c6d; S=0x34b48c81; @synthesize=_classification
@property(retain) NSDictionary *x_props;	// G=0x34b48c49; S=0x34b48c5d; @synthesize=_x_props
+ (id)metadataWithData:(id)data;	// 0x34b489d5
+ (id)metadataWithICSComponent:(id)icscomponent;	// 0x34b4898d
- (id)init;	// 0x34b485f9
- (id)initWithCoder:(id)coder;	// 0x34b48bb1
- (id)initWithICSComponent:(id)icscomponent;	// 0x34b48371
- (void)applyToComponent:(id)component;	// 0x34b4860d
// declared property getter: - (int)classification;	// 0x34b48c6d
- (id)dataRepresentationWithExistingMetaData:(id)existingMetaData;	// 0x34b48779
- (void)dealloc;	// 0x34b48b05
- (void)encodeWithCoder:(id)coder;	// 0x34b48b51
// declared property setter: - (void)setClassification:(int)classification;	// 0x34b48c81
// declared property setter: - (void)setX_props:(id)props;	// 0x34b48c5d
// declared property getter: - (id)x_props;	// 0x34b48c49
@end
