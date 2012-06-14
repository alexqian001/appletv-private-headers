/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSMutableData, NSArray;

@interface ABVCardLexer : NSObject {
	NSMutableData *_data;	// 4 = 0x4
	char *_bytes;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	unsigned _peakedPoint;	// 16 = 0x10
	unsigned _cursor;	// 20 = 0x14
	BOOL _unicode;	// 24 = 0x18
	int _errorCount;	// 28 = 0x1c
	NSArray *_activeTokenSets;	// 32 = 0x20
}
@property(readonly, assign) unsigned cursor;	// G=0x34ed21c1; converted property
@property(readonly, assign) int errorCount;	// G=0x34ed21d1; converted property
- (id)initWithData:(id)data;	// 0x34ed4175
- (void)_applyNextStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim intoString:(id)string;	// 0x34ed2711
- (BOOL)advancePastEOL;	// 0x34ed2b8d
- (BOOL)advancePastEOLSingle;	// 0x34ed2c0d
- (BOOL)advancePastEOLUnicode;	// 0x34ed2d0d
- (BOOL)advanceToEOL;	// 0x34ed2b59
- (BOOL)advanceToEOLSingle;	// 0x34ed2261
- (BOOL)advanceToEOLUnicode;	// 0x34ed2201
- (void)advanceToPeakPoint;	// 0x34ed21e1
- (int)advanceToSingleByteString;	// 0x34ed2e3d
- (int)advanceToString;	// 0x34ed2ad5
- (BOOL)advanceToToken:(int)token throughTypes:(int)types;	// 0x34ed2b09
- (int)advanceToUnicodeString;	// 0x34ed2f3d
- (BOOL)atEOF;	// 0x34ed22b5
// converted property getter: - (unsigned)cursor;	// 0x34ed21c1
- (void)dealloc;	// 0x34ed2bc1
// converted property getter: - (int)errorCount;	// 0x34ed21d1
- (void)finalize;	// 0x34ed4149
- (id)nextArraySeperatedByToken:(int)token stoppingAt:(int)at inEncoding:(unsigned)encoding;	// 0x34ed28b1
- (id)nextBase64Data;	// 0x34ed29d9
- (id)nextBase64Line:(BOOL *)line;	// 0x34ed29a5
- (id)nextEscapedCharacter;	// 0x34ed264d
- (id)nextQuotedPrintableData;	// 0x34ed24d1
- (id)nextSingleByteBase64Line:(BOOL *)line;	// 0x34ed3061
- (id)nextSingleByteStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim;	// 0x34ed3925
- (id)nextStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim;	// 0x34ed3421
- (int)nextTokenPeak:(BOOL)peak;	// 0x34ed249d
- (int)nextTokenPeakSingle:(BOOL)single length:(int)length;	// 0x34ed3f91
- (int)nextTokenPeakUnicode:(BOOL)unicode length:(int)length;	// 0x34ed3d9d
- (id)nextUnicodeBase64Line:(BOOL *)line;	// 0x34ed3199
- (id)nextUnicodeStringStopTokens:(int)tokens quotedPrintable:(BOOL)printable trim:(BOOL)trim;	// 0x34ed34e1
- (int)tokenAtCursor;	// 0x34ed32f1
- (id)tokenName:(int)name;	// 0x34ed22e1
- (id)tokenSetForLength:(int)length;	// 0x34ed2405
@end
