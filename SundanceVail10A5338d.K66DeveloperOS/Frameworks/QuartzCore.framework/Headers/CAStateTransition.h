/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSCoding> {
	NSString *_fromState;	// 4 = 0x4
	NSString *_toState;	// 8 = 0x8
	NSArray *_elements;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *elements;	// G=0x3207c93d; S=0x3207c951; @synthesize=_elements
@property(copy, nonatomic) NSString *fromState;	// G=0x3207c8f5; S=0x3207c909; @synthesize=_fromState
@property(copy, nonatomic) NSString *toState;	// G=0x3207c919; S=0x3207c92d; @synthesize=_toState
- (id)init;	// 0x3207c479
- (id)initWithCoder:(id)coder;	// 0x3207c72d
- (id)copyWithZone:(NSZone *)zone;	// 0x3207c7f9
- (void)dealloc;	// 0x3207c4f1
- (id)debugDescription;	// 0x3207c891
- (double)duration;	// 0x3207c569
// declared property getter: - (id)elements;	// 0x3207c93d
- (void)encodeWithCoder:(id)coder;	// 0x3207c699
// declared property getter: - (id)fromState;	// 0x3207c8f5
// declared property setter: - (void)setElements:(id)elements;	// 0x3207c951
// declared property setter: - (void)setFromState:(id)state;	// 0x3207c909
// declared property setter: - (void)setToState:(id)state;	// 0x3207c92d
// declared property getter: - (id)toState;	// 0x3207c919
@end
