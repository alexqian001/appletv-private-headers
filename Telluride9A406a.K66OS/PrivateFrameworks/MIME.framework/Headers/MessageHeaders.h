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
@property(assign) unsigned long preferredEncoding;	// G=0x32598b31; S=0x32598b41; converted property
+ (id)addressListFromEncodedString:(id)encodedString;	// 0x325993a1
+ (id)addressListFromEncodedString:(id)encodedString encoding:(unsigned long)encoding;	// 0x325993b5
+ (id)basicHeaders;	// 0x32599909
+ (id)encodedDataForAddressList:(id)addressList splittingAtLength:(unsigned)length firstLineBuffer:(unsigned)buffer;	// 0x32598bdd
+ (BOOL)isStructuredHeaderKey:(id)key;	// 0x325998fd
+ (BOOL)shouldDecodeHeaderForKey:(id)key;	// 0x325998d9
+ (id)uniqueHeaderKeyStringForString:(id)string;	// 0x32598b91
- (id)init;	// 0x32598b51
- (id)initWithHeaderData:(id)headerData encoding:(unsigned long)encoding;	// 0x3259b18d
- (id)_capitalizedKeyForKey:(id)key;	// 0x3259af2d
- (unsigned long)_contentTypeEncoding;	// 0x3259ae39
- (id)_copyAddressListForKey:(id)key;	// 0x3259a899
- (id)_copyEncodedHeaderStringForKey:(id)key;	// 0x3259a93d
- (id)_copyHeaderValueForKey:(id)key;	// 0x3259abe5
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x3259acd1
- (id)_decodeHeaderKeysFromData:(id)data;	// 0x3259a31d
- (id)_headerValueForKey:(id)key;	// 0x3259abbd
- (id)_headerValueForKey:(id)key offset:(unsigned *)offset;	// 0x3259ac9d
- (BOOL)_isStructuredHeaderKey:(id)key;	// 0x3259b04d
- (void)_setCapitalizedKey:(id)key forKey:(id)key2;	// 0x3259af95
- (id)allHeaderKeys;	// 0x3259b02d
- (void)appendHeaderData:(id)data andRecipients:(id)recipients;	// 0x32599a2d
- (id)copyAddressListForBcc;	// 0x3259a7a9
- (id)copyAddressListForCc;	// 0x3259a7c5
- (id)copyAddressListForReplyTo;	// 0x3259a771
- (id)copyAddressListForResentFrom;	// 0x3259a78d
- (id)copyAddressListForSender;	// 0x3259a87d
- (id)copyAddressListForTo;	// 0x3259a7e1
- (id)copyDecodedStringFromHeaderData:(id)headerData withRange:(NSRange)range;	// 0x3259ada9
- (id)copyEncodedStringForBcc;	// 0x3259a701
- (id)copyEncodedStringForCc;	// 0x3259a71d
- (id)copyEncodedStringForResentFrom;	// 0x3259a6e5
- (id)copyEncodedStringForSender;	// 0x3259a755
- (id)copyEncodedStringForTo;	// 0x3259a739
- (id)copyFirstHeaderForKey:(id)key;	// 0x3259a541
- (id)copyFirstNonDecodedHeaderForKey:(id)key;	// 0x3259a4b9
- (id)copyFirstStringValueForKey:(id)key;	// 0x3259a3fd
- (id)copyHeadersForKey:(id)key;	// 0x3259ab39
- (id)copyWithZone:(NSZone *)zone;	// 0x3259b135
- (void)dealloc;	// 0x3259b0e9
- (id)description;	// 0x325999b9
- (id)encodedHeaders;	// 0x3259a0c1
- (id)firstHeaderForKey:(id)key;	// 0x3259a565
- (id)firstSenderAddress;	// 0x3259a7fd
- (BOOL)hasHeaderForKey:(id)key;	// 0x3259ab81
- (id)headerData;	// 0x3259b059
- (id)headersForKey:(id)key;	// 0x3259ab11
- (id)isoLatin1CharsetHint;	// 0x3259a199
- (BOOL)messageIsFromEntourage;	// 0x3259a0f9
- (id)mutableCopy;	// 0x3259b091
// converted property getter: - (unsigned long)preferredEncoding;	// 0x32598b31
- (id)references;	// 0x3259a585
// converted property setter: - (void)setPreferredEncoding:(unsigned long)encoding;	// 0x32598b41
@end
