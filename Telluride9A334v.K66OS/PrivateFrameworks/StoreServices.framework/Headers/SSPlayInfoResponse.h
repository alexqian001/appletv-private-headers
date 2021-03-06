/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSData, NSError;

@interface SSPlayInfoResponse : NSObject <SSCoding, NSCopying> {
@private
	NSError *_error;	// 4 = 0x4
	NSData *_playInfoData;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSError *error;	// G=0x324f1ae5; @synthesize=_error
@property(readonly, assign, nonatomic) NSData *playInfoData;	// G=0x324f1af5; @synthesize=_playInfoData
- (id)initWithPlayInfoData:(id)playInfoData error:(id)error;	// 0x324f1a6d
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324f1881
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x324f1951
- (id)copyPropertyListEncoding;	// 0x324f17a5
- (id)copyWithZone:(NSZone *)zone;	// 0x324f1721
- (void *)copyXPCEncoding;	// 0x324f184d
- (void)dealloc;	// 0x324f16c1
- (id)description;	// 0x324f198d
// declared property getter: - (id)error;	// 0x324f1ae5
// declared property getter: - (id)playInfoData;	// 0x324f1af5
@end

