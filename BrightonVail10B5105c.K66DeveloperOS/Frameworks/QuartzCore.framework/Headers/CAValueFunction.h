/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"
#import "NSCoding.h"

@class NSString;

@interface CAValueFunction : NSObject <NSCoding> {
	NSString *_string;	// 4 = 0x4
	void *_impl;	// 8 = 0x8
}
@property(readonly, assign) NSString *name;	// G=0x352755f1; 
+ (id)functionWithName:(id)name;	// 0x351d5c61
- (id)initWithCoder:(id)coder;	// 0x35275905
- (Object *)CA_copyRenderValue;	// 0x35275899
- (id)_initWithName:(int)name;	// 0x351d5e15
- (BOOL)apply:(const double *)apply result:(double *)result;	// 0x3527572d
- (BOOL)apply:(const double *)apply result:(double *)result parameterFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x35275769
- (void)dealloc;	// 0x3527558d
- (void)encodeWithCoder:(id)coder;	// 0x352758b9
- (unsigned long)inputCount;	// 0x352756f5
// declared property getter: - (id)name;	// 0x352755f1
- (unsigned long)outputCount;	// 0x35275711
@end
