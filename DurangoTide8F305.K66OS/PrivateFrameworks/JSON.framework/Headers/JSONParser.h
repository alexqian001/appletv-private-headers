/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/JSON.framework/JSON
 */

#import "JSON.h"


__attribute__((visibility("hidden")))
@interface JSONParser : JSON {
@private
	char *c;	// 16 = 0x10
	char *start;	// 20 = 0x14
	char *end;	// 24 = 0x18
}
- (id)newScanArray;	// 0x30b9ce81
- (id)newScanConstant;	// 0x30b9d4c5
- (id)newScanDictionary;	// 0x30b9cb35
- (id)newScanNumber;	// 0x30b9c61d
- (id)newScanString;	// 0x30b9d5f9
- (id)newScanValue;	// 0x30b9d0a5
- (id)objectWithData:(id)data;	// 0x30b9d1e5
- (BOOL)scanHexQuad:(unsigned short *)quad;	// 0x30b9c97d
- (BOOL)scanIsAtEnd;	// 0x30b9c5c1
- (BOOL)scanUnicodeChar:(unsigned short *)aChar;	// 0x30b9ca35
- (void)setErrorWithCode:(unsigned)code string:(id)string;	// 0x30b9d999
- (unsigned)stringEncodingForJSONData:(id)jsondata;	// 0x30b9d44d
@end
