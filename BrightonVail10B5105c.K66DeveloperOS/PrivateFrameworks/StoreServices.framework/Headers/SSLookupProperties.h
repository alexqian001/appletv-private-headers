/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSMutableDictionary, NSString;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding> {
	int _localizationStyle;	// 4 = 0x4
	NSMutableDictionary *_requestParameters;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *keyProfile;	// G=0x3587eb7d; S=0x3587eb9d; 
@property(assign, nonatomic) int localizationStyle;	// G=0x3587ef25; S=0x3587ef35; @synthesize=_localizationStyle
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3587ee3d
- (id)copyRequestParameters;	// 0x3587ea01
- (id)copyWithZone:(NSZone *)zone;	// 0x3587ed6d
- (id)copyXPCEncoding;	// 0x3587ede9
- (void)dealloc;	// 0x3587e9b5
// declared property getter: - (id)keyProfile;	// 0x3587eb7d
// declared property getter: - (int)localizationStyle;	// 0x3587ef25
// declared property setter: - (void)setKeyProfile:(id)profile;	// 0x3587eb9d
// declared property setter: - (void)setLocalizationStyle:(int)style;	// 0x3587ef35
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x3587ebbd
- (id)valueForRequestParameter:(id)requestParameter;	// 0x3587ed25
@end
