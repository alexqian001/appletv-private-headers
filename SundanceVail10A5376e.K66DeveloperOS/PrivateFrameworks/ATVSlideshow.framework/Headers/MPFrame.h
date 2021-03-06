/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class MPFrameInternal, MPSlide, NSString, NSMutableDictionary;

@interface MPFrame : NSObject <NSCoding, NSCopying> {
	NSMutableDictionary *_attributes;	// 4 = 0x4
	MPSlide *_parentSlide;	// 8 = 0x8
	MPFrameInternal *_internal;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *frameID;	// G=0x361f7299; S=0x361f72b9; @dynamic
@property(retain) MPSlide *parentSlide;	// G=0x361f7639; S=0x361f777d; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x361f7345; S=0x361f737d; @dynamic
+ (id)frameWithFrameID:(id)frameID;	// 0x361f6e5d
- (id)init;	// 0x361f6ef5
- (id)initWithCoder:(id)coder;	// 0x361f713d
- (id)initWithFrameID:(id)frameID;	// 0x361f6e99
- (void)copyStruct:(id)aStruct;	// 0x361f76d9
- (id)copyWithZone:(NSZone *)zone;	// 0x361f6f91
- (void)dealloc;	// 0x361f7231
- (id)description;	// 0x361f6ff5
- (void)dump;	// 0x361f7649
- (void)encodeWithCoder:(id)coder;	// 0x361f7055
- (id)frameAttributeForKey:(id)key;	// 0x361f74e5
- (id)frameAttributes;	// 0x361f746d
// declared property getter: - (id)frameID;	// 0x361f7299
- (id)fullDebugLog;	// 0x361f7671
- (id)parentDocument;	// 0x361f76b1
// converted property getter: - (id)parentSlide;	// 0x361f7639
// declared property getter: - (id)presetID;	// 0x361f7345
- (void)setFrameAttribute:(id)attribute forKey:(id)key;	// 0x361f7511
// declared property setter: - (void)setFrameID:(id)anId;	// 0x361f72b9
// converted property setter: - (void)setParentSlide:(id)slide;	// 0x361f777d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x361f737d
@end

