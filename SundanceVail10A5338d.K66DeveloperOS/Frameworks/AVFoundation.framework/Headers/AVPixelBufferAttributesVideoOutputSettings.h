/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVDecodedVideoSettingsForFig.h"
#import "AVVideoOutputSettings.h"

@class NSDictionary;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
}
@property(readonly, assign, nonatomic) NSDictionary *pixelBufferAttributes;	// G=0x317cc235; 
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)videoSettingsDictionary exceptionReason:(id *)reason;	// 0x317cbf51
+ (id)eligibleOutputSettingsDictionaryKeys;	// 0x317cbef9
- (id)initWithPixelBufferAttributes:(id)pixelBufferAttributes exceptionReason:(id *)reason;	// 0x317cbfa1
- (id)initWithTrustedPixelBufferAttributes:(id)trustedPixelBufferAttributes;	// 0x317cc159
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)reason;	// 0x317cc231
- (int)height;	// 0x317cc1d9
- (BOOL)isCodecAvailableOnCurrentSystem;	// 0x317cc22d
// declared property getter: - (id)pixelBufferAttributes;	// 0x317cc235
- (int)width;	// 0x317cc189
- (BOOL)willYieldCompressedSamples;	// 0x317cc229
@end
