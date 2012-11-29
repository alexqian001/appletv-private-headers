/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData;

@interface SBJsonUTF8Stream : XXUnknownSuperclass {
	const char *_bytes;	// 4 = 0x4
	NSMutableData *_data;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	unsigned _index;	// 16 = 0x10
}
@property(assign) unsigned index;	// G=0x4ab765; S=0x4ab779; @synthesize=_index
- (id)init;	// 0x4ab341
- (void)appendData:(id)data;	// 0x4ab3fd
- (void)dealloc;	// 0x4ab3b1
- (BOOL)getNextUnichar:(unsigned short *)unichar;	// 0x4ab4f1
- (BOOL)getSimpleString:(id *)string;	// 0x4ab545
- (BOOL)getUnichar:(unsigned short *)unichar;	// 0x4ab4b5
- (BOOL)haveRemainingCharacters:(unsigned)characters;	// 0x4ab669
// declared property getter: - (unsigned)index;	// 0x4ab765
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x4ab779
- (void)skip;	// 0x4ab5f5
- (BOOL)skipCharacters:(const char *)characters length:(unsigned)length;	// 0x4ab6a9
- (void)skipWhitespace;	// 0x4ab609
- (id)stringWithRange:(NSRange)range;	// 0x4ab701
@end
