/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import "NSCoding.h"

@class AVVideoCompositionInstructionInternal, NSArray;

@interface AVVideoCompositionInstruction : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	AVVideoCompositionInstructionInternal *_instruction;	// 4 = 0x4
}
@property(retain, nonatomic) CGColorRef backgroundColor;	// G=0x31470231; S=0x31471b25; 
@property(readonly, assign, nonatomic) BOOL enablePostProcessing;	// G=0x31470271; 
@property(readonly, copy, nonatomic) NSArray *layerInstructions;	// G=0x31470251; 
@property(readonly, assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x31470181; 
+ (void)initialize;	// 0x3147129d
- (id)init;	// 0x31471f9d
- (id)initWithCoder:(id)coder;	// 0x31471ed5
- (void)_setValuesFromDictionary:(id)dictionary;	// 0x314712dd
// declared property getter: - (CGColorRef)backgroundColor;	// 0x31470231
- (id)copyWithZone:(NSZone *)zone;	// 0x31471d6d
- (void)dealloc;	// 0x31471bc9
- (id)description;	// 0x31471249
- (id)dictionaryRepresentation;	// 0x314716d9
// declared property getter: - (BOOL)enablePostProcessing;	// 0x31470271
- (void)encodeWithCoder:(id)coder;	// 0x314711b1
- (void)finalize;	// 0x31471b6d
// declared property getter: - (id)layerInstructions;	// 0x31470251
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31471c51
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x31471b25
- (void)setEnablePostProcessing:(BOOL)processing;	// 0x31470291
- (void)setLayerInstructions:(id)instructions;	// 0x314711e9
- (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x314701d1
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x31470181
@end

