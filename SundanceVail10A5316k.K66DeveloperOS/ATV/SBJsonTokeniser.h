/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBJsonUTF8Stream;

@interface SBJsonTokeniser : XXUnknownSuperclass {
	SBJsonUTF8Stream *_stream;	// 4 = 0x4
	NSString *_error;	// 8 = 0x8
}
@property(copy) NSString *error;	// G=0x4552d1; S=0x4552e5; @synthesize=_error
- (id)init;	// 0x4545d9
- (void)appendData:(id)data;	// 0x454689
- (void)dealloc;	// 0x45463d
- (BOOL)decodeEscape:(unsigned short)escape into:(unsigned short *)into;	// 0x454755
- (BOOL)decodeHexQuad:(unsigned short *)quad;	// 0x4547c9
// declared property getter: - (id)error;	// 0x4552d1
- (int)getNumberToken:(id *)token;	// 0x454bbd
- (int)getStringToken:(id *)token;	// 0x45485d
- (int)getToken:(id *)token;	// 0x455085
- (int)match:(const char *)match length:(unsigned)length retval:(int)retval;	// 0x4546a9
// declared property setter: - (void)setError:(id)error;	// 0x4552e5
@end

