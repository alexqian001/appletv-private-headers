/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSData.h> // Unknown library


@interface NSData (NSDataExtensions)
- (BOOL)mf_immutable;	// 0x344071b1
- (id)mf_subdataWithRange:(NSRange)range;	// 0x344070c1
@end

@interface NSData (MimeDataEncoding)
- (id)mf_decodeBase64;	// 0x3440f54d
- (id)mf_decodeBase64InRange:(NSRange *)range;	// 0x3440f6bd
- (id)mf_decodeModifiedBase64;	// 0x3440f6c5
- (id)mf_decodeQuotedPrintableForText:(BOOL)text;	// 0x3440f3d1
- (id)mf_decodeUuencoded;	// 0x3440f4bd
- (id)mf_encodeBase64;	// 0x3440f7b9
- (id)mf_encodeBase64HeaderData;	// 0x3440f7d1
- (id)mf_encodeBase64WithoutLineBreaks;	// 0x3440f6cd
- (id)mf_encodeModifiedBase64;	// 0x3440f7c5
@end

@interface NSData (NSDataUtils)
- (id)mf_copyHexString;	// 0x34411b55
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// 0x344119c5
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// 0x34411909
- (NSRange)mf_rangeOfByteFromSet:(id)set;	// 0x344117fd
- (NSRange)mf_rangeOfByteFromSet:(id)set range:(NSRange)range;	// 0x34411775
- (NSRange)mf_rangeOfCString:(const char *)cstring;	// 0x34411849
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options;	// 0x34411891
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options range:(NSRange)range;	// 0x344118d9
- (NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x3441171d
- (NSRange)mf_rangeOfRFC822HeaderData;	// 0x344114c5
- (id)mf_subdataFromIndex:(unsigned)index;	// 0x344116e9
- (id)mf_subdataToIndex:(unsigned)index;	// 0x344116d5
@end

@interface NSData (DigestUtilities)
- (id)mf_MD5Digest;	// 0x3442fce5
@end
