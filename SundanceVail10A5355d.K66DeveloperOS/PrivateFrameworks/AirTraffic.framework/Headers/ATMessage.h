/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSData, NSDictionary, NSString;

@interface ATMessage : NSObject {
	unsigned _session;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSDictionary *_params;	// 12 = 0xc
	NSData *_sig;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *name;	// G=0x314f8fd5; S=0x314f8fe5; @synthesize=_name
@property(retain, nonatomic) NSDictionary *parameters;	// G=0x314f9009; S=0x314f9019; @synthesize=_params
@property(readonly, assign, nonatomic) unsigned sessionNumber;	// G=0x314f903d; @synthesize=_session
@property(retain, nonatomic) NSData *sig;	// G=0x314f904d; S=0x314f905d; @synthesize=_sig
+ (unsigned)currentSessionNumber;	// 0x314f8a31
+ (id)messageFromData:(id)data;	// 0x314f8b69
+ (id)messageFromDictionary:(id)dictionary;	// 0x314f8a71
+ (id)messageWithName:(id)name parameters:(id)parameters;	// 0x314f8e01
+ (id)messageWithName:(id)name parameters:(id)parameters session:(unsigned)session;	// 0x314f8e91
+ (unsigned)nextSessionNumber;	// 0x314f8a1d
+ (void)setSessionNumber:(unsigned)number;	// 0x314f8a41
- (id)initWithDictionary:(id)dictionary;	// 0x314f8d09
- (id)data;	// 0x314f8cc9
- (void)dealloc;	// 0x314f8ec5
- (id)description;	// 0x314f8f3d
- (id)dictionary;	// 0x314f8bfd
// declared property getter: - (id)name;	// 0x314f8fd5
- (id)parameterForKey:(id)key;	// 0x314f8a51
// declared property getter: - (id)parameters;	// 0x314f9009
// declared property getter: - (unsigned)sessionNumber;	// 0x314f903d
// declared property setter: - (void)setName:(id)name;	// 0x314f8fe5
// declared property setter: - (void)setParameters:(id)parameters;	// 0x314f9019
// declared property setter: - (void)setSig:(id)sig;	// 0x314f905d
// declared property getter: - (id)sig;	// 0x314f904d
@end

