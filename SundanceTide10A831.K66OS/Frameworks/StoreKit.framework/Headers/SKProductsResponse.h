/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface SKProductsResponse : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *invalidProductIdentifiers;	// G=0x338a64d5; 
@property(readonly, assign, nonatomic) NSArray *products;	// G=0x338a6519; 
- (id)init;	// 0x338a6421
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x338a655d
- (void)_setInvalidIdentifiers:(id)identifiers;	// 0x338a6989
- (void)_setProducts:(id)products;	// 0x338a69d9
- (id)copyXPCEncoding;	// 0x338a6855
- (void)dealloc;	// 0x338a6485
// declared property getter: - (id)invalidProductIdentifiers;	// 0x338a64d5
// declared property getter: - (id)products;	// 0x338a6519
@end
