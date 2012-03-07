/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSData.h> // Unknown library
#import "MIME-Structs.h"


@interface NSData (NSDataExtensions)
- (BOOL)mf_immutable;	// 0x311dba51
- (id)mf_subdataWithRange:(NSRange)range;	// 0x311dba89
@end

@interface NSData (MimeDataEncoding)
- (id)mf_decodeBase64;	// 0x311e323d
- (id)mf_decodeBase64InRange:(NSRange *)range;	// 0x311e3245
- (id)mf_decodeModifiedBase64;	// 0x311e324d
- (id)mf_decodeQuotedPrintableForText:(BOOL)text;	// 0x311e2ea9
- (id)mf_decodeUuencoded;	// 0x311e2f49
- (id)mf_encodeBase64;	// 0x311e30c1
- (id)mf_encodeBase64HeaderData;	// 0x311e30d9
- (id)mf_encodeBase64WithoutLineBreaks;	// 0x311e30b5
- (id)mf_encodeModifiedBase64;	// 0x311e30cd
@end

@interface NSData (NSDataUtils)
- (id)mf_copyHexString;	// 0x311e51c5
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// 0x311e57b9
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// 0x311e528d
- (NSRange)mf_rangeOfByteFromSet:(id)set;	// 0x311e5685
- (NSRange)mf_rangeOfByteFromSet:(id)set range:(NSRange)range;	// 0x311e513d
- (NSRange)mf_rangeOfCString:(const char *)cstring;	// 0x311e56d1
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options;	// 0x311e5719
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options range:(NSRange)range;	// 0x311e5761
- (NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x311e5631
- (NSRange)mf_rangeOfRFC822HeaderData;	// 0x311e55c9
- (id)mf_subdataFromIndex:(unsigned)index;	// 0x311e5109
- (id)mf_subdataToIndex:(unsigned)index;	// 0x311e50f5
@end

@interface NSData (DigestUtilities)
- (id)mf_MD5Digest;	// 0x312024f9
@end
