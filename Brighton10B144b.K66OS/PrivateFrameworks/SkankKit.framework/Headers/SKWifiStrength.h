/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"

@class NSTimer;

@interface SKWifiStrength : SKLayer {
	NSTimer *_timer;	// 56 = 0x38
	int _strength;	// 60 = 0x3c
}
- (id)init;	// 0x35443641
- (void)dealloc;	// 0x354436cd
- (void)drawInContext:(CGContextRef)context;	// 0x35443731
- (void)setStrength:(int)strength;	// 0x354438e9
- (void)updateStrength:(id)strength;	// 0x35443911
@end

