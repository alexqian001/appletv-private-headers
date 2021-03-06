/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"
#import "NSCopying.h"

@class NSData;

@interface MessageHeaders : NSObject <NSCopying> {
	NSData *_data;	// 4 = 0x4
	unsigned _preferredEncoding;	// 8 = 0x8
}
@property(assign) unsigned long preferredEncoding;	// G=0x346a1a11; S=0x346a1a21; converted property
+ (id)addressListFromEncodedString:(id)encodedString;	// 0x346a3f89
+ (id)basicHeaders;	// 0x346a2121
+ (id)encodedDataForAddressList:(id)addressList splittingAtLength:(unsigned)length firstLineBuffer:(unsigned)buffer;	// 0x346a35bd
+ (BOOL)isStructuredHeaderKey:(id)key;	// 0x346a2289
+ (BOOL)shouldDecodeHeaderForKey:(id)key;	// 0x346a2101
+ (id)uniqueHeaderKeyStringForString:(id)string;	// 0x346a1ae1
- (id)init;	// 0x346a1a31
- (id)initWithHeaderData:(id)headerData encoding:(unsigned long)encoding;	// 0x346a20bd
- (id)_capitalizedKeyForKey:(id)key;	// 0x346a2299
- (id)_copyAddressListForKey:(id)key;	// 0x346a1df1
- (id)_copyEncodedHeaderStringForKey:(id)key;	// 0x346a2399
- (id)_copyHeaderValueForKey:(id)key;	// 0x346a1ed5
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x346a3271
- (id)_decodeHeaderKeysFromData:(id)data;	// 0x346a34e9
- (id)_headerValueForKey:(id)key;	// 0x346a1eb1
- (id)_headerValueForKey:(id)key offset:(unsigned *)offset;	// 0x346a1f65
- (BOOL)_isStructuredHeaderKey:(id)key;	// 0x346a2279
- (void)_setCapitalizedKey:(id)key forKey:(id)key2;	// 0x346a2309
- (id)allHeaderKeys;	// 0x346a1f95
- (void)appendHeaderData:(id)data andRecipients:(id)recipients;	// 0x346a25cd
- (id)copyAddressListForBcc;	// 0x346a1d11
- (id)copyAddressListForCc;	// 0x346a1d2d
- (id)copyAddressListForReplyTo;	// 0x346a1cd9
- (id)copyAddressListForResentFrom;	// 0x346a1cf5
- (id)copyAddressListForSender;	// 0x346a1dd5
- (id)copyAddressListForTo;	// 0x346a1d49
- (id)copyDecodedStringFromHeaderData:(id)headerData withRange:(NSRange)range;	// 0x346a2f91
- (id)copyEncodedStringForBcc;	// 0x346a1c69
- (id)copyEncodedStringForCc;	// 0x346a1c85
- (id)copyEncodedStringForResentFrom;	// 0x346a1c4d
- (id)copyEncodedStringForSender;	// 0x346a1cbd
- (id)copyEncodedStringForTo;	// 0x346a1ca1
- (id)copyFirstHeaderForKey:(id)key;	// 0x346a1bfd
- (id)copyFirstNonDecodedHeaderForKey:(id)key;	// 0x346a254d
- (id)copyFirstStringValueForKey:(id)key;	// 0x346a1b51
- (id)copyHeadersForKey:(id)key;	// 0x346a1e71
- (id)copyWithZone:(NSZone *)zone;	// 0x346a2075
- (void)dealloc;	// 0x346a202d
- (id)description;	// 0x346a1a6d
- (id)encodedHeaders;	// 0x346a1b21
- (id)firstHeaderForKey:(id)key;	// 0x346a1c29
- (id)firstSenderAddress;	// 0x346a1d65
- (BOOL)hasHeaderForKey:(id)key;	// 0x346a3331
- (id)headerData;	// 0x346a1fb5
- (id)headersForKey:(id)key;	// 0x346a1e4d
- (id)isoLatin1CharsetHint;	// 0x346a3e21
- (BOOL)messageIsFromEntourage;	// 0x346a3d79
- (id)mutableCopy;	// 0x346a1fe5
// converted property getter: - (unsigned long)preferredEncoding;	// 0x346a1a11
- (id)references;	// 0x346a3379
// converted property setter: - (void)setPreferredEncoding:(unsigned long)encoding;	// 0x346a1a21
@end

