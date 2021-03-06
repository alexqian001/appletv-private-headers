/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSDate, NSDictionary;

@interface SSLookupResponse : NSObject <SSXPCCoding> {
@private
	NSDate *_expirationDate;	// 4 = 0x4
	NSDictionary *_response;	// 8 = 0x8
}
@property(copy, nonatomic) NSDate *expirationDate;	// G=0x34e81c41; S=0x34e81c55; @synthesize=_expirationDate
@property(readonly, assign, nonatomic) NSDictionary *responseDictionary;	// G=0x34e81ae1; 
- (id)initWithResponseDictionary:(id)responseDictionary;	// 0x34e81991
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x34e81b6d
- (id)copyXPCEncoding;	// 0x34e81b19
- (void)dealloc;	// 0x34e81a35
// declared property getter: - (id)expirationDate;	// 0x34e81c41
// declared property getter: - (id)responseDictionary;	// 0x34e81ae1
// declared property setter: - (void)setExpirationDate:(id)date;	// 0x34e81c55
- (id)valueForProperty:(id)property;	// 0x34e81a99
@end

