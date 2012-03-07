/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSData;

@interface MessageHeaders : NSObject <NSCopying> {
	NSData *_data;	// 4 = 0x4
	unsigned _preferredEncoding;	// 8 = 0x8
}
@property(assign) unsigned long preferredEncoding;	// G=0x311e6b31; S=0x311e6b41; converted property
+ (id)addressListFromEncodedString:(id)encodedString;	// 0x311e73a1
+ (id)addressListFromEncodedString:(id)encodedString encoding:(unsigned long)encoding;	// 0x311e73b5
+ (id)basicHeaders;	// 0x311e7909
+ (id)encodedDataForAddressList:(id)addressList splittingAtLength:(unsigned)length firstLineBuffer:(unsigned)buffer;	// 0x311e6bdd
+ (BOOL)isStructuredHeaderKey:(id)key;	// 0x311e78fd
+ (BOOL)shouldDecodeHeaderForKey:(id)key;	// 0x311e78d9
+ (id)uniqueHeaderKeyStringForString:(id)string;	// 0x311e6b91
- (id)init;	// 0x311e6b51
- (id)initWithHeaderData:(id)headerData encoding:(unsigned long)encoding;	// 0x311e918d
- (id)_capitalizedKeyForKey:(id)key;	// 0x311e8f2d
- (unsigned long)_contentTypeEncoding;	// 0x311e8e39
- (id)_copyAddressListForKey:(id)key;	// 0x311e8899
- (id)_copyEncodedHeaderStringForKey:(id)key;	// 0x311e893d
- (id)_copyHeaderValueForKey:(id)key;	// 0x311e8be5
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x311e8cd1
- (id)_decodeHeaderKeysFromData:(id)data;	// 0x311e831d
- (id)_headerValueForKey:(id)key;	// 0x311e8bbd
- (id)_headerValueForKey:(id)key offset:(unsigned *)offset;	// 0x311e8c9d
- (BOOL)_isStructuredHeaderKey:(id)key;	// 0x311e904d
- (void)_setCapitalizedKey:(id)key forKey:(id)key2;	// 0x311e8f95
- (id)allHeaderKeys;	// 0x311e902d
- (void)appendHeaderData:(id)data andRecipients:(id)recipients;	// 0x311e7a2d
- (id)copyAddressListForBcc;	// 0x311e87a9
- (id)copyAddressListForCc;	// 0x311e87c5
- (id)copyAddressListForReplyTo;	// 0x311e8771
- (id)copyAddressListForResentFrom;	// 0x311e878d
- (id)copyAddressListForSender;	// 0x311e887d
- (id)copyAddressListForTo;	// 0x311e87e1
- (id)copyDecodedStringFromHeaderData:(id)headerData withRange:(NSRange)range;	// 0x311e8da9
- (id)copyEncodedStringForBcc;	// 0x311e8701
- (id)copyEncodedStringForCc;	// 0x311e871d
- (id)copyEncodedStringForResentFrom;	// 0x311e86e5
- (id)copyEncodedStringForSender;	// 0x311e8755
- (id)copyEncodedStringForTo;	// 0x311e8739
- (id)copyFirstHeaderForKey:(id)key;	// 0x311e8541
- (id)copyFirstNonDecodedHeaderForKey:(id)key;	// 0x311e84b9
- (id)copyFirstStringValueForKey:(id)key;	// 0x311e83fd
- (id)copyHeadersForKey:(id)key;	// 0x311e8b39
- (id)copyWithZone:(NSZone *)zone;	// 0x311e9135
- (void)dealloc;	// 0x311e90e9
- (id)description;	// 0x311e79b9
- (id)encodedHeaders;	// 0x311e80c1
- (id)firstHeaderForKey:(id)key;	// 0x311e8565
- (id)firstSenderAddress;	// 0x311e87fd
- (BOOL)hasHeaderForKey:(id)key;	// 0x311e8b81
- (id)headerData;	// 0x311e9059
- (id)headersForKey:(id)key;	// 0x311e8b11
- (id)isoLatin1CharsetHint;	// 0x311e8199
- (BOOL)messageIsFromEntourage;	// 0x311e80f9
- (id)mutableCopy;	// 0x311e9091
// converted property getter: - (unsigned long)preferredEncoding;	// 0x311e6b31
- (id)references;	// 0x311e8585
// converted property setter: - (void)setPreferredEncoding:(unsigned long)encoding;	// 0x311e6b41
@end
