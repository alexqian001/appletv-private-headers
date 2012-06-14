/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MPFrameInternal, NSMutableDictionary, MPSlide, NSString;

@interface MPFrame : NSObject <NSCoding, NSCopying> {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	MPSlide *_parentSlide;	// 8 = 0x8
	MPFrameInternal *_internal;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *frameID;	// G=0x364402f9; S=0x36440319; @dynamic
@property(retain) MPSlide *parentSlide;	// G=0x36440699; S=0x364407dd; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x364403a5; S=0x364403dd; @dynamic
+ (id)frameWithFrameID:(id)frameID;	// 0x3643febd
- (id)init;	// 0x3643ff55
- (id)initWithCoder:(id)coder;	// 0x3644019d
- (id)initWithFrameID:(id)frameID;	// 0x3643fef9
- (void)copyStruct:(id)aStruct;	// 0x36440739
- (id)copyWithZone:(NSZone *)zone;	// 0x3643fff1
- (void)dealloc;	// 0x36440291
- (id)description;	// 0x36440055
- (void)dump;	// 0x364406a9
- (void)encodeWithCoder:(id)coder;	// 0x364400b5
- (id)frameAttributeForKey:(id)key;	// 0x36440545
- (id)frameAttributes;	// 0x364404cd
// declared property getter: - (id)frameID;	// 0x364402f9
- (id)fullDebugLog;	// 0x364406d1
- (id)parentDocument;	// 0x36440711
// converted property getter: - (id)parentSlide;	// 0x36440699
// declared property getter: - (id)presetID;	// 0x364403a5
- (void)setFrameAttribute:(id)attribute forKey:(id)key;	// 0x36440571
// declared property setter: - (void)setFrameID:(id)anId;	// 0x36440319
// converted property setter: - (void)setParentSlide:(id)slide;	// 0x364407dd
// declared property setter: - (void)setPresetID:(id)anId;	// 0x364403dd
@end
