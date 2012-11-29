/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeConnection : NSObject <NSCoding> {
	id source;	// 4 = 0x4
	id destination;	// 8 = 0x8
	NSString *label;	// 12 = 0xc
}
@property(retain) id destination;	// G=0x31d76089; S=0x31e5b7f5; converted property
@property(retain) NSString *label;	// G=0x31d760b5; S=0x31e5b839; converted property
@property(retain) id source;	// G=0x31d75fd5; S=0x31e5b7b1; converted property
- (id)initWithCoder:(id)coder;	// 0x31d71921
- (void)connect;	// 0x31e5b87d
- (void)connectForSimulator;	// 0x31e5b881
- (void)dealloc;	// 0x31d7664d
// converted property getter: - (id)destination;	// 0x31d76089
- (void)encodeWithCoder:(id)coder;	// 0x31e5b71d
// converted property getter: - (id)label;	// 0x31d760b5
// converted property setter: - (void)setDestination:(id)destination;	// 0x31e5b7f5
// converted property setter: - (void)setLabel:(id)label;	// 0x31e5b839
// converted property setter: - (void)setSource:(id)source;	// 0x31e5b7b1
// converted property getter: - (id)source;	// 0x31d75fd5
@end
