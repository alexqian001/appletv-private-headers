/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureInput, NSString, AVCaptureInputPortInternal;

@interface AVCaptureInputPort : NSObject {
@private
	AVCaptureInputPortInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x3476a371; S=0x3476a38d; 
@property(readonly, assign, nonatomic) opaqueCMFormatDescription *formatDescription;	// G=0x3476a355; 
@property(readonly, assign, nonatomic) AVCaptureInput *input;	// G=0x3476a339; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3476a3e5; 
+ (id)portWithInput:(id)input mediaType:(id)type formatDescription:(opaqueCMFormatDescription *)description enabled:(BOOL)enabled;	// 0x3476a4e9
- (id)init;	// 0x3476a469
- (id)initWithInput:(id)input mediaType:(id)type formatDescription:(opaqueCMFormatDescription *)description enabled:(BOOL)enabled;	// 0x3476a60d
- (void)_setFormatDescription:(opaqueCMFormatDescription *)description;	// 0x3476a5a5
- (void)dealloc;	// 0x3476a421
- (id)description;	// 0x3476a6b9
// declared property getter: - (opaqueCMFormatDescription *)formatDescription;	// 0x3476a355
// declared property getter: - (id)input;	// 0x3476a339
// declared property getter: - (BOOL)isEnabled;	// 0x3476a371
// declared property getter: - (id)mediaType;	// 0x3476a3e5
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3476a38d
- (void)setOwner:(id)owner;	// 0x3476a31d
@end
