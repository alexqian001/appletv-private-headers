/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSDictionary, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _IDSDevice : NSObject {
	NSDictionary *_info;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *_identities;	// G=0x31177145; 
@property(readonly, assign, nonatomic) NSData *_pushToken;	// G=0x311770e5; 
@property(readonly, assign, nonatomic) NSString *modelIdentifier;	// G=0x31176ed1; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31176f31; 
@property(readonly, assign, nonatomic) NSString *service;	// G=0x31176f91; 
- (id)initWithDictionary:(id)dictionary;	// 0x31176e01
- (void)_addIdentity:(id)identity;	// 0x311771a5
// declared property getter: - (id)_identities;	// 0x31177145
// declared property getter: - (id)_pushToken;	// 0x311770e5
- (void)dealloc;	// 0x31176e85
- (id)description;	// 0x31176ff1
// declared property getter: - (id)modelIdentifier;	// 0x31176ed1
// declared property getter: - (id)name;	// 0x31176f31
// declared property getter: - (id)service;	// 0x31176f91
@end

