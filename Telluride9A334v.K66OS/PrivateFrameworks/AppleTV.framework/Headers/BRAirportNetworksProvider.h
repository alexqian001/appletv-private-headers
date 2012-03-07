/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface BRAirportNetworksProvider : NSObject <BRProvider> {
@private
	NSArray *_networks;	// 4 = 0x4
}
- (id)initWithNetworks:(id)networks;	// 0x33284559
- (id)controlFactory;	// 0x3328462d
- (id)dataAtIndex:(long)index;	// 0x33284691
- (long)dataCount;	// 0x33284671
- (void)dealloc;	// 0x3328450d
- (id)hashForDataAtIndex:(long)index;	// 0x332846b1
- (void)setNetworks:(id)networks;	// 0x332845ad
@end
