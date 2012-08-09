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
@property(readonly, assign) NSString *name;	// G=0x365378e9; 
+ (id)functionWithName:(id)name;	// 0x3652c5e1
- (id)initWithCoder:(id)coder;	// 0x365d0ee1
- (Object *)CA_copyRenderValue;	// 0x3652c8a9
- (id)_initWithName:(int)name;	// 0x3652c795
- (BOOL)apply:(const double *)apply result:(double *)result;	// 0x365d0d29
- (BOOL)apply:(const double *)apply result:(double *)result parameterFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x365d0d65
- (void)dealloc;	// 0x365d0c8d
- (void)encodeWithCoder:(id)coder;	// 0x365d0e95
- (unsigned long)inputCount;	// 0x365d0cf1
// declared property getter: - (id)name;	// 0x365378e9
- (unsigned long)outputCount;	// 0x365d0d0d
@end
