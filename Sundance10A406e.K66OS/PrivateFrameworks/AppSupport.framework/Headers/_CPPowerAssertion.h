/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {
	unsigned _assertion;	// 4 = 0x4
	double _timeout;	// 8 = 0x8
	NSString *_identifier;	// 16 = 0x10
	NSArray *_stack;	// 20 = 0x14
}
@property(assign, nonatomic) double timeout;	// G=0x307384f9; S=0x30738511; @synthesize=_timeout
- (id)initWithIdentifier:(id)identifier timeout:(double)timeout;	// 0x30738049
- (void)dealloc;	// 0x30738289
// declared property setter: - (void)setTimeout:(double)timeout;	// 0x30738511
- (void)timedout;	// 0x3073838d
// declared property getter: - (double)timeout;	// 0x307384f9
@end

