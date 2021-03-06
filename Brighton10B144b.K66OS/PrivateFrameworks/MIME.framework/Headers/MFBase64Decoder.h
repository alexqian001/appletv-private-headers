/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"

@class NSMutableData;

@interface MFBase64Decoder : MFBaseFilterDataConsumer {
	NSMutableData *_leftovers;	// 12 = 0xc
	unsigned _decodedBits;	// 16 = 0x10
	unsigned long _validBytes;	// 20 = 0x14
	unsigned long _equalCount;	// 24 = 0x18
	const char *_table;	// 28 = 0x1c
	BOOL _bound;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL convertCommas;	// G=0x3442d955; S=0x3442d929; 
@property(assign, nonatomic) BOOL isBound;	// G=0x3442da35; S=0x3442da45; @synthesize=_bound
@property(readonly, assign, nonatomic) unsigned long unconverted;	// G=0x3442da25; @synthesize=_validBytes
+ (BOOL)isValidBase64:(id)a64;	// 0x3442d979
- (id)initWithConsumers:(id)consumers;	// 0x3442d0a5
- (unsigned long)_decodeBytes:(const char *)bytes end:(const char *)end into:(char *)into length:(unsigned long)length startingAt:(unsigned long)at outEncodedOffset:(unsigned *)offset;	// 0x3442d0ed
- (int)appendData:(id)data;	// 0x3442d25d
// declared property getter: - (BOOL)convertCommas;	// 0x3442d955
- (void)dealloc;	// 0x3442d8dd
- (void)done;	// 0x3442d6e9
// declared property getter: - (BOOL)isBound;	// 0x3442da35
// declared property setter: - (void)setConvertCommas:(BOOL)commas;	// 0x3442d929
// declared property setter: - (void)setIsBound:(BOOL)bound;	// 0x3442da45
// declared property getter: - (unsigned long)unconverted;	// 0x3442da25
@end

