/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface LTFairPlayInfo : XXUnknownSuperclass {
	id _sessionToken;	// 4 = 0x4
	NSString *_keyBagPath;	// 8 = 0x8
}
@property(readonly, retain) NSString *keyBagPath;	// G=0x491fb5; converted property
@property(readonly, retain) id sessionToken;	// G=0x491fa1; converted property
+ (id)infoWithToken:(id)token keyBagPath:(id)path;	// 0x491e51
- (id)initWithToken:(id)token keyBagPath:(id)path;	// 0x491ebd
- (void).cxx_destruct;	// 0x491fc9
- (id)description;	// 0x491f49
// converted property getter: - (id)keyBagPath;	// 0x491fb5
// converted property getter: - (id)sessionToken;	// 0x491fa1
@end
