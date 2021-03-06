/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRProviderGroup : XXUnknownSuperclass {
	NSArray *_providers;	// 4 = 0x4
}
@property(readonly, retain) NSArray *providers;	// G=0x4105fd; converted property
+ (id)groupWithProviders:(id)providers;	// 0x4105b1
- (id)initWithProviders:(id)providers;	// 0x410511
- (id)createControlAtGroupIndex:(long)groupIndex currentControl:(id)control requestedBy:(id)by;	// 0x4108c5
- (id)createControlsInGroupRange:(NSRange)groupRange requestedBy:(id)by;	// 0x410925
- (long)dataCount;	// 0x41060d
- (id)dataForGroupIndex:(long)groupIndex;	// 0x4106b9
- (void)dealloc;	// 0x410565
- (long)groupIndexForHash:(id)hash;	// 0x4107a1
- (id)hashForDataAtGroupIndex:(long)groupIndex;	// 0x4106e9
- (id)providerForDataAtGroupIndex:(long)groupIndex providerIndex:(long *)index;	// 0x410719
// converted property getter: - (id)providers;	// 0x4105fd
@end

